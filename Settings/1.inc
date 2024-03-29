[Variables]
ItemHovered=0

Box2Variable=Uptimer___Show_Login_Time
Box3Variable=Uptimer___Show_Login_Time
Box5Variable=Uptimer___Show_Icon
Box7Variable=Uptimer___Use_Smart_Time
Box8Variable=Uptimer___Use_Smart_Time
Box9Variable=Uptimer___Show_Leading_Zeros
Box11Variable=Uptimer___Show_Days
Box12Variable=Uptimer___Show_Hours
Box13Variable=Uptimer___Show_Minutes

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

[Calc.SmartTime]
Measure=Calc
Formula=#Uptimer___Use_Smart_Time#
IfCondition=Calc.SmartTime = 1
IfTrueAction=[!DisableMouseAction Box11 "MouseOverAction|MouseLeaveAction|LeftMouseDownAction"][!DisableMouseAction Box12 "MouseOverAction|MouseLeaveAction|LeftMouseDownAction"][!DisableMouseAction Box13 "MouseOverAction|MouseLeaveAction|LeftMouseDownAction"][!SetOption Box11 StrokeColor0 "Stroke Color 155,155,155,85"][!SetOption Box11 StrokeColor1 "Stroke Color 155,155,155,85"][!SetOption Box11Text FontColor "155,155,155,85"][!SetOption Box12 StrokeColor0 "Stroke Color 155,155,155,85"][!SetOption Box12 StrokeColor1 "Stroke Color 155,155,155,85"][!SetOption Box12Text FontColor "155,155,155,85"][!SetOption Box13 StrokeColor0 "Stroke Color 155,155,155,85"][!SetOption Box13 StrokeColor1 "Stroke Color 155,155,155,85"][!SetOption Box13Text FontColor "155,155,155,85"][!UpdateMeterGroup Boxs][!Redraw]
IfFalseAction=[!EnableMouseAction Box11 "MouseOverAction|MouseLeaveAction|LeftMouseDownAction"][!EnableMouseAction Box12 "MouseOverAction|MouseLeaveAction|LeftMouseDownAction"][!EnableMouseAction Box13 "MouseOverAction|MouseLeaveAction|LeftMouseDownAction"][!SetOption Box11 StrokeColor0 "Stroke Color 155,155,155"][!SetOption Box11 StrokeColor1 "Stroke Color #Lime#"][!SetOption Box11Text FontColor "[#BoxTextColor0[#[#Box[##*CURRENTSECTION*#]Variable]]]"][!SetOption Box12 StrokeColor0 "Stroke Color 155,155,155"][!SetOption Box12 StrokeColor1 "Stroke Color #Lime#"][!SetOption Box12Text FontColor "[#BoxTextColor0[#[#Box[##*CURRENTSECTION*#]Variable]]]"][!SetOption Box13 StrokeColor0 "Stroke Color 155,155,155"][!SetOption Box13 StrokeColor1 "Stroke Color #Lime#"][!SetOption Box13Text FontColor "[#BoxTextColor0[#[#Box[##*CURRENTSECTION*#]Variable]]]"][!UpdateMeterGroup Boxs][!Redraw]
DynamicVariables=1

