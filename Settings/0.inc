[Variables]
ItemHovered=0
ItemSelected=0

Button1Text0=Exit
Button1Text1=Confirm
Button1Text2=Confirm
Button1Text3=Confirm

Button1Action0=[!DeactivateConfig]
Button1Action1=[!Hide][!Refresh]
Button1Action2=[!Hide][!Refresh]
Button1Action3=[!Hide][!Refresh]

Button1TextColor0=155,155,155
Button1TextColor1=#Lime#
Button1TextColor2=#Lime#
Button1TextColor3=#Lime#

Box1=1
Box2=2
Box3=3

Box1Text=1
Box2Text=2
Box3Text=3

Box1TextColor0=155,155,155
Box1TextColor1=#Lime#
Box1TextColor2=155,155,155
Box1TextColor3=155,155,155

Box2TextColor0=155,155,155
Box2TextColor1=155,155,155
Box2TextColor2=#Lime#
Box2TextColor3=155,155,155

Box3TextColor0=155,155,155
Box3TextColor1=155,155,155
Box3TextColor2=155,155,155
Box3TextColor3=#Lime#

[TitleStyle1]
StringAlign=Center
FontColor=255,255,255,55
FontSize=(12*#DroptopSize#)
FontFace=#UniversalFont#
AntiAlias=1

[BoxStyle]
Shape=Rectangle 0,0,(160*#DroptopSize#),(45*#DroptopSize#),(6*#DroptopSize#) | StrokeWidth (2*#DroptopSize#) | Extend StrokeColor#ItemHovered# | Extend FillColor
Shape2=Rectangle 0,(55*#DroptopSize#),(160*#DroptopSize#),(120*#DroptopSize#),(6*#DroptopSize#) | StrokeWidth (2*#DroptopSize#) | Extend StrokeColor#ItemHovered# | Extend FillColor
FillColor=Fill Color 0,0,0,55
FillColor0=Fill Color 155,155,155
FillColor1=Fill Color 155,155,155
FillColor2=Fill Color 155,155,155
FillColor3=Fill Color 155,155,155
StrokeColor0=Stroke Color 155,155,155
StrokeColor1=Stroke Color 155,155,155
StrokeColor2=Stroke Color 155,155,155
StrokeColor3=Stroke Color 155,155,155
Y=r
; LeftMouseDownAction=[!EnableMouseActionGroup "MouseOverAction|MouseLeaveAction" Boxs][!SetVariable ItemSelected [##CURRENTSECTION#]][!DisableMouseAction #CURRENTSECTION# "MouseOverAction|MouseLeaveAction"][!UpdateMeterGroup Boxs][!UpdateMeterGroup Button1][!UpdateMeterGroup Button1][!Redraw]
LeftMouseDownAction=[!WriteKeyValue Variables Page [##CURRENTSECTION#] "#SKINSPATH#Droptop Community Apps\Apps\#MyAppID#\Settings\Settings.ini"][#Button1Action[##CURRENTSECTION#]]
MouseOverAction=[!SetVariable ItemHovered [##CURRENTSECTION#]][!UpdateMeterGroup Boxs[##CURRENTSECTION#]][!Redraw]
MouseLeaveAction=[!SetVariable ItemHovered 0][!UpdateMeterGroup Boxs[##CURRENTSECTION#]][!Redraw]
Group=Boxs | Boxs[##CURRENTSECTION#]
DynamicVariables=1

[BoxTextStyle]
StringAlign=CenterCenter
FontSize=(16*#DroptopSize#)
FontColor=[#Box[##CURRENTSECTION#]TextColor[#ItemHovered]]
X=([Box[##CURRENTSECTION#]:X]+[#CURRENTSECTION#:W]/2)
Y=([Box[##CURRENTSECTION#]:Y]+[#CURRENTSECTION#:H]/2)
W=[Box[##CURRENTSECTION#]:W]
H=(45*#DroptopSize#)
LeftMouseDownAction=
MouseOverAction=
MouseLeaveAction=

; -------------------------------------------------------------

[BackgroundShape]
LeftMouseDownAction=[!SetVariable ItemHovered 0][!EnableMouseActionGroup "MouseOverAction|MouseLeaveAction" Boxs][!SetVariable ItemSelected 0][!UpdateMeterGroup Boxs][!UpdateMeterGroup Button1][!UpdateMeterGroup Button1][!Redraw]

; -------------------------------------------------------------

[TitleText1]
Meter=String
MeterStyle=TitleStyle1
FontSize=(30*#DroptopSize#)
FontColor=#Lime#
X=(400*#DroptopSize#)
Y=(50*#DroptopSize#)
InlinePattern=v#MyAppVersion#
InlineSetting=Size | (10*#DroptopSize#)
Text="Uptimer#CRLF#v#MyAppVersion#"
Group=4

[TitleText2]
Meter=String
MeterStyle=TitleStyle1
FontSize=(15*#DroptopSize#)
FontColor=255,255,255,155
X=(400*#DroptopSize#)
Y=R
Text="Choose an option to configure"
Group=Animation
DynamicVariables=1

; -------------------------------------------------------------

[Box1]
Meter=Shape
MeterStyle=BoxStyle
Shape3=Rectangle (10*#DroptopSize#),(65*#DroptopSize#),(140*#DroptopSize#),(20*#DroptopSize#),(6*#DroptopSize#) | StrokeWidth 0 | Extend FillColor#ItemHovered#
StrokeColor1=Stroke Color #Lime#
FillColor1=FillColor #Lime#
X=(375*#DroptopSize#-[#CURRENTSECTION#:W])
Y=(160*#DroptopSize#)

[Box2]
Meter=Shape
MeterStyle=BoxStyle
Shape3=Rectangle (10*#DroptopSize#),(65*#DroptopSize#),(140*#DroptopSize#),(20*#DroptopSize#),(6*#DroptopSize#) | StrokeWidth 0 | Extend FillColor0
Shape4=Rectangle (90*#DroptopSize#),(95*#DroptopSize#),(60*#DroptopSize#),(70*#DroptopSize#),(6*#DroptopSize#) | StrokeWidth 0 | Extend FillColor#ItemHovered#
StrokeColor2=Stroke Color #Lime#
FillColor2=FillColor #Lime#
X=(425*#DroptopSize#)

; -------------------------------------------------------------

[Box1Text]
Meter=String
MeterStyle=TitleStyle1 | BoxStyle | BoxTextStyle
Text=Top Bar

[Box2Text]
Meter=String
MeterStyle=TitleStyle1 | BoxStyle | BoxTextStyle
Text=Dropdown

; -------------------------------------------------------------

[Button1]
Meter=Shape
Shape=Rectangle 0,0,([Button1Text:W]+(20*#DroptopSize#)),(45*#DroptopSize#),6 | StrokeWidth (2*#DroptopSize#) | Extend StrokeColor#ItemSelected# | Extend FillColor
FillColor=Fill Color 0,0,0,55
StrokeColor0=Stroke Color 155,155,155
StrokeColor1=Stroke Color #Lime#
StrokeColor2=Stroke Color #Lime#
StrokeColor3=Stroke Color #Lime#
X=((390*#DroptopSize#)-([Button1Text:W]/2))
Y=(370*#DroptopSize#)
LeftMouseDownAction=[]
LeftMouseUpAction=[!WriteKeyValue Variables Page [#ItemSelected] "#SKINSPATH#Droptop Community Apps\Apps\#MyAppID#\Settings\Settings.ini"][#Button1Action[#ItemSelected]]
MouseOverAction=[!SetOption #CURRENTSECTION# FillColor "Fill Color [#Button1TextColor[#ItemSelected]],255"][!SetOption Button1Text FontColor 25,25,25][!UpdateMeterGroup Button1][!Redraw]
MouseLeaveAction=[!SetOption #CURRENTSECTION# FillColor "Fill Color Fill Color 0,0,0,55"][!SetOption Button1Text FontColor [#Button1TextColor[#*ItemSelected*]]][!UpdateMeterGroup Button1][!Redraw]
Group=Button1
DynamicVariables=1

[Button1Text]
Meter=String
MeterStyle=TitleStyle1
FontSize=(16*#DroptopSize#)
FontColor=[#Button1TextColor[#ItemSelected]]
X=((800*#DroptopSize#)/2)
Y=([Button1:Y]+(10*#DroptopSize#))
Text="[#Button1Text[#ItemSelected]]"
Group=Button1
DynamicVariables=1