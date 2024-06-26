[Variables]

;----------------------------------------------------
; # # BEGIN EDITING BELOW # # # # # # # # # # # # # #
; ----------------------------------------------------

Uptimer-KazukiGames82___Hide_Icon=0
Uptimer-KazukiGames82___Hide_Text=1

Uptimer-KazukiGames82___Show_Startup_Machine=1
Uptimer-KazukiGames82___Show_Startup_User=0
Uptimer-KazukiGames82___Show_Startup_Login=0

;----------------------------------------------------

Uptimer_Animation_Slide_Up_0=[!#Hide#][!Delay 150][!Refresh][!#Show#]

;----------------------------------------------------

NumberOfItems=10
NumberOfDividers=7

;----------------------------------------------------

ItemText1=Welcome To#CRLF#Uptimer app for Droptop

ItemText2=Top Bar Preferences

ItemText3=Show Icon
ItemAction3=[!SetVariable Uptimer-KazukiGames82___Hide_Icon "([#*Uptimer-KazukiGames82___Hide_Text*]=1?0:([#*Uptimer-KazukiGames82___Hide_Icon*]=1?0:1))"][!WriteKeyValue Variables Uptimer-KazukiGames82___Hide_Icon "([#*Uptimer-KazukiGames82___Hide_Text*]=1?1:([#*Uptimer-KazukiGames82___Hide_Icon*]=1?0:1))" "#CURRENTPATH#\Config\Module000.inc"][!UpdateMeter *][!Redraw]

ItemText4=Show Login Time
ItemAction4=[!SetVariable Uptimer-KazukiGames82___Hide_Text "([#*Uptimer-KazukiGames82___Hide_Icon*]=1?0:([#*Uptimer-KazukiGames82___Hide_Text*]=1?0:1))"][!WriteKeyValue Variables Uptimer-KazukiGames82___Hide_Text "([#*Uptimer-KazukiGames82___Hide_Icon*]=1?0:([#*Uptimer-KazukiGames82___Hide_Text*]=1?0:1))" "#CURRENTPATH#\Config\Module000.inc"][!UpdateMeter *][!Redraw]

ItemText5=Dropdown Preferences

ItemText6=Use Dropdown Animations
ItemAction6=[!SetVariable Uptimer-KazukiGames82___Use_Dropdown_Animation "([#*Uptimer-KazukiGames82___Use_Dropdown_Animation*]=1?0:1)"][!WriteKeyValue Variables Uptimer-KazukiGames82___Use_Dropdown_Animation "([#*Uptimer-KazukiGames82___Use_Dropdown_Animation*]=1?0:1)" "#MyVariablesLoc#"][!UpdateMeter *][!Redraw]

ItemText7=Show Machine Startup
ItemAction7=[!SetVariable Uptimer-KazukiGames82___Show_Startup_Machine "([#*Uptimer-KazukiGames82___Show_Startup_User*]=0?([#*Uptimer-KazukiGames82___Show_Startup_Login*]=0?1:([#*Uptimer-KazukiGames82___Show_Startup_Machine*]=1?0:1)):([#*Uptimer-KazukiGames82___Show_Startup_Machine*]=1?0:1))"][!WriteKeyValue Variables Uptimer-KazukiGames82___Show_Startup_Machine "([#*Uptimer-KazukiGames82___Show_Startup_User*]=0?([#*Uptimer-KazukiGames82___Show_Startup_Login*]=0?1:([#*Uptimer-KazukiGames82___Show_Startup_Machine*]=1?0:1)):([#*Uptimer-KazukiGames82___Show_Startup_Machine*]=1?0:1))" "#CURRENTPATH#\Config\Module000.inc"][!UpdateMeter *][!Redraw]

ItemText8=Show User Startup
ItemAction8=[!SetVariable Uptimer-KazukiGames82___Show_Startup_User "([#*Uptimer-KazukiGames82___Show_Startup_Machine*]=0?([#*Uptimer-KazukiGames82___Show_Startup_Login*]=0?1:([#*Uptimer-KazukiGames82___Show_Startup_User*]=1?0:1)):([#*Uptimer-KazukiGames82___Show_Startup_User*]=1?0:1))"][!WriteKeyValue Variables Uptimer-KazukiGames82___Show_Startup_User "([#*Uptimer-KazukiGames82___Show_Startup_Machine*]=0?([#*Uptimer-KazukiGames82___Show_Startup_Login*]=0?1:([#*Uptimer-KazukiGames82___Show_Startup_User*]=1?0:1)):([#*Uptimer-KazukiGames82___Show_Startup_User*]=1?0:1))" "#CURRENTPATH#\Config\Module000.inc"][!UpdateMeter *][!Redraw]

ItemText9=Show History Login
ItemAction9=[!SetVariable Uptimer-KazukiGames82___Show_Startup_Login "([#*Uptimer-KazukiGames82___Show_Startup_User*]=0?([#*Uptimer-KazukiGames82___Show_Startup_Machine*]=0?1:([#*Uptimer-KazukiGames82___Show_Startup_Login*]=1?0:1)):([#*Uptimer-KazukiGames82___Show_Startup_Login*]=1?0:1))"][!WriteKeyValue Variables Uptimer-KazukiGames82___Show_Startup_Login "([#*Uptimer-KazukiGames82___Show_Startup_User*]=0?([#*Uptimer-KazukiGames82___Show_Startup_Machine*]=0?1:([#*Uptimer-KazukiGames82___Show_Startup_Login*]=1?0:1)):([#*Uptimer-KazukiGames82___Show_Startup_Login*]=1?0:1))" "#CURRENTPATH#\Config\Module000.inc"][!UpdateMeter *][!Redraw]

ItemText10=#StartP8Button2#
ItemAction10=[!SetVariable Uptimer-KazukiGames82___Hide_Icon "[#*Uptimer-KazukiGames82___Hide_Icon*]" "Droptop\Dropdownbar"][!SetVariable Uptimer-KazukiGames82___Hide_Text "[#*Uptimer-KazukiGames82___Hide_Text*]" "Droptop\Dropdownbar"][!SetVariable Uptimer-KazukiGames82___Show_Startup_Machine "[#*Uptimer-KazukiGames82___Show_Startup_Machine*]" "Droptop\Dropdownbar"][!SetVariable Uptimer-KazukiGames82___Show_Startup_User "[#*Uptimer-KazukiGames82___Show_Startup_User*]" "Droptop\Dropdownbar"][!SetVariable Uptimer-KazukiGames82___Show_Startup_Login "[#*Uptimer-KazukiGames82___Show_Startup_Login*]" "Droptop\Dropdownbar"][!SetVariable Uptimer-KazukiGames82___Hide_Icon "[#*Uptimer-KazukiGames82___Hide_Icon*]" "Droptop\Other\BackgroundProcesses"][!SetVariable Uptimer-KazukiGames82___Hide_Text "[#*Uptimer-KazukiGames82___Hide_Text*]" "Droptop\Other\BackgroundProcesses"][!WriteKeyValue Variables Uptimer-KazukiGames82___Hide_Icon "[#*Uptimer-KazukiGames82___Hide_Icon*]" "#MyVariablesLoc#"][!WriteKeyValue Variables Uptimer-KazukiGames82___Hide_Text "[#*Uptimer-KazukiGames82___Hide_Text*]" "#MyVariablesLoc#"][!WriteKeyValue Variables Uptimer-KazukiGames82___Show_Startup_Machine "[#*Uptimer-KazukiGames82___Show_Startup_Machine*]" "#MyVariablesLoc#"][!WriteKeyValue Variables Uptimer-KazukiGames82___Show_Startup_User "[#*Uptimer-KazukiGames82___Show_Startup_User*]" "#MyVariablesLoc#"][!WriteKeyValue Variables Uptimer-KazukiGames82___Show_Startup_Login "[#*Uptimer-KazukiGames82___Show_Startup_Login*]" "#MyVariablesLoc#"][#Uptimer-KazukiGames82___Update_0][#Uptimer_Animation_Slide_Up_[#*Uptimer-KazukiGames82___Use_Dropdown_Animation*]]

;----------------------------------------------------
; Background
;----------------------------------------------------

[UptimerTimer]
SlideUpEnd=[!Hide][!Refresh]

;----------------------------------------------------
; Background
;----------------------------------------------------

[Background]
Shape=Rectangle #DropdownMenuCutout#,(#DropdownMenuShapeOffsetH#+#DropdownMenuCutout#),(#DropdownMenuWidth#+#SysAppMenuWOffset#+2-(#DropdownMenuCutout#*2)),(#DropdownItemHeight#*(#NumberOfItems#+1)+((#DropdownIconYoffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)-(#DropdownMenuCutout#*2)),#DropdownBGCorner# | Fill Color #DropdownBGColor1#,(#ForceOpaque#=1?255:(#DropdownMenuOpacity1#<1?1:#DropdownMenuOpacity1#)) | StrokeWidth #DropdownStrokeWidth# | Stroke Color #DropdownStrokeColor#,#DropdownStrokeOpacity#
Shape2=#FlatTopShape#
Shape4=Rectangle #DropdownMenuCutout#,(#DropdownMenuShapeOffsetH#+#DropdownMenuCutout#),1,(#DropdownItemHeight#*(#NumberOfItems#+1)+((#DropdownIconYoffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)-(#DropdownMenuCutout#*2)+(#DropdownStrokeWidth#*#DropdownRoundCorners#)) | Fill Color 0,0,0,0 | StrokeWidth 0
Y=(-([#CURRENTSECTION#:H])*((#Uptimer_Slide#-1)*-1))
DynamicVariables=1

;----------------------------------------------------
; Highlight
;----------------------------------------------------

[HighlightBackground]
Y=r

;----------------------------------------------------
; Strings
;----------------------------------------------------

[1]
StringAlign=CenterCenter
Padding=#DropdownNoIconPadding#,#DropdownItemPaddingY#,#DropdownNoIconPadding#,(#DropdownItemPaddingY#*-1)
X=((#DropdownMenuWidth#+2)/2)
Y=((#DropdownIconYoffset#+#DropdownItemHeight#)-((#DropdownIconYoffset#+#DropdownItemHeight#)%1)+#DropdownItemYOffset#)r
W=((#DropdownMenuWidth#+2)-#DropdownNoIconPadding#*2)
H=(#DropdownItemHeight#*2)
MouseOverAction=
MouseLeaveAction=
LeftMouseDownAction=

;---

[Divider1]
Meter=Shape
Shape=#DividerShape#
Y=(#DropdownItemHeight#+#DividerSpace#)r
DynamicVariables=1

;---

[2]
StringAlign=CenterCenter
Padding=#DropdownNoIconPadding#,#DropdownItemPaddingY#,#DropdownNoIconPadding#,(#DropdownItemPaddingY#*-1)
FontColor=#DropdownFontColor1#,(#DropdownItemOpacity#/1.25)
X=((#DropdownMenuWidth#+2)/2)
Y=((#DropdownItemHeight#/2)+#DividerSpace#)R
W=((#DropdownMenuWidth#+2)-#DropdownNoIconPadding#*2)
MouseOverAction=
MouseLeaveAction=

;---

[Divider2]
Meter=Shape
Shape=#DividerShape#
Y=((#DropdownItemHeight#/2)+#DividerSpace#)r
DynamicVariables=1

;---

[3]
Y=((#DropdownItemHeight#/2)+#DividerSpace#)R

;---

[Divider4]
Meter=Shape
Shape=#DividerShape#
Y=((#DropdownItemHeight#/2)+#DividerSpace#)r
DynamicVariables=1

;---

[5]
StringAlign=CenterCenter
Padding=#DropdownNoIconPadding#,#DropdownItemPaddingY#,#DropdownNoIconPadding#,(#DropdownItemPaddingY#*-1)
FontColor=#DropdownFontColor1#,(#DropdownItemOpacity#/1.25)
X=((#DropdownMenuWidth#+2)/2)
Y=((#DropdownItemHeight#/2)+#DividerSpace#)R
W=((#DropdownMenuWidth#+2)-#DropdownNoIconPadding#*2)
MouseOverAction=
MouseLeaveAction=

;---

[Divider5]
Meter=Shape
Shape=#DividerShape#
Y=((#DropdownItemHeight#/2)+#DividerSpace#)r
DynamicVariables=1

;---

[6]
Y=((#DropdownItemHeight#/2)+#DividerSpace#)R

;---

[Divider6]
Meter=Shape
Shape=#DividerShape#
Y=((#DropdownItemHeight#/2)+#DividerSpace#)r
DynamicVariables=1

;---

[7]
Y=((#DropdownItemHeight#/2)+#DividerSpace#)R

;---

[Divider9]
Meter=Shape
Shape=#DividerShape#
Y=((#DropdownItemHeight#/2)+#DividerSpace#)r
DynamicVariables=1

;---

[10]
StringAlign=CenterCenter
Padding=#DropdownNoIconPadding#,#DropdownItemPaddingY#,#DropdownNoIconPadding#,(#DropdownItemPaddingY#*-1)
X=((#DropdownMenuWidth#+2)/2)
Y=((#DropdownItemHeight#/2)+#DividerSpace#)R
W=((#DropdownMenuWidth#+2)-#DropdownNoIconPadding#*2)

;---

[Divider10]
Meter=Shape
Shape=#DividerShape#
Y=((#DropdownItemHeight#/2)+#DividerSpace#)r
DynamicVariables=1

;----------------------------------------------------
; Icons
;----------------------------------------------------

[1Icon]
Y=([1:Y]-([Divider10:Y]+[Divider10:H]/2))r
Padding=
H=([3Icon:H]*2)

[2Icon]
Y=([Divider1:H]+#DividerSpace#*2)R

[3Icon]
ImageName=#MyIconsLoc#\checkbox\1#Uptimer-KazukiGames82___Hide_Icon#.png
ImageAlpha=(#DropdownItemOpacity#/(#Uptimer-KazukiGames82___Hide_Icon#<>0?3:1))
Y=([Divider2:H]+#DividerSpace#*2)R

[4Icon]
ImageName=#MyIconsLoc#\checkbox\1#Uptimer-KazukiGames82___Hide_Text#.png
ImageAlpha=(#DropdownItemOpacity#/(#Uptimer-KazukiGames82___Hide_Text#<>0?3:1))

[5Icon]
Y=([Divider4:H]+#DividerSpace#*2)R

[6Icon]
ImageName=#MyIconsLoc#\checkbox\0#Uptimer-KazukiGames82___Use_Dropdown_Animation#.png
ImageAlpha=(#DropdownItemOpacity#/(#Uptimer-KazukiGames82___Use_Dropdown_Animation#<>1?3:1))
Y=([Divider5:H]+#DividerSpace#*2)R

[7Icon]
ImageName=#MyIconsLoc#\checkbox\0#Uptimer-KazukiGames82___Show_Startup_Machine#.png
ImageAlpha=(#DropdownItemOpacity#/(#Uptimer-KazukiGames82___Show_Startup_Machine#<>1?3:1))
Y=([Divider6:H]+#DividerSpace#*2)R

[8Icon]
ImageName=#MyIconsLoc#\checkbox\0#Uptimer-KazukiGames82___Show_Startup_User#.png
ImageAlpha=(#DropdownItemOpacity#/(#Uptimer-KazukiGames82___Show_Startup_User#<>1?3:1))

[9Icon]
ImageName=#MyIconsLoc#\checkbox\0#Uptimer-KazukiGames82___Show_Startup_Login#.png
ImageAlpha=(#DropdownItemOpacity#/(#Uptimer-KazukiGames82___Show_Startup_Login#<>1?3:1))