[Calc.RestoreItems]
Measure=Calc
Formula=(#Uptimer___Use_Smart_Time#+#Uptimer___Show_Days#+#Uptimer___Show_Hours#+#Uptimer___Show_Minutes#+#Uptimer___Show_Icon#)
IfCondition=Calc.RestoreItems = 0
IfTrueAction=[!SetVariable Uptimer___Show_Icon ([#Uptimer___Show_Icon]=1?0:1) "Droptop\DropdownBar"][!WriteKeyValue Variables Uptimer___Show_Icon ([#Uptimer___Show_Icon]=1?0:1) "#MyVariablesLoc#"][!SetVariable Uptimer___Show_Icon ([#Uptimer___Show_Icon]=1?0:1)][!UpdateMeasure #CURRENTSECTION#][!UpdateMeter *][!Redraw][#Uptimer___Update_Meters_TopBar]
DynamicVariables=1

[Calc.HideTime]
Measure=Calc
Formula=(#Uptimer___Show_Days#+#Uptimer___Show_Hours#+#Uptimer___Show_Minutes#)
IfCondition=Calc.HideTime = 0
IfTrueAction=[#Uptimer___Update_Meters_TopBar]
DynamicVariables=1

; -------------------------------------------------------------

[TitleText1]
Meter=String
MeterStyle=TitleStyle1
FontSize=(30*#DroptopSize#)
FontColor=#Lime#
X=(400*#DroptopSize#)
Y=(50*#DroptopSize#)
Text="Top Bar"

; -------------------------------------------------------------

[Box1]
Meter=Shape
MeterStyle=BoxStyle
X=((400*#DroptopSize#)-[#CURRENTSECTION#:W]/2-[#CURRENTSECTION#:W]*1.5-(30*#DroptopSize#)*1.5)
Y=(130*#DroptopSize#-[#CURRENTSECTION#:H]/2)

[Box2]
Meter=Shape
MeterStyle=BoxStyle | MiniBoxStyle | BoxInvertedStyle
X=(10*#DroptopSize#)r

[Box3]
Meter=Shape
MeterStyle=BoxStyle | MiniBoxStyle

[Box4]
Meter=Shape
MeterStyle=BoxStyle
X=([Box1:X]+[Box1:W]+(30*#DroptopSize#))
Y=[Box1:Y]

[Box5]
Meter=Shape
MeterStyle=BoxStyle | MiniBoxStyle
X=(10*#DroptopSize#)r

[Box6]
Meter=Shape
MeterStyle=BoxStyle
X=([Box4:X]+[Box4:W]+(30*#DroptopSize#))
Y=[Box4:Y]

[Box7]
Meter=Shape
MeterStyle=BoxStyle | MiniBoxStyle
X=(10*#DroptopSize#)r

[Box8]
Meter=Shape
MeterStyle=BoxStyle | MiniBoxStyle | BoxInvertedStyle

[Box9]
Meter=Shape
MeterStyle=BoxStyle | MiniBoxStyle

[Box10]
Meter=Shape
MeterStyle=BoxStyle
X=([Box6:X]+[Box6:W]+(30*#DroptopSize#))
Y=[Box6:Y]

[Box11]
Meter=Shape
MeterStyle=BoxStyle | MiniBoxStyle
X=(10*#DroptopSize#)r

[Box12]
Meter=Shape
MeterStyle=BoxStyle | MiniBoxStyle

[Box13]
Meter=Shape
MeterStyle=BoxStyle | MiniBoxStyle

; -------------------------------------------------------------

[Box1Text]
Meter=String
MeterStyle=TitleStyle1 | BoxStyle | BoxTextStyle
Text=App Mode

[Box2Text]
Meter=String
MeterStyle=TitleStyle1 | BoxStyle | BoxTextStyle | MiniBoxTextStyle | BoxTextInvertedStyle
Text=Use PC Time
LeftMouseDownAction=[!WriteKeyValue Variables Uptimer___Show_Login_Time 0 "#MyVariablesLoc#"][!SetVariable Uptimer___Show_Login_Time 0 "Droptop\DropdownBar"][!SetVariable Uptimer___Show_Login_Time 0 "Droptop\Other\BackgroundProcesses"][!SetVariable Uptimer___Show_Login_Time 0][!UpdateMeter *][!Redraw][!UpdateMeasure Uptimer___Measure_Uptime "Droptop\Other\BackgroundProcesses"]

[Box3Text]
Meter=String
MeterStyle=TitleStyle1 | BoxStyle | BoxTextStyle | MiniBoxTextStyle
Text=Use User Time
LeftMouseDownAction=[!WriteKeyValue Variables Uptimer___Show_Login_Time 1 "#MyVariablesLoc#"][!SetVariable Uptimer___Show_Login_Time 1 "Droptop\DropdownBar"][!SetVariable Uptimer___Show_Login_Time 1 "Droptop\Other\BackgroundProcesses"][!SetVariable Uptimer___Show_Login_Time 1][!UpdateMeter *][!Redraw][!UpdateMeasure Uptimer___Measure_Uptime "Droptop\Other\BackgroundProcesses"]

[Box4Text]
Meter=String
MeterStyle=TitleStyle1 | BoxStyle | BoxTextStyle
Text=Icon Settings

[Box5Text]
Meter=String
MeterStyle=TitleStyle1 | BoxStyle | BoxTextStyle | MiniBoxTextStyle
Text=Show Icon
LeftMouseDownAction=[!WriteKeyValue Variables Uptimer___Show_Icon ([#Uptimer___Show_Icon]=1?0:1) "#MyVariablesLoc#"][!SetVariable Uptimer___Show_Icon ([#Uptimer___Show_Icon]=1?0:1) "Droptop\DropdownBar"][!SetVariable Uptimer___Show_Icon ([#Uptimer___Show_Icon]=1?0:1) "Droptop\Other\BackgroundProcesses"][!SetVariable Uptimer___Show_Icon ([#Uptimer___Show_Icon]=1?0:1)][!UpdateMeasure Calc.RestoreItems][!UpdateMeter *][!Redraw][#Uptimer___Update_Meters_TopBar]

[Box6Text]
Meter=String
MeterStyle=TitleStyle1 | BoxStyle | BoxTextStyle
Text=Time Settings

[Box7Text]
Meter=String
MeterStyle=TitleStyle1 | BoxStyle | BoxTextStyle | MiniBoxTextStyle
Text=Use Smart Time
LeftMouseDownAction=[!WriteKeyValue Variables Uptimer___Use_Smart_Time 1 "#MyVariablesLoc#"][!SetVariable Uptimer___Use_Smart_Time 1 "Droptop\DropdownBar"][!SetVariable Uptimer___Use_Smart_Time 1 "Droptop\Other\BackgroundProcesses"][!SetVariable Uptimer___Use_Smart_Time 1][!UpdateMeasure Calc.RestoreItems][!UpdateMeasure Calc.HideTime][!UpdateMeasure Calc.SmartTime][!UpdateMeter *][!Redraw][!UpdateMeasure Uptimer___Measure_Uptime "Droptop\Other\BackgroundProcesses"][#Uptimer___Update_Meters_TopBar]

[Box8Text]
Meter=String
MeterStyle=TitleStyle1 | BoxStyle | BoxTextStyle | MiniBoxTextStyle | BoxTextInvertedStyle
Text=Use Manual Time
LeftMouseDownAction=[!WriteKeyValue Variables Uptimer___Use_Smart_Time 0 "#MyVariablesLoc#"][!SetVariable Uptimer___Use_Smart_Time 0 "Droptop\DropdownBar"][!SetVariable Uptimer___Use_Smart_Time 0 "Droptop\Other\BackgroundProcesses"][!SetVariable Uptimer___Use_Smart_Time 0][!UpdateMeasure Calc.RestoreItems][!UpdateMeasure Calc.HideTime][!UpdateMeasure Calc.SmartTime][!UpdateMeter *][!Redraw][!UpdateMeasure Uptimer___Measure_Uptime "Droptop\Other\BackgroundProcesses"][#Uptimer___Update_Meters_TopBar]

[Box9Text]
Meter=String
MeterStyle=TitleStyle1 | BoxStyle | BoxTextStyle | MiniBoxTextStyle
Text=Use Leading Zeros
LeftMouseDownAction=[!WriteKeyValue Variables Uptimer___Show_Leading_Zeros ([#Uptimer___Show_Leading_Zeros]=1?0:1) "#MyVariablesLoc#"][!SetVariable Uptimer___Show_Leading_Zeros ([#Uptimer___Show_Leading_Zeros]=1?0:1) "Droptop\DropdownBar"][!SetVariable Uptimer___Show_Leading_Zeros ([#Uptimer___Show_Leading_Zeros]=1?0:1) "Droptop\Other\BackgroundProcesses"][!SetVariable Uptimer___Show_Leading_Zeros ([#Uptimer___Show_Leading_Zeros]=1?0:1)][!UpdateMeasure Calc.RestoreItems][!UpdateMeasure Calc.HideTime][!UpdateMeter *][!Redraw][!UpdateMeasure Uptimer___Measure_Uptime "Droptop\Other\BackgroundProcesses"]

[Box10Text]
Meter=String
MeterStyle=TitleStyle1 | BoxStyle | BoxTextStyle
Text=Time Format

[Box11Text]
Meter=String
MeterStyle=TitleStyle1 | BoxStyle | BoxTextStyle | MiniBoxTextStyle
Text=Show Days
LeftMouseDownAction=[!WriteKeyValue Variables Uptimer___Show_Days ([#Uptimer___Show_Days]=1?0:1) "#MyVariablesLoc#"][!SetVariable Uptimer___Show_Days ([#Uptimer___Show_Days]=1?0:1) "Droptop\DropdownBar"][!SetVariable Uptimer___Show_Days ([#Uptimer___Show_Days]=1?0:1) "Droptop\Other\BackgroundProcesses"][!SetVariable Uptimer___Show_Days ([#Uptimer___Show_Days]=1?0:1)][!UpdateMeasure Calc.RestoreItems][!UpdateMeasure Calc.HideTime][!UpdateMeter *][!Redraw][!UpdateMeasure Uptimer___Measure_Uptime "Droptop\Other\BackgroundProcesses"]

[Box12Text]
Meter=String
MeterStyle=TitleStyle1 | BoxStyle | BoxTextStyle | MiniBoxTextStyle
Text=Show Hours
LeftMouseDownAction=[!WriteKeyValue Variables Uptimer___Show_Hours ([#Uptimer___Show_Hours]=1?0:1) "#MyVariablesLoc#"][!SetVariable Uptimer___Show_Hours ([#Uptimer___Show_Hours]=1?0:1) "Droptop\DropdownBar"][!SetVariable Uptimer___Show_Hours ([#Uptimer___Show_Hours]=1?0:1) "Droptop\Other\BackgroundProcesses"][!SetVariable Uptimer___Show_Hours ([#Uptimer___Show_Hours]=1?0:1)][!UpdateMeasure Calc.RestoreItems][!UpdateMeasure Calc.HideTime][!UpdateMeter *][!Redraw][!UpdateMeasure Uptimer___Measure_Uptime "Droptop\Other\BackgroundProcesses"]

[Box13Text]
Meter=String
MeterStyle=TitleStyle1 | BoxStyle | BoxTextStyle | MiniBoxTextStyle
Text=Show Minutes
LeftMouseDownAction=[!WriteKeyValue Variables Uptimer___Show_Minutes ([#Uptimer___Show_Minutes]=1?0:1) "#MyVariablesLoc#"][!SetVariable Uptimer___Show_Minutes ([#Uptimer___Show_Minutes]=1?0:1) "Droptop\DropdownBar"][!SetVariable Uptimer___Show_Minutes ([#Uptimer___Show_Minutes]=1?0:1) "Droptop\Other\BackgroundProcesses"][!SetVariable Uptimer___Show_Minutes ([#Uptimer___Show_Minutes]=1?0:1)][!UpdateMeasure Calc.RestoreItems][!UpdateMeasure Calc.HideTime][!UpdateMeter *][!Redraw][!UpdateMeasure Uptimer___Measure_Uptime "Droptop\Other\BackgroundProcesses"]

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
