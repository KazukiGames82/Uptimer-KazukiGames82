[Variables]
ItemHovered=0

MachineStartupSelected=0
UserStartupSelected=0
UserHistorySelected=0

Box2Variable=Uptimer___Show_Uptime_Machine
Box3Variable=Uptimer___Use_Date_Machine
Box4Variable=Uptimer___Use_Date_Machine
Box6Variable=Uptimer___Show_Uptime_User
Box8Variable=Uptimer___Show_User_History

Box1=1
Box2=2
Box3=3
Box4=4
Box5=5
Box6=6
Box7=7
Box8=8
Box9=9
Box10=10
Box11=11
Box12=12
Box13=13

Box1Text=1
Box2Text=2
Box3Text=3
Box4Text=4
Box5Text=5
Box6Text=6
Box7Text=7
Box8Text=8
Box9Text=9
Box10Text=10
Box11Text=11
Box12Text=12
Box13Text=13

BoxTextColor00=155,155,155
BoxTextColor01=#Lime#

BoxTextColor10=#Lime#
BoxTextColor11=155,155,155

; -------------------------------------------------------------

[TitleStyle1]
StringAlign=CenterCenter
FontColor=255,255,255,55
FontSize=(12*#DroptopSize#)
FontFace=#UniversalFont#
AntiAlias=1

[BoxStyle]
Shape=Rectangle 0,0,(160*#DroptopSize#),(40*#DroptopSize#),(6*#DroptopSize#) | StrokeWidth (2*#DroptopSize#) | Extend StrokeColor#ItemHovered# | Extend FillColor
FillColor=Fill Color 0,0,0,55
FillColor0=Fill Color 155,155,155
FillColor1=Fill Color #Lime#
StrokeColor0=Stroke Color 155,155,155
StrokeColor1=Stroke Color #Lime#
X=R
Y=(30*#DroptopSize#)R
Group=Boxs | Boxs[##CURRENTSECTION#]
DynamicVariables=1

[BoxInvertedStyle]
StrokeColor0=Stroke Color #Lime#
FillColor0=FillColor #Lime#
StrokeColor1=Stroke Color 155,155,155
FillColor1=FillColor 155,155,155
MouseOverAction=[!SetOption #CURRENTSECTION# StrokeColor1 "Stroke Color #Lime#"][!SetOption #CURRENTSECTION#Text FontColor "#Lime#"][!UpdateMeterGroup Boxs[##CURRENTSECTION#]][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# StrokeColor1 "Stroke Color 155,155,155"][!SetOption #CURRENTSECTION#Text FontColor "[#BoxTextColor1[#[#Box[##*CURRENTSECTION*#]Variable]]]"][!UpdateMeterGroup Boxs[##CURRENTSECTION#]][!Redraw]

[MiniBoxStyle]
Shape=Rectangle 0,0,(140*#DroptopSize#),(40*#DroptopSize#),(6*#DroptopSize#) | StrokeWidth (2*#DroptopSize#) | Extend StrokeColor[#[#[#CURRENTSECTION]Variable]] | Extend FillColor
X=r
Y=(15*#DroptopSize#)R
MouseOverAction=[!SetOption #CURRENTSECTION# StrokeColor0 "Stroke Color #Lime#"][!SetOption #CURRENTSECTION#Text FontColor "#Lime#"][!UpdateMeterGroup Boxs[##CURRENTSECTION#]][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# StrokeColor0 "Stroke Color 155,155,155"][!SetOption #CURRENTSECTION#Text FontColor "[#BoxTextColor0[#[#Box[##*CURRENTSECTION*#]Variable]]]"][!UpdateMeterGroup Boxs[##CURRENTSECTION#]][!Redraw]

[BoxTextStyle]
StringAlign=CenterCenter
FontSize=(10*#DroptopSize#)
FontColor=[#BoxTextColor0[#ItemHovered]]
X=([Box[##CURRENTSECTION#]:X]+[#CURRENTSECTION#:W]/2)
Y=([Box[##CURRENTSECTION#]:Y]+[#CURRENTSECTION#:H]/2)
W=[Box[##CURRENTSECTION#]:W]
H=[Box[##CURRENTSECTION#]:H]
LeftMouseDownAction=
MouseOverAction=
MouseLeaveAction=

[MiniBoxTextStyle]
FontSize=(9*#DroptopSize#)
FontColor=[#BoxTextColor0[#[#Box[##CURRENTSECTION#]Variable]]]

[BoxTextInvertedStyle]
FontColor=[#BoxTextColor1[#[#Box[##CURRENTSECTION#]Variable]]]

; -------------------------------------------------------------

[TitleText1]
Meter=String
MeterStyle=TitleStyle1
FontSize=(30*#DroptopSize#)
FontColor=#Lime#
X=(400*#DroptopSize#)
Y=(50*#DroptopSize#)
Text="Dropdown"

; -------------------------------------------------------------


[Preview]
Meter=Shape
MeterStyle=BoxStyle
Shape=Rectangle 0,0,(165*#DroptopSize#),(255*#DroptopSize#),(6*#DroptopSize#) | StrokeWidth (2*#DroptopSize#) | Extend StrokeColor0 | Extend FillColor
Shape2=Rectangle (10*#DroptopSize#),(10*#DroptopSize#),(145*#DroptopSize#),(20*#DroptopSize#),(6*#DroptopSize#) | StrokeWidth 0 | Extend FillColor0
Shape3=Rectangle (55*#DroptopSize#),(40*#DroptopSize#),(100*#DroptopSize#*#Uptimer___Show_Uptime_Machine#),(30*#DroptopSize#*#Uptimer___Show_Uptime_Machine#),(6*#DroptopSize#) | StrokeWidth 0 | Extend FillColor#MachineStartupSelected#
Shape4=Rectangle (55*#DroptopSize#),(40*#DroptopSize#+(40*#DroptopSize#)*#Uptimer___Show_Uptime_Machine#),(100*#DroptopSize#*#Uptimer___Show_Uptime_User#),(30*#DroptopSize#*#Uptimer___Show_Uptime_User#),(6*#DroptopSize#) | StrokeWidth 0 | Extend FillColor#UserStartupSelected#
Shape5=Rectangle (55*#DroptopSize#),(40*#DroptopSize#+(40*#DroptopSize#)*#Uptimer___Show_Uptime_Machine#+(40*#DroptopSize#)*#Uptimer___Show_Uptime_User#),(100*#DroptopSize#*#Uptimer___Show_User_History#),(120*#DroptopSize#*#Uptimer___Show_User_History#),(6*#DroptopSize#) | StrokeWidth 0 | Extend FillColor#UserHistorySelected#
X=(30*#DroptopSize#)
Y=(225*#DroptopSize#-[#CURRENTSECTION#:H]/2)
LeftMouseDownAction=
LeftMouseUpAction=
MouseOverAction=
MouseLeaveAction=
Group=Boxs | Boxs1 | Boxs2 | Boxs3 | Boxs4 | Boxs5 | Boxs6 | Boxs7 | Boxs8

[Box1]
Meter=Shape
MeterStyle=BoxStyle
X=(500*#DroptopSize#-[#CURRENTSECTION#:W]/2-[#CURRENTSECTION#:W]-(30*#DroptopSize#))
Y=(130*#DroptopSize#-[#CURRENTSECTION#:H]/2)

[Box2]
Meter=Shape
MeterStyle=BoxStyle | MiniBoxStyle
X=(10*#DroptopSize#)r
LeftMouseDownAction=[!WriteKeyValue Variables Uptimer___Show_Uptime_Machine ([#Uptimer___Show_Uptime_Machine]=1?0:1) "#MyVariablesLoc#"][!SetVariable Uptimer___Show_Uptime_Machine ([#Uptimer___Show_Uptime_Machine]=1?0:1)][!UpdateMeter *][!Redraw]
MouseOverAction=[!SetVariable MachineStartupSelected 1][!SetOption #CURRENTSECTION# StrokeColor0 "Stroke Color #Lime#"][!SetOption #CURRENTSECTION#Text FontColor "#Lime#"][!UpdateMeterGroup Boxs[##CURRENTSECTION#]][!Redraw]
MouseLeaveAction=[!SetVariable MachineStartupSelected 0][!SetOption #CURRENTSECTION# StrokeColor0 "Stroke Color 155,155,155"][!SetOption #CURRENTSECTION#Text FontColor "[#BoxTextColor0[#[#Box[##*CURRENTSECTION*#]Variable]]]"][!UpdateMeterGroup Boxs[##CURRENTSECTION#]][!Redraw]

[Box3]
Meter=Shape
MeterStyle=BoxStyle | MiniBoxStyle
LeftMouseDownAction=[!WriteKeyValue Variables Uptimer___Use_Date_Machine 1 "#MyVariablesLoc#"][!SetVariable Uptimer___Use_Date_Machine 1][!UpdateMeter *][!Redraw]

[Box4]
Meter=Shape
MeterStyle=BoxStyle | MiniBoxStyle | BoxInvertedStyle
LeftMouseDownAction=[!WriteKeyValue Variables Uptimer___Use_Date_Machine 0 "#MyVariablesLoc#"][!SetVariable Uptimer___Use_Date_Machine 0][!UpdateMeter *][!Redraw]

[Box5]
Meter=Shape
MeterStyle=BoxStyle
X=([Box1:X]+[Box1:W]+(30*#DroptopSize#))
Y=[Box1:Y]

[Box6]
Meter=Shape
MeterStyle=BoxStyle | MiniBoxStyle
X=(10*#DroptopSize#)r
LeftMouseDownAction=[!WriteKeyValue Variables Uptimer___Show_Uptime_User ([#Uptimer___Show_Uptime_User]=1?0:1) "#MyVariablesLoc#"][!SetVariable Uptimer___Show_Uptime_User ([#Uptimer___Show_Uptime_User]=1?0:1)][!UpdateMeter *][!Redraw]
MouseOverAction=[!SetVariable UserStartupSelected 1][!SetOption #CURRENTSECTION# StrokeColor0 "Stroke Color #Lime#"][!SetOption #CURRENTSECTION#Text FontColor "#Lime#"][!UpdateMeterGroup Boxs[##CURRENTSECTION#]][!Redraw]
MouseLeaveAction=[!SetVariable UserStartupSelected 0][!SetOption #CURRENTSECTION# StrokeColor0 "Stroke Color 155,155,155"][!SetOption #CURRENTSECTION#Text FontColor "[#BoxTextColor0[#[#Box[##*CURRENTSECTION*#]Variable]]]"][!UpdateMeterGroup Boxs[##CURRENTSECTION#]][!Redraw]

[Box7]
Meter=Shape
MeterStyle=BoxStyle
X=([Box5:X]+[Box5:W]+(30*#DroptopSize#))
Y=[Box5:Y]

[Box8]
Meter=Shape
MeterStyle=BoxStyle | MiniBoxStyle
X=(10*#DroptopSize#)r
LeftMouseDownAction=[!WriteKeyValue Variables Uptimer___Show_User_History ([#Uptimer___Show_User_History]=1?0:1) "#MyVariablesLoc#"][!SetVariable Uptimer___Show_User_History ([#Uptimer___Show_User_History]=1?0:1)][!UpdateMeter *][!Redraw]
MouseOverAction=[!SetVariable UserHistorySelected 1][!SetOption #CURRENTSECTION# StrokeColor0 "Stroke Color #Lime#"][!SetOption #CURRENTSECTION#Text FontColor "#Lime#"][!UpdateMeterGroup Boxs[##CURRENTSECTION#]][!Redraw]
MouseLeaveAction=[!SetVariable UserHistorySelected 0][!SetOption #CURRENTSECTION# StrokeColor0 "Stroke Color 155,155,155"][!SetOption #CURRENTSECTION#Text FontColor "[#BoxTextColor0[#[#Box[##*CURRENTSECTION*#]Variable]]]"][!UpdateMeterGroup Boxs[##CURRENTSECTION#]][!Redraw]

; ; -------------------------------------------------------------

[Box1Text]
Meter=String
MeterStyle=TitleStyle1 | BoxStyle | BoxTextStyle
Text=Machine Startup

[Box2Text]
Meter=String
MeterStyle=TitleStyle1 | BoxStyle | BoxTextStyle | MiniBoxTextStyle
Text=Show Section

[Box3Text]
Meter=String
MeterStyle=TitleStyle1 | BoxStyle | BoxTextStyle | MiniBoxTextStyle
Text=Use Date Format

[Box4Text]
Meter=String
MeterStyle=TitleStyle1 | BoxStyle | BoxTextStyle | MiniBoxTextStyle | BoxTextInvertedStyle
Text=Use Hour Format

[Box5Text]
Meter=String
MeterStyle=TitleStyle1 | BoxStyle | BoxTextStyle
Text=User Startup

[Box6Text]
Meter=String
MeterStyle=TitleStyle1 | BoxStyle | BoxTextStyle | MiniBoxTextStyle
Text=Show Section

[Box7Text]
Meter=String
MeterStyle=TitleStyle1 | BoxStyle | BoxTextStyle
Text=User History

[Box8Text]
Meter=String
MeterStyle=TitleStyle1 | BoxStyle | BoxTextStyle | MiniBoxTextStyle
Text=Show Section

; -------------------------------------------------------------

[ButtonBack]
Meter=Shape
Shape=Rectangle 0,0,([#CURRENTSECTION#Text:W]+(20*#DroptopSize#)),([#CURRENTSECTION#Text:H]+(5*#DroptopSize#)),6 | StrokeWidth 0 | Extend FillColor
FillColor=Fill Color 255,255,255,45
LeftMouseUpAction=[!WriteKeyValue Variables Page 0 "#SKINSPATH#Droptop Community Apps\Apps\#MyAppID#\Settings\Settings.ini"][!Hide][!Refresh]
MouseOverAction=[!SetOption #CURRENTSECTION# FillColor "Fill Color #Lime#"][!SetOption #CURRENTSECTION#Text FontColor "13,13,13"][!UpdateMeterGroup #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# FillColor "FillColor 255,255,255,45"][!SetOption #CURRENTSECTION#Text FontColor "255,255,255,155"][!UpdateMeterGroup #CURRENTSECTION#][!Redraw]
X=(7*#DroptopSize#)
Y=(7*#DroptopSize#)
LeftMouseUpAction=[!DeactivateConfig]
DynamicVariables=1
Group=#CURRENTSECTION#

[ButtonBackText]
Meter=String
FontFace=Urbanist
InlineSetting=Shadow | 1 | 1 | 2 | 0,0,0,145
StringAlign=CenterCenter
FontSize=(12*#DroptopSize#)
FontFace=Urbanist
FontColor=255,255,255,155
X=([ButtonBack:X]+([ButtonBack:W]/2))
Y=([ButtonBack:Y]+([ButtonBack:H]/2))
Text="🔙"
AntiAlias=1
DynamicVariables=1
Group=ButtonBack

; -------------------------------------------------------------

[ButtonX]
Meter=Shape
Shape=Rectangle 0,0,([#CURRENTSECTION#Text:W]+(20*#DroptopSize#)),([#CURRENTSECTION#Text:H]+(5*#DroptopSize#)),6 | StrokeWidth 0 | Extend FillColor
FillColor=Fill Color 255,255,255,45
LeftMouseUpAction=[!WriteKeyValue Variables Page 0 "#SKINSPATH#Droptop Community Apps\Apps\#MyAppID#\Settings\Settings.ini"][!DeactivateConfig]
MouseOverAction=[!SetOption #CURRENTSECTION# FillColor "Fill Color #Lime#"][!SetOption #CURRENTSECTION#Text FontColor "13,13,13"][!UpdateMeterGroup #CURRENTSECTION#][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# FillColor "FillColor 255,255,255,45"][!SetOption #CURRENTSECTION#Text FontColor "255,255,255,155"][!UpdateMeterGroup #CURRENTSECTION#][!Redraw]
X=((800*#DroptopSize#)-[#CURRENTSECTION#Text:W]-(25*#DroptopSize#))
Y=(7*#DroptopSize#)
DynamicVariables=1
Group=#CURRENTSECTION#

[ButtonXText]
Meter=String
FontFace=Urbanist
InlineSetting=Shadow | 1 | 1 | 2 | 0,0,0,145
StringAlign=CenterCenter
FontSize=(12*#DroptopSize#)
FontFace=Urbanist
FontColor=255,255,255,155
X=([ButtonX:X]+([ButtonX:W]/2))
Y=([ButtonX:Y]+([ButtonX:H]/2))
Text="❌"
AntiAlias=1
DynamicVariables=1
Group=ButtonX
