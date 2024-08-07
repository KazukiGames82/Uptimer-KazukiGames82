[Variables]

;----------------------------------------------------
; # # BEGIN EDITING BELOW # # # # # # # # # # # # # #
;----------------------------------------------------

NumberOfItems=3
NumberOfDividers=1

;----------------------------------------------------

ItemText1=User Startup
ItemText2=[&*Measure_User_Uptime_Date*]#CRLF#[#*Uptimer-KazukiGames82___Text__For_User_Startup*] [#*Uptimer-KazukiGames82___Data_Login_History_Time_1*]

;----------------------------------------------------
; Highlight
;----------------------------------------------------

[HighlightBackground]
Shape=Rectangle [#Meter_Shape_1_Type_[#CurrentHighlightType]]
Shape2=Rectangle [#Meter_Shape_2_Type_[#CurrentHighlightType]]
Shape3=Rectangle [#Meter_Shape_3_Type_[#CurrentHighlightType]]
Shape4=Rectangle [#Meter_Shape_4_Type_[#CurrentHighlightType]]

;----------------------------------------------------
; Strings
;----------------------------------------------------

[1]
MouseOverAction=
MouseLeaveAction=

; ---

[Divider1]
Meter=Shape
Shape=#DividerShape#
Y=((#DropdownItemHeight#/2)+#DividerSpace#)r

; ---

[2]
MeterStyle=InfoStyle | MiniInfoStyle
Y=(#DropdownItemHeight#+[Divider1:H]+#DividerSpace#)r

;----------------------------------------------------
; Icons 
;----------------------------------------------------

[1Icon]
ImageName=#MyIconsLoc#\2Icon.png
Y=[[##CURRENTSECTION#]:Y]

[2Icon]
Meter=String
MeterStyle=InfoStyle | MiniInfoStyle | SubInfoStyle
Y=([[##CURRENTSECTION#]:Y]+[#CURRENTSECTION#:H]/2)

;----------------------------------------------------
; Failsafe
;----------------------------------------------------

[3]
MeterStyle=

[3Icon]
MeterStyle=
