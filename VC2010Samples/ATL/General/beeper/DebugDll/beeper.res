                                  <      V S _ V E R S I O N _ I N F O       0 	        4   V S _ V E R S I O N _ I N F O     ╜я■               ?                        n   S t r i n g F i l e I n f o   J   0 4 0 9 0 4 b 0   L   C o m p a n y N a m e     M i c r o s o f t   C o r p o r a t i o n   D   F i l e D e s c r i p t i o n     b e e p e r   M o d u l e   6   F i l e V e r s i o n     1 ,   0 ,   0 ,   1     .   I n t e r n a l N a m e   B E E P E R     В /  L e g a l C o p y r i g h t   й   M i c r o s o f t   C o r p o r a t i o n .     A l l   r i g h t s   r e s e r v e d .     >   O r i g i n a l F i l e n a m e   B E E P E R . D L L     <   P r o d u c t N a m e     b e e p e r   M o d u l e   :   P r o d u c t V e r s i o n   1 ,   0 ,   0 ,   1     D    V a r F i l e I n f o     $    T r a n s l a t i o n     	░Ж  0   R E G I S T R Y     e       0 	        HKCR
{
	ForceRemove BeeperLib.Beeper.1 = s 'Beeper Class'
	{
		CLSID = s '{8FD6E504-78CA-4236-9819-37A7AA09C2D7}'
	}
	ForceRemove BeeperLib.Beeper = s 'Beeper Class'
	{
		CurVer = s 'BeeperLib.Beeper.1'
	}
	NoRemove CLSID
	{
		ForceRemove {8FD6E504-78CA-4236-9819-37A7AA09C2D7} = s 'Beeper Class'
		{
			ProgID = s 'BeeperLib.Beeper.1'
			VersionIndependentProgID = s 'BeeperLib.Beeper'
			'Programmable'
			InprocServer32 = s '%MODULE%'
			{
				val ThreadingModel = s 'Apartment'
			}
			'TypeLib' = s '{1CD7DD6A-7689-4926-842B-8F92DE6D92F0}'
			'Version' = s '1.0'

			val LocalizedString = s '@%MODULE%,-1'
		}
	}
}  h  0   R E G I S T R Y     f       0 	        HKCR
{
	NoRemove AppID
	{
		'{92491A56-D6BD-4517-AB30-C09DD4CA73F6}' = s 'beeper'
		'beeper.exe'
		{
			val AppID = s '{92491A56-D6BD-4517-AB30-C09DD4CA73F6}'
		}
	}
	ForceRemove BeeperLib.Beeper.1 = s 'Beeper Class'
	{
		CLSID = s '{8FD6E504-78CA-4236-9819-37A7AA09C2D7}'
	}
	ForceRemove BeeperLib.Beeper = s 'Beeper Class'
	{
		CurVer = s 'BeeperLib.Beeper.1'
	}
	NoRemove CLSID
	{
		ForceRemove {8FD6E504-78CA-4236-9819-37A7AA09C2D7} = s 'Beeper Class'
		{
			ProgID = s 'BeeperLib.Beeper.1'
			VersionIndependentProgID = s 'BeeperLib.Beeper'
			'Programmable'
			LocalServer32 = s '%MODULE%'
			{
				val ThreadingModel = s 'Apartment'
				val AppID = s '{92491A56-D6BD-4517-AB30-C09DD4CA73F6}'
			}
			'TypeLib' = s '{1CD7DD6A-7689-4926-842B-8F92DE6D92F0}'
			'Version' = s '1.0'

			val LocalizedString = s '@%MODULE%,-1'
		}
	}
}t  ,   T Y P E L I B          0 	        MSFT      	      A                         
   ;                  А             d   L  ╚          d            p            T              А          Ф  └          М            М  ─          P  ╕                                        T          t  $                                        %"  Ш                                     `                                                  4" Ш                                    и   @  ,       ,                ,                         Р                           `                                   x   и                   H                          0   j▌╫Йv&IД+ПТ▐mТЁ■       e║w▐|Q╤в┌  °w<щ        c║w▐|Q╤в┌  °w<щ        d║w▐|Q╤в┌  °w<щ        х╓П╩x6BШ7зк	┬╫        0     └      F             └      F       Д╒Дc█╧З  к S md       d                    Р   x          - stdole2.tlbWWW                            Ь                                           @                   ,                                                                                                   P                                                                                                                  d                                       x                                                                                                       И                           ░                                       	 tыBeeperLibWWW        81BeeperWWd       8ЧGIBeeperWd        ├Beepd        0vCountWWW         ═;retvalWWd        ╫zItem         ё┐IndexWWW         З╦pbstrWWWd        xA_NewEnum Beeper 1.0 Type LibraryWWW Beeper ObjectW IBeeper InterfaceW Play the current sound( Returns number of strings in collection.WW2 Given an index, returns a string in the collection @ А @ А @ А >   Created by MIDL version 8.01.0622 at Mon Jan 18 19:14:07 2038
    WW nWW           0   D       H   L      и        А     4 	          @   ,   А      L D        X       d   
   8   А    $ \ D        Д    АИ         Ь   
   $   А   ( L D       d   
     ` `    №   @   P   x   ░           L   Д   B                 0	           B e e p e r   1 . 0   O b j e c t                               