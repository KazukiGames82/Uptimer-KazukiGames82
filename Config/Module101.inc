[Variables]

;----------------------------------------------------
; # # BEGIN EDITING BELOW # # # # # # # # # # # # # #
;----------------------------------------------------

NumberOfItems=2
NumberOfDividers=0

NumberOfItems2=(1+([#Measure_Data_Date_1_Page_[#*NumberOfPage*]]<>0?1:0)+([#Measure_Data_Date_2_Page_[#*NumberOfPage*]]<>0?1:0)+([#Measure_Data_Date_3_Page_[#*NumberOfPage*]]<>0?1:0)+([#Measure_Data_Date_4_Page_[#*NumberOfPage*]]<>0?1:0)+([#Measure_Data_Date_5_Page_[#*NumberOfPage*]]<>0?1:0))
NumberOfDividers2=([#*NumberOfPage*]=1?((([#Measure_Data_Date_1_Page_[#*NumberOfPage*]]<>0?1:0)+([#Measure_Data_Date_2_Page_[#*NumberOfPage*]]<>0?1:0)+([#Measure_Data_Date_3_Page_[#*NumberOfPage*]]<>0?1:0)+([#Measure_Data_Date_4_Page_[#*NumberOfPage*]]<>0?1:0)+([#Measure_Data_Date_5_Page_[#*NumberOfPage*]]<>0?1:0))>=2?1:0):0)

CheckNumberOfPageBound=(((([#Measure_Data_Date_1_Page_1]<>0?1:0)+([#Measure_Data_Date_2_Page_1]<>0?1:0)+([#Measure_Data_Date_3_Page_1]<>0?1:0)+([#Measure_Data_Date_4_Page_1]<>0?1:0)+([#Measure_Data_Date_5_Page_1]<>0?1:0))>0?1:0)+((([#Measure_Data_Date_1_Page_2]<>0?1:0)+([#Measure_Data_Date_2_Page_2]<>0?1:0)+([#Measure_Data_Date_3_Page_2]<>0?1:0)+([#Measure_Data_Date_4_Page_2]<>0?1:0)+([#Measure_Data_Date_5_Page_2]<>0?1:0))>0?1:0)+((([#Measure_Data_Date_1_Page_3]<>0?1:0)+([#Measure_Data_Date_2_Page_3]<>0?1:0)+([#Measure_Data_Date_3_Page_3]<>0?1:0)+([#Measure_Data_Date_4_Page_3]<>0?1:0)+([#Measure_Data_Date_5_Page_3]<>0?1:0))>0?1:0)+((([#Measure_Data_Date_1_Page_4]<>0?1:0)+([#Measure_Data_Date_2_Page_4]<>0?1:0)+([#Measure_Data_Date_3_Page_4]<>0?1:0)+([#Measure_Data_Date_4_Page_4]<>0?1:0)+([#Measure_Data_Date_5_Page_4]<>0?1:0))>0?1:0)+((([#Measure_Data_Date_1_Page_5]<>0?1:0)+([#Measure_Data_Date_2_Page_5]<>0?1:0)+([#Measure_Data_Date_3_Page_5]<>0?1:0)+([#Measure_Data_Date_4_Page_5]<>0?1:0)+([#Measure_Data_Date_5_Page_5]<>0?1:0))>0?1:0)+((([#Measure_Data_Date_1_Page_6]<>0?1:0)+([#Measure_Data_Date_2_Page_6]<>0?1:0)+([#Measure_Data_Date_3_Page_6]<>0?1:0)+([#Measure_Data_Date_4_Page_6]<>0?1:0)+([#Measure_Data_Date_5_Page_6]<>0?1:0))>0?1:0)+((([#Measure_Data_Date_1_Page_7]<>0?1:0)+([#Measure_Data_Date_2_Page_7]<>0?1:0)+([#Measure_Data_Date_3_Page_7]<>0?1:0)+([#Measure_Data_Date_4_Page_7]<>0?1:0)+([#Measure_Data_Date_5_Page_7]<>0?1:0))>0?1:0))

;----------------------------------------------------

ItemText1=Machine Startup
ItemText2=[&Measure_PC_Uptime_Date]#CRLF#[#Uptimer-KazukiGames82___Text__For_Machine_Startup] [&Measure_PC_Uptime_Time]
ItemText3=Login History | [#*NumberOfPage*] / [&*Measure_Page*]
ItemText4=[&Measure_User_History_1]#CRLF#[#Uptimer-KazukiGames82___Measure_Data_Text_1_Page_[#NumberOfPage]] [#Measure_Data_Time_1_Page_[#NumberOfPage]]
ItemText5=[&Measure_User_History_2]#CRLF#[#Uptimer-KazukiGames82___Text__For_Login_History] [#Measure_Data_Time_2_Page_[#NumberOfPage]]
ItemText6=[&Measure_User_History_3]#CRLF#[#Uptimer-KazukiGames82___Text__For_Login_History] [#Measure_Data_Time_3_Page_[#NumberOfPage]]
ItemText7=[&Measure_User_History_4]#CRLF#[#Uptimer-KazukiGames82___Text__For_Login_History] [#Measure_Data_Time_4_Page_[#NumberOfPage]]
ItemText8=[&Measure_User_History_5]#CRLF#[#Uptimer-KazukiGames82___Text__For_Login_History] [#Measure_Data_Time_5_Page_[#NumberOfPage]]

;----------------------------------------------------

Measure_Data_Date_1_Page_1=[#*Uptimer-KazukiGames82___Data_Login_History_Date_1*]
Measure_Data_Date_2_Page_1=[#*Uptimer-KazukiGames82___Data_Login_History_Date_2*]
Measure_Data_Date_3_Page_1=[#*Uptimer-KazukiGames82___Data_Login_History_Date_3*]
Measure_Data_Date_4_Page_1=[#*Uptimer-KazukiGames82___Data_Login_History_Date_4*]
Measure_Data_Date_5_Page_1=[#*Uptimer-KazukiGames82___Data_Login_History_Date_5*]

Measure_Data_Date_1_Page_2=[#*Uptimer-KazukiGames82___Data_Login_History_Date_6*]
Measure_Data_Date_2_Page_2=[#*Uptimer-KazukiGames82___Data_Login_History_Date_7*]
Measure_Data_Date_3_Page_2=[#*Uptimer-KazukiGames82___Data_Login_History_Date_8*]
Measure_Data_Date_4_Page_2=[#*Uptimer-KazukiGames82___Data_Login_History_Date_9*]
Measure_Data_Date_5_Page_2=[#*Uptimer-KazukiGames82___Data_Login_History_Date_10*]

Measure_Data_Date_1_Page_3=[#*Uptimer-KazukiGames82___Data_Login_History_Date_11*]
Measure_Data_Date_2_Page_3=[#*Uptimer-KazukiGames82___Data_Login_History_Date_12*]
Measure_Data_Date_3_Page_3=[#*Uptimer-KazukiGames82___Data_Login_History_Date_13*]
Measure_Data_Date_4_Page_3=[#*Uptimer-KazukiGames82___Data_Login_History_Date_14*]
Measure_Data_Date_5_Page_3=[#*Uptimer-KazukiGames82___Data_Login_History_Date_15*]

Measure_Data_Date_1_Page_4=[#*Uptimer-KazukiGames82___Data_Login_History_Date_16*]
Measure_Data_Date_2_Page_4=[#*Uptimer-KazukiGames82___Data_Login_History_Date_17*]
Measure_Data_Date_3_Page_4=[#*Uptimer-KazukiGames82___Data_Login_History_Date_18*]
Measure_Data_Date_4_Page_4=[#*Uptimer-KazukiGames82___Data_Login_History_Date_19*]
Measure_Data_Date_5_Page_4=[#*Uptimer-KazukiGames82___Data_Login_History_Date_20*]

Measure_Data_Date_1_Page_5=[#*Uptimer-KazukiGames82___Data_Login_History_Date_21*]
Measure_Data_Date_2_Page_5=[#*Uptimer-KazukiGames82___Data_Login_History_Date_22*]
Measure_Data_Date_3_Page_5=[#*Uptimer-KazukiGames82___Data_Login_History_Date_23*]
Measure_Data_Date_4_Page_5=[#*Uptimer-KazukiGames82___Data_Login_History_Date_24*]
Measure_Data_Date_5_Page_5=[#*Uptimer-KazukiGames82___Data_Login_History_Date_25*]

Measure_Data_Date_1_Page_6=[#*Uptimer-KazukiGames82___Data_Login_History_Date_26*]
Measure_Data_Date_2_Page_6=[#*Uptimer-KazukiGames82___Data_Login_History_Date_27*]
Measure_Data_Date_3_Page_6=[#*Uptimer-KazukiGames82___Data_Login_History_Date_28*]
Measure_Data_Date_4_Page_6=[#*Uptimer-KazukiGames82___Data_Login_History_Date_29*]
Measure_Data_Date_5_Page_6=[#*Uptimer-KazukiGames82___Data_Login_History_Date_30*]

Measure_Data_Date_1_Page_7=[#*Uptimer-KazukiGames82___Data_Login_History_Date_31*]
Measure_Data_Date_2_Page_7=[#*Uptimer-KazukiGames82___Data_Login_History_Date_32*]
Measure_Data_Date_3_Page_7=[#*Uptimer-KazukiGames82___Data_Login_History_Date_33*]
Measure_Data_Date_4_Page_7=[#*Uptimer-KazukiGames82___Data_Login_History_Date_34*]
Measure_Data_Date_5_Page_7=[#*Uptimer-KazukiGames82___Data_Login_History_Date_35*]

;----------------------------------------------------

Measure_Data_Time_1_Page_1=[#*Uptimer-KazukiGames82___Data_Login_History_Time_1*]
Measure_Data_Time_2_Page_1=[#*Uptimer-KazukiGames82___Data_Login_History_Time_2*]
Measure_Data_Time_3_Page_1=[#*Uptimer-KazukiGames82___Data_Login_History_Time_3*]
Measure_Data_Time_4_Page_1=[#*Uptimer-KazukiGames82___Data_Login_History_Time_4*]
Measure_Data_Time_5_Page_1=[#*Uptimer-KazukiGames82___Data_Login_History_Time_5*]

Measure_Data_Time_1_Page_2=[#*Uptimer-KazukiGames82___Data_Login_History_Time_6*]
Measure_Data_Time_2_Page_2=[#*Uptimer-KazukiGames82___Data_Login_History_Time_7*]
Measure_Data_Time_3_Page_2=[#*Uptimer-KazukiGames82___Data_Login_History_Time_8*]
Measure_Data_Time_4_Page_2=[#*Uptimer-KazukiGames82___Data_Login_History_Time_9*]
Measure_Data_Time_5_Page_2=[#*Uptimer-KazukiGames82___Data_Login_History_Time_10*]

Measure_Data_Time_1_Page_3=[#*Uptimer-KazukiGames82___Data_Login_History_Time_11*]
Measure_Data_Time_2_Page_3=[#*Uptimer-KazukiGames82___Data_Login_History_Time_12*]
Measure_Data_Time_3_Page_3=[#*Uptimer-KazukiGames82___Data_Login_History_Time_13*]
Measure_Data_Time_4_Page_3=[#*Uptimer-KazukiGames82___Data_Login_History_Time_14*]
Measure_Data_Time_5_Page_3=[#*Uptimer-KazukiGames82___Data_Login_History_Time_15*]

Measure_Data_Time_1_Page_4=[#*Uptimer-KazukiGames82___Data_Login_History_Time_16*]
Measure_Data_Time_2_Page_4=[#*Uptimer-KazukiGames82___Data_Login_History_Time_17*]
Measure_Data_Time_3_Page_4=[#*Uptimer-KazukiGames82___Data_Login_History_Time_18*]
Measure_Data_Time_4_Page_4=[#*Uptimer-KazukiGames82___Data_Login_History_Time_19*]
Measure_Data_Time_5_Page_4=[#*Uptimer-KazukiGames82___Data_Login_History_Time_20*]

Measure_Data_Time_1_Page_5=[#*Uptimer-KazukiGames82___Data_Login_History_Time_21*]
Measure_Data_Time_2_Page_5=[#*Uptimer-KazukiGames82___Data_Login_History_Time_22*]
Measure_Data_Time_3_Page_5=[#*Uptimer-KazukiGames82___Data_Login_History_Time_23*]
Measure_Data_Time_4_Page_5=[#*Uptimer-KazukiGames82___Data_Login_History_Time_24*]
Measure_Data_Time_5_Page_5=[#*Uptimer-KazukiGames82___Data_Login_History_Time_25*]

Measure_Data_Time_1_Page_6=[#*Uptimer-KazukiGames82___Data_Login_History_Time_26*]
Measure_Data_Time_2_Page_6=[#*Uptimer-KazukiGames82___Data_Login_History_Time_27*]
Measure_Data_Time_3_Page_6=[#*Uptimer-KazukiGames82___Data_Login_History_Time_28*]
Measure_Data_Time_4_Page_6=[#*Uptimer-KazukiGames82___Data_Login_History_Time_29*]
Measure_Data_Time_5_Page_6=[#*Uptimer-KazukiGames82___Data_Login_History_Time_30*]

Measure_Data_Time_1_Page_7=[#*Uptimer-KazukiGames82___Data_Login_History_Time_31*]
Measure_Data_Time_2_Page_7=[#*Uptimer-KazukiGames82___Data_Login_History_Time_32*]
Measure_Data_Time_3_Page_7=[#*Uptimer-KazukiGames82___Data_Login_History_Time_33*]
Measure_Data_Time_4_Page_7=[#*Uptimer-KazukiGames82___Data_Login_History_Time_34*]
Measure_Data_Time_5_Page_7=[#*Uptimer-KazukiGames82___Data_Login_History_Time_35*]

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
;------
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
Hidden=([#Measure_Data_Date_1_Page_[#NumberOfPage]]<>0?0:1)

;---

[Divider4]
Meter=Shape
Shape=#DividerShape#
Y=((#DropdownItemHeight#+#DividerSpace#)*#NumberOfDividers2#)r
Hidden=((#NumberOfDividers2#-1)*-1)
DynamicVariables=1

;---

[5]
MeterStyle=InfoStyle | MiniInfoStyle
Y=((#DropdownItemHeight#*(2-#NumberOfDividers2#)+([Divider4:H]+#DividerSpace#)*#NumberOfDividers2#)*([#Measure_Data_Date_2_Page_[#NumberOfPage]]<>0?1:0))r
Hidden=([#Measure_Data_Date_2_Page_[#NumberOfPage]]<>0?0:1)

[6]
MeterStyle=InfoStyle | MiniInfoStyle
Y=(((#DropdownItemHeight#*2))*([#Measure_Data_Date_3_Page_[#NumberOfPage]]<>0?1:0))r
Hidden=([#Measure_Data_Date_3_Page_[#NumberOfPage]]<>0?0:1)

[7]
MeterStyle=InfoStyle | MiniInfoStyle
Y=(((#DropdownItemHeight#*2))*([#Measure_Data_Date_4_Page_[#NumberOfPage]]<>0?1:0))r
Hidden=([#Measure_Data_Date_4_Page_[#NumberOfPage]]<>0?0:1)

[8]
MeterStyle=InfoStyle | MiniInfoStyle
Y=(((#DropdownItemHeight#*2))*([#Measure_Data_Date_5_Page_[#NumberOfPage]]<>0?1:0))r
Hidden=([#Measure_Data_Date_5_Page_[#NumberOfPage]]<>0?0:1)

[11]
Y=((((#DropdownItemHeight#*2)*(#NumberOfItems2#-1))+(([Divider4:H]+#DividerSpace#*2)*#NumberOfDividers2#)+([#CURRENTSECTION#:H]*((#NumberOfItems2#-1)=0?1.5:-0.5)))*-1)r
Hidden=0

[12]
Hidden=0

;----------------------------------------------------
; Icons 
;----------------------------------------------------

[1Icon]
ImageName=#MyIconsLoc#\1Icon.png
Y=(([Background2:Y]+(#DropdownIconYoffset#+(#DropdownItemHeight#/2))-((#DropdownIconYoffset#+(#DropdownItemHeight#/2))%1)+#DropdownItemYOffset#-[2:Y]+[#CURRENTSECTION#:H])*-1)r

[2Icon]
Meter=String
MeterStyle=InfoStyle | MiniInfoStyle | SubInfoStyle
Y=([[##CURRENTSECTION#]:H]/2)R
Hidden=0

;--------------------------

[3Icon]
ImageName=#MyIconsLoc#\3Icon.png
Y=([3:Y]-([2Icon:Y]+[2Icon:H]/2))r
Hidden=0

[4Icon]
Meter=String
MeterStyle=InfoStyle | MiniInfoStyle | SubInfoStyle
Y=(((#DropdownItemHeight#*2))*([#Measure_Data_Date_1_Page_[#NumberOfPage]]<>0?1:0))r
Hidden=([#Measure_Data_Date_1_Page_[#NumberOfPage]]<>0?0:1)

[5Icon]
Meter=String
MeterStyle=InfoStyle | MiniInfoStyle | SubInfoStyle
Y=((#DropdownItemHeight#*2+(([Divider4:H]+#DividerSpace#*2)*#NumberOfDividers2#))*([#Measure_Data_Date_2_Page_[#NumberOfPage]]<>0?1:0))r
Hidden=([#Measure_Data_Date_2_Page_[#NumberOfPage]]<>0?0:1)

[6Icon]
Meter=String
MeterStyle=InfoStyle | MiniInfoStyle | SubInfoStyle
Y=(((#DropdownItemHeight#*2))*([#Measure_Data_Date_3_Page_[#NumberOfPage]]<>0?1:0))r
Hidden=([#Measure_Data_Date_3_Page_[#NumberOfPage]]<>0?0:1)

[7Icon]
Meter=String
MeterStyle=InfoStyle | MiniInfoStyle | SubInfoStyle
Y=(((#DropdownItemHeight#*2))*([#Measure_Data_Date_4_Page_[#NumberOfPage]]<>0?1:0))r
Hidden=([#Measure_Data_Date_4_Page_[#NumberOfPage]]<>0?0:1)

[8Icon]
Meter=String
MeterStyle=InfoStyle | MiniInfoStyle | SubInfoStyle
Y=(((#DropdownItemHeight#*2))*([#Measure_Data_Date_5_Page_[#NumberOfPage]]<>0?1:0))r
Hidden=([#Measure_Data_Date_5_Page_[#NumberOfPage]]<>0?0:1)

[11Icon]
Y=((((#DropdownItemHeight#*2)*(#NumberOfItems2#-1))+(([Divider4:H]+#DividerSpace#*2)*#NumberOfDividers2#))*-1)r
Hidden=0

[12Icon]
Hidden=0

[11Arrow]
Hidden=(#Uptimer-KazukiGames82___Type_Style_Icon#<>1?1:0)

[12Arrow]
Hidden=(#Uptimer-KazukiGames82___Type_Style_Icon#<>1?1:0)

;----------------------------------------------------
; Failsafe
;----------------------------------------------------

[9]
Padding=0,0,0,
Y=r
H=0

[9Icon]
Padding=0,0,0,0
Y=r
H=0
