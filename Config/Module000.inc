[Variables]

;----------------------------------------------------
; # # BEGIN EDITING BELOW # # # # # # # # # # # # # #
; ----------------------------------------------------

Uptimer-KazukiGames82___Show_Icon=1
Uptimer-KazukiGames82___Show_Text=0

Uptimer-KazukiGames82___Show_Startup_Machine=1
Uptimer-KazukiGames82___Show_Startup_User=0
Uptimer-KazukiGames82___Show_Startup_Login=0

;----------------------------------------------------

NumberOfItems=8
NumberOfDividers=4

;----------------------------------------------------

ItemText1=Top Bar Preferences

ItemText2=Show Icon
ItemAction2=[!SetVariable Uptimer-KazukiGames82___Show_Icon "([#*Uptimer-KazukiGames82___Show_Text*]=0?1:([#*Uptimer-KazukiGames82___Show_Icon*]=1?0:1))"][!WriteKeyValue Variables Uptimer-KazukiGames82___Show_Icon "([#*Uptimer-KazukiGames82___Show_Text*]=0?1:([#*Uptimer-KazukiGames82___Show_Icon*]=1?0:1))" "#CURRENTPATH#\Config\Module000.inc"][!UpdateMeter *][!Redraw]

ItemText3=Show Login Time
ItemAction3=[!SetVariable Uptimer-KazukiGames82___Show_Text "([#*Uptimer-KazukiGames82___Show_Icon*]=0?1:([#*Uptimer-KazukiGames82___Show_Text*]=1?0:1))"][!WriteKeyValue Variables Uptimer-KazukiGames82___Show_Text "([#*Uptimer-KazukiGames82___Show_Icon*]=0?1:([#*Uptimer-KazukiGames82___Show_Text*]=1?0:1))" "#CURRENTPATH#\Config\Module000.inc"][!UpdateMeter *][!Redraw]

ItemText4=Dropdown Preferences

ItemText5=Show Machine Startup
ItemAction5=[!SetVariable Uptimer-KazukiGames82___Show_Startup_Machine "([#*Uptimer-KazukiGames82___Show_Startup_User*]=0?([#*Uptimer-KazukiGames82___Show_Startup_Login*]=0?1:([#*Uptimer-KazukiGames82___Show_Startup_Machine*]=1?0:1)):([#*Uptimer-KazukiGames82___Show_Startup_Machine*]=1?0:1))"][!WriteKeyValue Variables Uptimer-KazukiGames82___Show_Startup_Machine "([#*Uptimer-KazukiGames82___Show_Startup_User*]=0?([#*Uptimer-KazukiGames82___Show_Startup_Login*]=0?1:([#*Uptimer-KazukiGames82___Show_Startup_Machine*]=1?0:1)):([#*Uptimer-KazukiGames82___Show_Startup_Machine*]=1?0:1))" "#CURRENTPATH#\Config\Module000.inc"][!UpdateMeter *][!Redraw]

ItemText6=Show User Startup
ItemAction6=[!SetVariable Uptimer-KazukiGames82___Show_Startup_User "([#*Uptimer-KazukiGames82___Show_Startup_Machine*]=0?([#*Uptimer-KazukiGames82___Show_Startup_Login*]=0?1:([#*Uptimer-KazukiGames82___Show_Startup_User*]=1?0:1)):([#*Uptimer-KazukiGames82___Show_Startup_User*]=1?0:1))"][!WriteKeyValue Variables Uptimer-KazukiGames82___Show_Startup_User "([#*Uptimer-KazukiGames82___Show_Startup_Machine*]=0?([#*Uptimer-KazukiGames82___Show_Startup_Login*]=0?1:([#*Uptimer-KazukiGames82___Show_Startup_User*]=1?0:1)):([#*Uptimer-KazukiGames82___Show_Startup_User*]=1?0:1))" "#CURRENTPATH#\Config\Module000.inc"][!UpdateMeter *][!Redraw]

ItemText7=Show History Login
ItemAction7=[!SetVariable Uptimer-KazukiGames82___Show_Startup_Login "([#*Uptimer-KazukiGames82___Show_Startup_User*]=0?([#*Uptimer-KazukiGames82___Show_Startup_Machine*]=0?1:([#*Uptimer-KazukiGames82___Show_Startup_Login*]=1?0:1)):([#*Uptimer-KazukiGames82___Show_Startup_Login*]=1?0:1))"][!WriteKeyValue Variables Uptimer-KazukiGames82___Show_Startup_Login "([#*Uptimer-KazukiGames82___Show_Startup_User*]=0?([#*Uptimer-KazukiGames82___Show_Startup_Machine*]=0?1:([#*Uptimer-KazukiGames82___Show_Startup_Login*]=1?0:1)):([#*Uptimer-KazukiGames82___Show_Startup_Login*]=1?0:1))" "#CURRENTPATH#\Config\Module000.inc"][!UpdateMeter *][!Redraw]

