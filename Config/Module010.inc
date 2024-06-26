[Variables]

;----------------------------------------------------
; # # BEGIN EDITING BELOW # # # # # # # # # # # # # #
;----------------------------------------------------

NumberOfItems=2
NumberOfDividers=0

;----------------------------------------------------

ItemText1=User Startup
ItemText2=[&Measure_User_Uptime_Date]#CRLF#[#Uptimer-KazukiGames82___Text__For_User_Startup] [#Uptimer-KazukiGames82___Data_Login_History_Time_1]

;----------------------------------------------------
; Background
;----------------------------------------------------

[Background]
Shape=Rectangle #DropdownMenuCutout#,(#DropdownMenuShapeOffsetH#+#DropdownMenuCutout#),(#DropdownMenuWidth#+#SysAppMenuWOffset#+2-(#DropdownMenuCutout#*2)),(#DropdownItemHeight#+((#DropdownItemHeight#*2)*(#NumberOfItems#-1))+((#DropdownIconYoffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)-(#DropdownMenuCutout#*2)),#DropdownBGCorner# | Fill Color #DropdownBGColor1#,(#ForceOpaque#=1?255:(#DropdownMenuOpacity1#<1?1:#DropdownMenuOpacity1#)) | StrokeWidth #DropdownStrokeWidth# | Stroke Color #DropdownStrokeColor#,#DropdownStrokeOpacity#
Shape2=#FlatTopShape#
Shape4=Rectangle #DropdownMenuCutout#,(#DropdownMenuShapeOffsetH#+#DropdownMenuCutout#),1,(#DropdownItemHeight#+((#DropdownItemHeight#*2)*(#NumberOfItems#-1))+((#DropdownIconYoffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)-(#DropdownMenuCutout#*2)+(#DropdownStrokeWidth#*#DropdownRoundCorners#)) | Fill Color 0,0,0,0 | StrokeWidth 0
Y=(-([#CURRENTSECTION#:H])*((#Uptimer_Slide#-1)*-1))
DynamicVariables=1

;----------------------------------------------------
; Highlight
;----------------------------------------------------

[HighlightBackground]
Shape=Rectangle [#Meter_Shape_1_Type_[#CurrentHighlightType]]
Shape2=Rectangle [#Meter_Shape_2_Type_[#CurrentHighlightType]]
Shape3=Rectangle [#Meter_Shape_3_Type_[#CurrentHighlightType]]
Shape4=Rectangle [#Meter_Shape_4_Type_[#CurrentHighlightType]]
Y=r

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

;----------------------------------------------------
; Icons 
;----------------------------------------------------

[1Icon]
ImageName=#MyIconsLoc#\2Icon.png
Y=(-[2:H])r

[2Icon]
Meter=String
MeterStyle=InfoStyle | MiniInfoStyle | SubInfoStyle
Y=([[##CURRENTSECTION#]:H]/2)R
Hidden=0

;----------------------------------------------------
; Failsafe
;----------------------------------------------------

[3]
Padding=
Y=r
H=0

[3Icon]
Padding=
Y=r
H=0
