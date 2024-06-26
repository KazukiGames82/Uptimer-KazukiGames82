[Variables]

;----------------------------------------------------
; # # BEGIN EDITING BELOW # # # # # # # # # # # # # #
;----------------------------------------------------

NumberOfItems=2
NumberOfDividers=0

NumberOfItems2=2
NumberOfDividers2=0

;----------------------------------------------------

ItemText1=Machine Startup
ItemText2=[&Measure_PC_Uptime_Date]#CRLF#[#Uptimer-KazukiGames82___Text__For_Machine_Startup] [&Measure_PC_Uptime_Time]
ItemText3=User Startup
ItemText4=[&Measure_User_Uptime_Date]#CRLF#[#Uptimer-KazukiGames82___Text__For_User_Startup] [#Uptimer-KazukiGames82___Data_Login_History_Time_1]

;----------------------------------------------------
; Backgrounds
;----------------------------------------------------

[Background]
Shape=Rectangle #DropdownMenuCutout#,(#DropdownMenuShapeOffsetH#+#DropdownMenuCutout#),(#DropdownMenuWidth#+#SysAppMenuWOffset#+2-(#DropdownMenuCutout#*2)),(#DropdownItemHeight#*(#NumberOfItems#+1)+((#DropdownIconYoffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)-(#DropdownMenuCutout#*2)),#DropdownBGCorner# | Fill Color #DropdownBGColor1#,(#ForceOpaque#=1?255:(#DropdownMenuOpacity1#<1?1:#DropdownMenuOpacity1#)) | StrokeWidth #DropdownStrokeWidth# | Stroke Color #DropdownStrokeColor#,#DropdownStrokeOpacity#
Shape2=#FlatTopShape#
Shape4=Rectangle #DropdownMenuCutout#,(#DropdownMenuShapeOffsetH#+#DropdownMenuCutout#),1,(#DropdownItemHeight#*(#NumberOfItems#+1)+((#DropdownIconYoffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)-(#DropdownMenuCutout#*2)+(#DropdownStrokeWidth#*#DropdownRoundCorners#)) | Fill Color 0,0,0,0 | StrokeWidth 0
Y=(-([#CURRENTSECTION#:H]+[#CURRENTSECTION#2:H]+(3*#DroptopSize#))*((#Uptimer_Slide#-1)*-1))
DynamicVariables=1

[Background2]
Meter=Shape
MeterStyle=BackgroundStyle
Shape=Rectangle #DropdownMenuCutout#,#DropdownMenuCutout#,(#DropdownMenuWidth#+#SysAppMenuWOffset#+2-(#DropdownMenuCutout#*2)),(#DropdownItemHeight#+((#DropdownItemHeight#*2)*(#NumberOfItems2#-1))+((#DropdownIconYoffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers2#)-(#DropdownMenuCutout#*2)),#DropdownBGCorner# | Fill Color #DropdownBGColor1#,(#ForceOpaque#=1?255:(#DropdownMenuOpacity1#<1?1:#DropdownMenuOpacity1#)) | StrokeWidth #DropdownStrokeWidth# | Stroke Color #DropdownStrokeColor#,#DropdownStrokeOpacity#
Shape2=Rectangle #DropdownMenuCutout#,#DropdownMenuCutout#,1,(#DropdownItemHeight#+((#DropdownItemHeight#*2)*(#NumberOfItems2#-1))+((#DropdownIconYoffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers2#)-(#DropdownMenuCutout#*2)+(#DropdownStrokeWidth#*#DropdownRoundCorners#)) | Fill Color 0,0,0,0 | StrokeWidth 0
Y=(3*#DroptopSize#)R
DynamicVariables=1

;----------------------------------------------------
; Highlight
;----------------------------------------------------

[HighlightBackground]
Shape=Rectangle [#Meter_Shape_1_Type_[#CurrentHighlightType]]
Shape2=Rectangle [#Meter_Shape_2_Type_[#CurrentHighlightType]]
Shape3=Rectangle [#Meter_Shape_3_Type_[#CurrentHighlightType]]
Shape4=Rectangle [#Meter_Shape_4_Type_[#CurrentHighlightType]]
Y=(-([Background:H]+(3*#DroptopSize#)))r

;----------------------------------------------------
; Strings
;----------------------------------------------------

[1]
Y=((#DropdownIconYoffset#+(#DropdownItemHeight#/2))-((#DropdownIconYoffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#)r
MouseOverAction=
MouseLeaveAction=

[2]
MeterStyle=InfoStyle | MiniInfoStyle
Y=(#DropdownItemHeight#/2)R

;--------------------------

[3]
MeterStyle=InfoStyle | SubMiniInfoStyle
Y=([Background2:Y]+(#DropdownIconYoffset#+(#DropdownItemHeight#/2))-((#DropdownIconYoffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#-([2:Y]+[2:H]/2))r
MouseOverAction=
MouseLeaveAction=
Hidden=0

[4]
MeterStyle=InfoStyle | MiniInfoStyle
Y=(#DropdownItemHeight#/2)R
Hidden=0

;----------------------------------------------------
; Icons 
;----------------------------------------------------

[1Icon]
ImageName=#MyIconsLoc#\1Icon.png
Y=((((#DropdownItemHeight#*2)*(#NumberOfItems2#-1))+[Background2:Y]+(#DropdownIconYoffset#+(#DropdownItemHeight#/2))-((#DropdownIconYoffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#-[2:Y]+[#CURRENTSECTION#:H]/2)*-1)r

[2Icon]
Meter=String
MeterStyle=InfoStyle | MiniInfoStyle | SubInfoStyle
Y=([[##CURRENTSECTION#]:H]/2)R
Hidden=0

;--------------------------

[3Icon]
ImageName=#MyIconsLoc#\2Icon.png
Y=([3:Y]-([2Icon:Y]+[2Icon:H]/2))r
Hidden=0

[4Icon]
Meter=String
MeterStyle=InfoStyle | MiniInfoStyle | SubInfoStyle
Y=([[##CURRENTSECTION#]:H]/2)R
Hidden=0

;----------------------------------------------------
; Failsafe
;----------------------------------------------------

[5]
Padding=0,0,0,
Y=r
H=0

[5Icon]
Padding=0,0,0,0
Y=r
H=0
