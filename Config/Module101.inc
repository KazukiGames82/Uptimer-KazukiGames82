[Variables]

;----------------------------------------------------
; # # BEGIN EDITING BELOW # # # # # # # # # # # # # #
;----------------------------------------------------

NumberOfItems=(4+([#Measure_Data_Date_1_Page_[#*NumberOfPage*]]<>0?2:0)+([#Measure_Data_Date_2_Page_[#*NumberOfPage*]]<>0?2:0)+([#Measure_Data_Date_3_Page_[#*NumberOfPage*]]<>0?2:0)+([#Measure_Data_Date_4_Page_[#*NumberOfPage*]]<>0?2:0))
NumberOfDividers=3

CheckNumberOfPageBound=(((([#Measure_Data_Date_1_Page_1]<>0?1:0)+([#Measure_Data_Date_2_Page_1]<>0?1:0)+([#Measure_Data_Date_3_Page_1]<>0?1:0)+([#Measure_Data_Date_4_Page_1]<>0?1:0))>0?1:0)+((([#Measure_Data_Date_1_Page_2]<>0?1:0)+([#Measure_Data_Date_2_Page_2]<>0?1:0)+([#Measure_Data_Date_3_Page_2]<>0?1:0)+([#Measure_Data_Date_4_Page_2]<>0?1:0))>0?1:0)+((([#Measure_Data_Date_1_Page_3]<>0?1:0)+([#Measure_Data_Date_2_Page_3]<>0?1:0)+([#Measure_Data_Date_3_Page_3]<>0?1:0)+([#Measure_Data_Date_4_Page_3]<>0?1:0))>0?1:0)+((([#Measure_Data_Date_1_Page_4]<>0?1:0)+([#Measure_Data_Date_2_Page_4]<>0?1:0)+([#Measure_Data_Date_3_Page_4]<>0?1:0)+([#Measure_Data_Date_4_Page_4]<>0?1:0))>0?1:0)+((([#Measure_Data_Date_1_Page_5]<>0?1:0)+([#Measure_Data_Date_2_Page_5]<>0?1:0)+([#Measure_Data_Date_3_Page_5]<>0?1:0)+([#Measure_Data_Date_4_Page_5]<>0?1:0))>0?1:0)+((([#Measure_Data_Date_1_Page_6]<>0?1:0)+([#Measure_Data_Date_2_Page_6]<>0?1:0)+([#Measure_Data_Date_3_Page_6]<>0?1:0)+([#Measure_Data_Date_4_Page_6]<>0?1:0))>0?1:0)+((([#Measure_Data_Date_1_Page_7]<>0?1:0)+([#Measure_Data_Date_2_Page_7]<>0?1:0)+([#Measure_Data_Date_3_Page_7]<>0?1:0)+([#Measure_Data_Date_4_Page_7]<>0?1:0))>0?1:0)+((([#Measure_Data_Date_1_Page_8]<>0?1:0)+([#Measure_Data_Date_2_Page_8]<>0?1:0)+([#Measure_Data_Date_3_Page_8]<>0?1:0)+([#Measure_Data_Date_4_Page_8]<>0?1:0))>0?1:0)+((([#Measure_Data_Date_1_Page_9]<>0?1:0)+([#Measure_Data_Date_2_Page_9]<>0?1:0)+([#Measure_Data_Date_3_Page_9]<>0?1:0)+([#Measure_Data_Date_4_Page_9]<>0?1:0))>0?1:0))

;----------------------------------------------------

ItemText1=Machine Startup
ItemText2=[&*Measure_PC_Uptime_Date*]#CRLF#[#*Uptimer-KazukiGames82___Text__For_Machine_Startup*] [&*Measure_PC_Uptime_Time*]
ItemText3=Login History | [#*NumberOfPage*] / [&*Measure_Page*]
ItemText4=[&*Measure_User_History_1*]#CRLF#[#Uptimer-KazukiGames82___Measure_Data_Text_1_Page_[#*NumberOfPage*]] [#Measure_Data_Time_1_Page_[#*NumberOfPage*]]
ItemText5=[&*Measure_User_History_2*]#CRLF#[#*Uptimer-KazukiGames82___Text__For_Login_History*] [#Measure_Data_Time_2_Page_[#*NumberOfPage*]]
ItemText6=[&*Measure_User_History_3*]#CRLF#[#*Uptimer-KazukiGames82___Text__For_Login_History*] [#Measure_Data_Time_3_Page_[#*NumberOfPage*]]
ItemText7=[&*Measure_User_History_4*]#CRLF#[#*Uptimer-KazukiGames82___Text__For_Login_History*] [#Measure_Data_Time_4_Page_[#*NumberOfPage*]]

;----------------------------------------------------

Measure_Data_Date_1_Page_1=[#*Uptimer-KazukiGames82___Data_Login_History_Date_1*]
Measure_Data_Date_2_Page_1=[#*Uptimer-KazukiGames82___Data_Login_History_Date_2*]
Measure_Data_Date_3_Page_1=[#*Uptimer-KazukiGames82___Data_Login_History_Date_3*]
Measure_Data_Date_4_Page_1=[#*Uptimer-KazukiGames82___Data_Login_History_Date_4*]

Measure_Data_Date_1_Page_2=[#*Uptimer-KazukiGames82___Data_Login_History_Date_5*]
Measure_Data_Date_2_Page_2=[#*Uptimer-KazukiGames82___Data_Login_History_Date_6*]
Measure_Data_Date_3_Page_2=[#*Uptimer-KazukiGames82___Data_Login_History_Date_7*]
Measure_Data_Date_4_Page_2=[#*Uptimer-KazukiGames82___Data_Login_History_Date_8*]

Measure_Data_Date_1_Page_3=[#*Uptimer-KazukiGames82___Data_Login_History_Date_9*]
Measure_Data_Date_2_Page_3=[#*Uptimer-KazukiGames82___Data_Login_History_Date_10*]
Measure_Data_Date_3_Page_3=[#*Uptimer-KazukiGames82___Data_Login_History_Date_11*]
Measure_Data_Date_4_Page_3=[#*Uptimer-KazukiGames82___Data_Login_History_Date_12*]

Measure_Data_Date_1_Page_4=[#*Uptimer-KazukiGames82___Data_Login_History_Date_13*]
Measure_Data_Date_2_Page_4=[#*Uptimer-KazukiGames82___Data_Login_History_Date_14*]
Measure_Data_Date_3_Page_4=[#*Uptimer-KazukiGames82___Data_Login_History_Date_15*]
Measure_Data_Date_4_Page_4=[#*Uptimer-KazukiGames82___Data_Login_History_Date_16*]

Measure_Data_Date_1_Page_5=[#*Uptimer-KazukiGames82___Data_Login_History_Date_17*]
Measure_Data_Date_2_Page_5=[#*Uptimer-KazukiGames82___Data_Login_History_Date_18*]
Measure_Data_Date_3_Page_5=[#*Uptimer-KazukiGames82___Data_Login_History_Date_19*]
Measure_Data_Date_4_Page_5=[#*Uptimer-KazukiGames82___Data_Login_History_Date_20*]

Measure_Data_Date_1_Page_6=[#*Uptimer-KazukiGames82___Data_Login_History_Date_21*]
Measure_Data_Date_2_Page_6=[#*Uptimer-KazukiGames82___Data_Login_History_Date_22*]
Measure_Data_Date_3_Page_6=[#*Uptimer-KazukiGames82___Data_Login_History_Date_23*]
Measure_Data_Date_4_Page_6=[#*Uptimer-KazukiGames82___Data_Login_History_Date_24*]

Measure_Data_Date_1_Page_7=[#*Uptimer-KazukiGames82___Data_Login_History_Date_25*]
Measure_Data_Date_2_Page_7=[#*Uptimer-KazukiGames82___Data_Login_History_Date_26*]
Measure_Data_Date_3_Page_7=[#*Uptimer-KazukiGames82___Data_Login_History_Date_27*]
Measure_Data_Date_4_Page_7=[#*Uptimer-KazukiGames82___Data_Login_History_Date_28*]

Measure_Data_Date_1_Page_8=[#*Uptimer-KazukiGames82___Data_Login_History_Date_29*]
Measure_Data_Date_2_Page_8=[#*Uptimer-KazukiGames82___Data_Login_History_Date_30*]
Measure_Data_Date_3_Page_8=[#*Uptimer-KazukiGames82___Data_Login_History_Date_31*]
Measure_Data_Date_4_Page_8=[#*Uptimer-KazukiGames82___Data_Login_History_Date_32*]

Measure_Data_Date_1_Page_9=[#*Uptimer-KazukiGames82___Data_Login_History_Date_33*]
Measure_Data_Date_2_Page_9=[#*Uptimer-KazukiGames82___Data_Login_History_Date_34*]
Measure_Data_Date_3_Page_9=[#*Uptimer-KazukiGames82___Data_Login_History_Date_35*]
Measure_Data_Date_4_Page_9=[#*Uptimer-KazukiGames82___Data_Login_History_Date_36*]

;----------------------------------------------------

Measure_Data_Time_1_Page_1=[#*Uptimer-KazukiGames82___Data_Login_History_Time_1*]
Measure_Data_Time_2_Page_1=[#*Uptimer-KazukiGames82___Data_Login_History_Time_2*]
Measure_Data_Time_3_Page_1=[#*Uptimer-KazukiGames82___Data_Login_History_Time_3*]
Measure_Data_Time_4_Page_1=[#*Uptimer-KazukiGames82___Data_Login_History_Time_4*]

Measure_Data_Time_1_Page_2=[#*Uptimer-KazukiGames82___Data_Login_History_Time_5*]
Measure_Data_Time_2_Page_2=[#*Uptimer-KazukiGames82___Data_Login_History_Time_6*]
Measure_Data_Time_3_Page_2=[#*Uptimer-KazukiGames82___Data_Login_History_Time_7*]
Measure_Data_Time_4_Page_2=[#*Uptimer-KazukiGames82___Data_Login_History_Time_8*]

Measure_Data_Time_1_Page_3=[#*Uptimer-KazukiGames82___Data_Login_History_Time_9*]
Measure_Data_Time_2_Page_3=[#*Uptimer-KazukiGames82___Data_Login_History_Time_10*]
Measure_Data_Time_3_Page_3=[#*Uptimer-KazukiGames82___Data_Login_History_Time_11*]
Measure_Data_Time_4_Page_3=[#*Uptimer-KazukiGames82___Data_Login_History_Time_12*]

Measure_Data_Time_1_Page_4=[#*Uptimer-KazukiGames82___Data_Login_History_Time_13*]
Measure_Data_Time_2_Page_4=[#*Uptimer-KazukiGames82___Data_Login_History_Time_14*]
Measure_Data_Time_3_Page_4=[#*Uptimer-KazukiGames82___Data_Login_History_Time_15*]
Measure_Data_Time_4_Page_4=[#*Uptimer-KazukiGames82___Data_Login_History_Time_16*]

Measure_Data_Time_1_Page_5=[#*Uptimer-KazukiGames82___Data_Login_History_Time_17*]
Measure_Data_Time_2_Page_5=[#*Uptimer-KazukiGames82___Data_Login_History_Time_18*]
Measure_Data_Time_3_Page_5=[#*Uptimer-KazukiGames82___Data_Login_History_Time_19*]
Measure_Data_Time_4_Page_5=[#*Uptimer-KazukiGames82___Data_Login_History_Time_20*]

Measure_Data_Time_1_Page_6=[#*Uptimer-KazukiGames82___Data_Login_History_Time_21*]
Measure_Data_Time_2_Page_6=[#*Uptimer-KazukiGames82___Data_Login_History_Time_22*]
Measure_Data_Time_3_Page_6=[#*Uptimer-KazukiGames82___Data_Login_History_Time_23*]
Measure_Data_Time_4_Page_6=[#*Uptimer-KazukiGames82___Data_Login_History_Time_24*]

Measure_Data_Time_1_Page_7=[#*Uptimer-KazukiGames82___Data_Login_History_Time_25*]
Measure_Data_Time_2_Page_7=[#*Uptimer-KazukiGames82___Data_Login_History_Time_26*]
Measure_Data_Time_3_Page_7=[#*Uptimer-KazukiGames82___Data_Login_History_Time_27*]
Measure_Data_Time_4_Page_7=[#*Uptimer-KazukiGames82___Data_Login_History_Time_28*]

Measure_Data_Time_1_Page_8=[#*Uptimer-KazukiGames82___Data_Login_History_Time_29*]
Measure_Data_Time_2_Page_8=[#*Uptimer-KazukiGames82___Data_Login_History_Time_30*]
Measure_Data_Time_3_Page_8=[#*Uptimer-KazukiGames82___Data_Login_History_Time_31*]
Measure_Data_Time_4_Page_8=[#*Uptimer-KazukiGames82___Data_Login_History_Time_32*]

Measure_Data_Time_1_Page_9=[#*Uptimer-KazukiGames82___Data_Login_History_Time_33*]
Measure_Data_Time_2_Page_9=[#*Uptimer-KazukiGames82___Data_Login_History_Time_34*]
Measure_Data_Time_3_Page_9=[#*Uptimer-KazukiGames82___Data_Login_History_Time_35*]
Measure_Data_Time_4_Page_9=[#*Uptimer-KazukiGames82___Data_Login_History_Time_36*]

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
MeterStyle=InfoStyle | SubMiniInfoStyle
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
Y=((#DropdownItemHeight#+[Divider3:H]+#DividerSpace#)*([#Measure_Data_Date_1_Page_[#NumberOfPage]]<>0?1:0))r
Hidden=([#Measure_Data_Date_1_Page_[#NumberOfPage]]<>0?0:1)

[5]
MeterStyle=InfoStyle | MiniInfoStyle
Y=((#DropdownItemHeight#*2)*([#Measure_Data_Date_2_Page_[#NumberOfPage]]<>0?1:0))r
Hidden=([#Measure_Data_Date_2_Page_[#NumberOfPage]]<>0?0:1)

[6]
MeterStyle=InfoStyle | MiniInfoStyle
Y=((#DropdownItemHeight#*2)*([#Measure_Data_Date_3_Page_[#NumberOfPage]]<>0?1:0))r
Hidden=([#Measure_Data_Date_3_Page_[#NumberOfPage]]<>0?0:1)

[7]
MeterStyle=InfoStyle | MiniInfoStyle
Y=((#DropdownItemHeight#*2)*([#Measure_Data_Date_4_Page_[#NumberOfPage]]<>0?1:0))r
Hidden=([#Measure_Data_Date_4_Page_[#NumberOfPage]]<>0?0:1)

[11]
Y=([3:Y]+[#CURRENTSECTION#:H]/2)
Hidden=0

[12]
Hidden=0

; ;----------------------------------------------------
; ; Icons 
; ;----------------------------------------------------

[1Icon]
ImageName=#MyIconsLoc#\1Icon.png
Y=[[##CURRENTSECTION#]:Y]

[2Icon]
Meter=String
MeterStyle=InfoStyle | MiniInfoStyle | SubInfoStyle
Y=([[##CURRENTSECTION#]:Y]+[#CURRENTSECTION#:H]/2)

; ;--------------------------

[3Icon]
ImageName=#MyIconsLoc#\3Icon.png
Y=[[##CURRENTSECTION#]:Y]

[4Icon]
Meter=String
MeterStyle=InfoStyle | MiniInfoStyle | SubInfoStyle
Y=(([[##CURRENTSECTION#]:Y]+[#CURRENTSECTION#:H]/2)*([#Measure_Data_Date_1_Page_[#NumberOfPage]]<>0?1:0))
Hidden=([#Measure_Data_Date_1_Page_[#NumberOfPage]]<>0?0:1)

[5Icon]
Meter=String
MeterStyle=InfoStyle | MiniInfoStyle | SubInfoStyle
Y=(([[##CURRENTSECTION#]:Y]+[#CURRENTSECTION#:H]/2)*([#Measure_Data_Date_2_Page_[#NumberOfPage]]<>0?1:0))
Hidden=([#Measure_Data_Date_2_Page_[#NumberOfPage]]<>0?0:1)

[6Icon]
Meter=String
MeterStyle=InfoStyle | MiniInfoStyle | SubInfoStyle
Y=(([[##CURRENTSECTION#]:Y]+[#CURRENTSECTION#:H]/2)*([#Measure_Data_Date_3_Page_[#NumberOfPage]]<>0?1:0))
Hidden=([#Measure_Data_Date_3_Page_[#NumberOfPage]]<>0?0:1)

[7Icon]
Meter=String
MeterStyle=InfoStyle | MiniInfoStyle | SubInfoStyle
Y=(([[##CURRENTSECTION#]:Y]+[#CURRENTSECTION#:H]/2)*([#Measure_Data_Date_4_Page_[#NumberOfPage]]<>0?1:0))
Hidden=([#Measure_Data_Date_4_Page_[#NumberOfPage]]<>0?0:1)

[11Icon]
Y=[[##CURRENTSECTION#]:Y]
Hidden=0

[12Icon]
Hidden=0

[11Arrow]
Hidden=(#Uptimer-KazukiGames82___Type_Style_Icon#<>1?1:0)

[12Arrow]
Hidden=(#Uptimer-KazukiGames82___Type_Style_Icon#<>1?1:0)

; ;----------------------------------------------------
; ; Failsafe
; ;----------------------------------------------------

[8]
MeterStyle=

[9]
MeterStyle=

[10]
MeterStyle=

[8Icon]
MeterStyle=

[9Icon]
MeterStyle=

[10Icon]
MeterStyle=
