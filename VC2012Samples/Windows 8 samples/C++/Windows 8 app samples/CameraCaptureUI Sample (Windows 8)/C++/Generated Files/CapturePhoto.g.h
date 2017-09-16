﻿#pragma once
//------------------------------------------------------------------------------
//     This code was generated by a tool.
//
//     Changes to this file may cause incorrect behavior and will be lost if
//     the code is regenerated.
//------------------------------------------------------------------------------


namespace Windows {
    namespace UI {
        namespace Xaml {
            namespace Controls {
                ref class Grid;
                ref class Image;
                ref class Button;
            }
        }
    }
}
namespace Windows {
    namespace UI {
        namespace Xaml {
            ref class VisualState;
        }
    }
}

namespace SDKSample
{
    namespace CameraCapture
    {
        [::Windows::Foundation::Metadata::WebHostHidden]
        partial ref class CapturePhoto : public ::SDKSample::Common::LayoutAwarePage, 
            public ::Windows::UI::Xaml::Markup::IComponentConnector,
            public ::Windows::UI::Xaml::Markup::IComponentConnector2
        {
        public:
            void InitializeComponent();
            virtual void Connect(int connectionId, ::Platform::Object^ target);
            virtual ::Windows::UI::Xaml::Markup::IComponentConnector^ GetBindingConnector(int connectionId, ::Platform::Object^ target);
        
        private:
            void UnloadObject(::Windows::UI::Xaml::DependencyObject^ dependencyObject);
            void DisconnectUnloadedObject(int connectionId);
        
        private:
            bool _contentLoaded;
        
        
            private: ::Windows::UI::Xaml::Controls::Grid^ LayoutRoot;
            private: ::Windows::UI::Xaml::Controls::Grid^ Input;
            private: ::Windows::UI::Xaml::Controls::Grid^ Output;
            private: ::Windows::UI::Xaml::Controls::Image^ CapturedPhoto;
            private: ::Windows::UI::Xaml::Controls::Button^ CapturePhotoButton;
            private: ::Windows::UI::Xaml::Controls::Button^ ResetButton;
            private: ::Windows::UI::Xaml::VisualState^ FullScreenLandscape;
            private: ::Windows::UI::Xaml::VisualState^ Filled;
            private: ::Windows::UI::Xaml::VisualState^ FullScreenPortrait;
            private: ::Windows::UI::Xaml::VisualState^ Snapped;
        };
    }
}