ItemText8=#StartP8Button2#
ItemAction8=[!SetVariable Uptimer-KazukiGames82___Show_Icon "[#*Uptimer-KazukiGames82___Show_Icon*]" "Droptop\Dropdownbar"][!SetVariable Uptimer-KazukiGames82___Show_Text "[#*Uptimer-KazukiGames82___Show_Text*]" "Droptop\Dropdownbar"][!SetVariable Uptimer-KazukiGames82___Show_Startup_Machine "[#*Uptimer-KazukiGames82___Show_Startup_Machine*]" "Droptop\Dropdownbar"][!SetVariable Uptimer-KazukiGames82___Show_Startup_User "[#*Uptimer-KazukiGames82___Show_Startup_User*]" "Droptop\Dropdownbar"][!SetVariable Uptimer-KazukiGames82___Show_Startup_Login "[#*Uptimer-KazukiGames82___Show_Startup_Login*]" "Droptop\Dropdownbar"][!SetVariable Uptimer-KazukiGames82___Show_Icon "[#*Uptimer-KazukiGames82___Show_Icon*]" "Droptop\Other\BackgroundProcesses"][!SetVariable Uptimer-KazukiGames82___Show_Text "[#*Uptimer-KazukiGames82___Show_Text*]" "Droptop\Other\BackgroundProcesses"][!WriteKeyValue Variables Uptimer-KazukiGames82___Show_Icon "[#*Uptimer-KazukiGames82___Show_Icon*]" "#MyVariablesLoc#"][!WriteKeyValue Variables Uptimer-KazukiGames82___Show_Text "[#*Uptimer-KazukiGames82___Show_Text*]" "#MyVariablesLoc#"][!WriteKeyValue Variables Uptimer-KazukiGames82___Show_Startup_Machine "[#*Uptimer-KazukiGames82___Show_Startup_Machine*]" "#MyVariablesLoc#"][!WriteKeyValue Variables Uptimer-KazukiGames82___Show_Startup_User "[#*Uptimer-KazukiGames82___Show_Startup_User*]" "#MyVariablesLoc#"][!WriteKeyValue Variables Uptimer-KazukiGames82___Show_Startup_Login "[#*Uptimer-KazukiGames82___Show_Startup_Login*]" "#MyVariablesLoc#"][!HideFade][!Delay 150][!Refresh][!#Show#][#Uptimer-KazukiGames82___Update_1]

; ----------------------------------------------------
; Strings
; ----------------------------------------------------

[1]
StringAlign=CenterCenter
Padding=#DropdownNoIconPadding#,#DropdownItemPaddingY#,#DropdownNoIconPadding#,(#DropdownItemPaddingY#*-1)
FontColor=#DropdownFontColor1#,(#DropdownItemOpacity#/1.25)
X=((#DropdownMenuWidth#+2)/2)
W=((#DropdownMenuWidth#+2)-#DropdownNoIconPadding#*2)
MouseOverAction=
MouseLeaveAction=

;---

[Divider1]
Meter=Shape
Shape=#DividerShape#
Y=((#DropdownItemHeight#/2)+#DividerSpace#)r

;---

[2]
Y=((#DropdownItemHeight#/2)+#DividerSpace#)R

;---

[Divider3]
Meter=Shape
Shape=#DividerShape#
Y=((#DropdownItemHeight#/2)+#DividerSpace#)r

; ---

[4]
StringAlign=CenterCenter
Padding=#DropdownNoIconPadding#,#DropdownItemPaddingY#,#DropdownNoIconPadding#,(#DropdownItemPaddingY#*-1)
FontColor=#DropdownFontColor1#,(#DropdownItemOpacity#/1.25)
X=((#DropdownMenuWidth#+2)/2)
Y=((#DropdownItemHeight#/2)+#DividerSpace#)R
W=((#DropdownMenuWidth#+2)-#DropdownNoIconPadding#*2)
MouseOverAction=
MouseLeaveAction=

;---

[Divider4]
Meter=Shape
Shape=#DividerShape#
Y=((#DropdownItemHeight#/2)+#DividerSpace#)r

;---

[5]
Y=((#DropdownItemHeight#/2)+#DividerSpace#)R

;---

[Divider7]
Meter=Shape
Shape=#DividerShape#
Y=((#DropdownItemHeight#/2)+#DividerSpace#)r

;---

[8]
StringAlign=CenterCenter
Padding=#DropdownNoIconPadding#,#DropdownItemPaddingY#,#DropdownNoIconPadding#,(#DropdownItemPaddingY#*-1)
X=((#DropdownMenuWidth#+2)/2)
Y=((#DropdownItemHeight#/2)+#DividerSpace#)R
W=((#DropdownMenuWidth#+2)-#DropdownNoIconPadding#*2)

;----------------------------------------------------
; Icons
;----------------------------------------------------

[2Icon]
Y=[[##CURRENTSECTION#]:Y]
ImageName=#MyIconsLoc#\checkbox\0#Uptimer-KazukiGames82___Show_Icon#.png
ImageAlpha=(#DropdownItemOpacity#/(#Uptimer-KazukiGames82___Show_Icon#<>1?3:1))

[3Icon]
ImageName=#MyIconsLoc#\checkbox\0#Uptimer-KazukiGames82___Show_Text#.png
ImageAlpha=(#DropdownItemOpacity#/(#Uptimer-KazukiGames82___Show_Text#<>1?3:1))

[5Icon]
Y=[[##CURRENTSECTION#]:Y]
ImageName=#MyIconsLoc#\checkbox\0#Uptimer-KazukiGames82___Show_Startup_Machine#.png
ImageAlpha=(#DropdownItemOpacity#/(#Uptimer-KazukiGames82___Show_Startup_Machine#<>1?3:1))

[6Icon]
ImageName=#MyIconsLoc#\checkbox\0#Uptimer-KazukiGames82___Show_Startup_User#.png
ImageAlpha=(#DropdownItemOpacity#/(#Uptimer-KazukiGames82___Show_Startup_User#<>1?3:1))

[7Icon]
ImageName=#MyIconsLoc#\checkbox\0#Uptimer-KazukiGames82___Show_Startup_Login#.png
ImageAlpha=(#DropdownItemOpacity#/(#Uptimer-KazukiGames82___Show_Startup_Login#<>1?3:1))
