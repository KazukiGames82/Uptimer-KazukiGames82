;----------------------------------------------------
; # # DO NOT REMOVE ANYTHING FROM THIS SECTION # # # 
;----------------------------------------------------

[Rainmeter]
Update=-1
LeftMouseDownAction=[]
OnRefreshAction=[#Uptimer_Animation_Slide_Down_[#Uptimer-KazukiGames82___Use_Dropdown_Animation]]

[Variables]
CustomAppPosition=3

FolderNumber=2

@IncludeCommunityAppMeters=#SKINSPATH#Droptop\@Resources\Meters\CommunityAppMeters.inc
@IncludeSlide=#SKINSPATH#Droptop Community Apps\Apps\#MyAppID#\Config\Slide.inc

FlatTopShape=

DropdownMenuWidth=#DropdownSubMenuWidth#

BoxHeight1=0
BoxHeight2=0
BoxHeight3=0
BoxHeight4=0
BoxHeight5=0

WebViewWidth=0
WebViewHeight=0

IconW=((16*#DroptopSize#)-((16*#DroptopSize#)%1))
IconH=((16*#DroptopSize#)-((16*#DroptopSize#)%1))

ItemText1=Submenu text 1
ItemAction1=

ItemText2=Submenu text 2
ItemAction2=

ItemText3=Submenu text 3
ItemAction3=

ItemText4=Submenu text 4
ItemAction4=

ItemText5=Submenu text 5
ItemAction5=

ItemText6=Submenu text 6
ItemAction6=

ItemText7=Submenu text 7
ItemAction7=

ItemText8=Submenu text 8
ItemAction8=

ItemText9=Submenu text 9
ItemAction9=

ItemText10=Submenu text 10
ItemAction10=

Uptimer-KazukiGames82___Wait_Time_0=0
Uptimer-KazukiGames82___Wait_Time_1=0

;----------------------------------------------------
; # # BEGIN EDITING BELOW # # # # # # # # # # # # # #
;----------------------------------------------------

[InfoStyle]
LeftMouseDownAction=#Action0#

[IconStyle]
ImageTint=#DropdownFontColor1#,#DropdownItemOpacity#
Y=R
ImageName=
Group=Icons

[ArrowStyleB]
Y=0
Hidden=1

;----------------------------------------------------
; Measure
;----------------------------------------------------

[UptimerTimer]
SlideDown0=[!EnableMouseAction * "*"][!SetVariable Uptimer_Slide "1"]#Uptimer_Update#

;----------------------------------------------------
; Backgrounds
;----------------------------------------------------

[Background]
Shape=Rectangle #DropdownMenuCutout#,(#DropdownMenuShapeOffsetH#+#DropdownMenuCutout#),(#DropdownMenuWidth#+#SysAppMenuWOffset#+2-(#DropdownMenuCutout#*2)),(#DropdownItemHeight#*#NumberOfItems#+((#DropdownIconYoffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)-(#DropdownMenuCutout#*2)),#DropdownBGCorner# | Fill Color #DropdownBGColor1#,(#ForceOpaque#=1?255:(#DropdownMenuOpacity1#<1?1:#DropdownMenuOpacity1#)) | StrokeWidth #DropdownStrokeWidth# | Stroke Color #DropdownStrokeColor#,#DropdownStrokeOpacity#
Shape2=Rectangle #DropdownMenuCutout#,(#DropdownMenuShapeOffsetH#+#DropdownMenuCutout#),1,((#DropdownItemHeight#*#NumberOfItems#+((#DropdownIconYoffset#+#DropdownItemYOffset#)*2)+(((#DividerSpace#*2)+#DividerHeight#)*#NumberOfDividers#)-(#DropdownMenuCutout#*2))+(#DropdownStrokeWidth#*#DropdownRoundCorners#)) | Fill Color 0,0,0,0 | StrokeWidth 0
Shape3=
Y=(-([#CURRENTSECTION#:H]*((#Uptimer_Slide#-1)*-1)))
DynamicVariables=1
Group=Animation


;----------------------------------------------------
; Highlight
;----------------------------------------------------

[HighlightBackground]
Y=r

[HighlightSelected]

;-----------------------------------------

[1]
MeterStyle=InfoStyle

[2]
MeterStyle=InfoStyle

[3]
MeterStyle=InfoStyle

[4]
MeterStyle=InfoStyle

[5]
MeterStyle=InfoStyle

[6]
MeterStyle=InfoStyle

[7]
MeterStyle=InfoStyle

[8]
MeterStyle=InfoStyle

[9]
MeterStyle=InfoStyle

[10]
MeterStyle=InfoStyle

;-----------------------------------------

[1Icon]
MeterStyle=IconStyle

[2Icon]
MeterStyle=IconStyle

[3Icon]
MeterStyle=IconStyle

[4Icon]
MeterStyle=IconStyle

[5Icon]
MeterStyle=IconStyle

[6Icon]
MeterStyle=IconStyle

[7Icon]
MeterStyle=IconStyle

[8Icon]
MeterStyle=IconStyle

[9Icon]
MeterStyle=IconStyle

[10Icon]
MeterStyle=IconStyle
