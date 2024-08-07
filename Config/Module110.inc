[Variables]

;----------------------------------------------------
; # # BEGIN EDITING BELOW # # # # # # # # # # # # # #
;----------------------------------------------------

NumberOfItems=6
NumberOfDividers=3

;----------------------------------------------------

ItemText1=Machine Startup
ItemText2=[&*Measure_PC_Uptime_Date*]#CRLF#[#*Uptimer-KazukiGames82___Text__For_Machine_Startup*] [&*Measure_PC_Uptime_Time*]
ItemText3=User Startup
ItemText4=[&*Measure_User_Uptime_Date*]#CRLF#[#*Uptimer-KazukiGames82___Text__For_User_Startup*] [#*Uptimer-KazukiGames82___Data_Login_History_Time_1*]

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

;--------------------------

[Divider2]
Meter=Shape
Shape=#DividerShape#
Y=(#DropdownItemHeight#+#DividerSpace#)r

; ---

[3]
Y=((#DropdownItemHeight#/2)+#DividerSpace#)R
MouseOverAction=
MouseLeaveAction=

; ---

[Divider3]
Meter=Shape
Shape=#DividerShape#
Y=((#DropdownItemHeight#/2)+#DividerSpace#)r

; ---

[4]
MeterStyle=InfoStyle | MiniInfoStyle
Y=(#DropdownItemHeight#+[Divider3:H]+#DividerSpace#)r

;----------------------------------------------------
; Icons 
;----------------------------------------------------

[1Icon]
ImageName=#MyIconsLoc#\1Icon.png
Y=[[##CURRENTSECTION#]:Y]

[2Icon]
Meter=String
MeterStyle=InfoStyle | MiniInfoStyle | SubInfoStyle
Y=([[##CURRENTSECTION#]:Y]+[#CURRENTSECTION#:H]/2)

[3Icon]
ImageName=#MyIconsLoc#\2Icon.png
Y=[[##CURRENTSECTION#]:Y]

[4Icon]
Meter=String
MeterStyle=InfoStyle | MiniInfoStyle | SubInfoStyle
Y=([[##CURRENTSECTION#]:Y]+[#CURRENTSECTION#:H]/2)

;----------------------------------------------------
; Failsafe
;----------------------------------------------------

[5]
MeterStyle=

[6]
MeterStyle=

[5Icon]
MeterStyle=

[6Icon]
MeterStyle=
