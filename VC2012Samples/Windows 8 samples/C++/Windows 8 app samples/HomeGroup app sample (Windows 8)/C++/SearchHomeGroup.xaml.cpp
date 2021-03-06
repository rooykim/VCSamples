//*********************************************************
//
// Copyright (c) Microsoft. All rights reserved.
// THIS CODE IS PROVIDED *AS IS* WITHOUT WARRANTY OF
// ANY KIND, EITHER EXPRESS OR IMPLIED, INCLUDING ANY
// IMPLIED WARRANTIES OF FITNESS FOR A PARTICULAR
// PURPOSE, MERCHANTABILITY, OR NON-INFRINGEMENT.
//
//*********************************************************

//
// SearchHomeGroup.xaml.cpp
// Implementation of the SearchHomeGroup class
//

#include "pch.h"
#include "SearchHomeGroup.xaml.h"

using namespace SDKSample::HomeGroup;

using namespace Windows::UI::Xaml;
using namespace Windows::UI::Xaml::Controls;
using namespace Windows::UI::Xaml::Navigation;
using namespace Platform;
using namespace Windows::Storage;
using namespace Windows::Storage::Search;
using namespace concurrency;
using namespace Windows::System;
using namespace Windows::Foundation;
using namespace Windows::Foundation::Collections;
using namespace std;

SDKSample::HomeGroup::SearchHomeGroup::SearchHomeGroup()
{
    InitializeComponent();
}

/// <summary>
/// Invoked when this page is about to be displayed in a Frame.
/// </summary>
/// <param name="e">Event data that describes how this page was reached.  The Parameter
/// property is typically used to configure the page.</param>
void SDKSample::HomeGroup::SearchHomeGroup::OnNavigatedTo(NavigationEventArgs^ e)
{
    // A pointer back to the main page.  This is needed if you want to call methods in MainPage such
    // as NotifyUser()
    rootPage = MainPage::Current;
}

void SDKSample::HomeGroup::SearchHomeGroup::Default_Click(Platform::Object^ sender, Windows::UI::Xaml::RoutedEventArgs^ e)
{
    Button^ button = safe_cast<Button^>(sender);
    if (button != nullptr)
    {
        rootPage->NotifyUser("", NotifyType::StatusMessage);
        auto fileTypeFilter = ref new Platform::Collections::Vector<Platform::String^>();
        fileTypeFilter->Append("*");
        auto queryOptions = ref new QueryOptions(CommonFileQuery::OrderBySearchRank, fileTypeFilter);
        queryOptions->UserSearchFilter = QueryInputBox->Text;

        // This try/catch block is for scenarios where the Homegroup Known Folder is not available.
        try
        {
            auto homeGroupFolder = KnownFolders::HomeGroup;
            auto queryResult = homeGroupFolder->CreateFileQueryWithOptions(queryOptions);
            OutputProgressRing->IsActive = true;
            create_task(queryResult->GetFilesAsync()).then([this, queryOptions](IVectorView<StorageFile^>^ files)
            {
                if (files->Size == 0)
                {
                    rootPage->NotifyUser("No files found for " + QueryInputBox->Text, NotifyType::StatusMessage);
                }
                else
                {
                    String^ outString = (files->Size == 1) ? files->Size + " file found\n\n"
                        : files->Size + " files found\n\n";

                    std::for_each(begin(files), end(files), [this, &outString](StorageFile ^file)
                    {
                        outString += file->Name + "\n";
                    });
                    rootPage->NotifyUser(outString, NotifyType::StatusMessage);
                }
                OutputProgressRing->IsActive = false;
            });
        }
        catch (Exception^ ex)
        {
            rootPage->NotifyUser(ex->Message + "\n", NotifyType::StatusMessage);
        }
    }
}
