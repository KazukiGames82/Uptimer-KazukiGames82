;----------------------------------------------------
; # # DO NOT REMOVE ANYTHING FROM THIS SECTION # # # 
;----------------------------------------------------

[Rainmeter]
Update=-1
LeftMouseDownAction=[]

[Variables]
CustomAppPosition=4

@IncludeCommunityAppMeters=#SKINSPATH#Droptop\@Resources\Meters\CommunityAppMeters.inc

BoxHeight1=0
BoxHeight2=0
BoxHeight3=0
BoxHeight4=0
BoxHeight5=0

WebViewWidth=0
WebViewHeight=0

IconW=((16*#DroptopSize#)-((16*#DroptopSize#)%1))
IconH=((16*#DroptopSize#)-((16*#DroptopSize#)%1))

ItemText1=
ItemIsFolder1=0
ItemAction1=

ItemText2=
ItemIsFolder2=0
ItemAction2=

ItemText3=
ItemIsFolder3=0
ItemAction3=

ItemText4=
ItemIsFolder4=0
ItemAction4=

ItemText5=
ItemIsFolder5=0
ItemAction5=

ItemText6=
ItemIsFolder6=0
ItemAction6=

ItemText7=
ItemIsFolder7=0
ItemAction7=

ItemText8=
ItemIsFolder8=0
ItemAction8=

ItemText9=
ItemIsFolder9=0
ItemAction9=

ItemText10=
ItemIsFolder10=0
ItemAction10=

ItemText11=
ItemIsFolder11=0
ItemAction11=

ItemText12=
ItemIsFolder12=0
ItemAction12=

NumberOfPage=1
CheckNumberOfPageBound=1

CurrentHighlightType=0
Meter_Shape_1_Type_0=([#*DropdownMenuCutout*]+[#*DropdownHLOffsetX*]),0,([#*DropdownMenuWidth*]+[#*SysAppMenuWOffset*]-([#*DropdownMenuCutout*]*2)+(([#*DropdownMenuWidth*]-([#*DropdownMenuCutout*]*2))%1)-([#*DropdownHLOffsetX*]*2)),([#*DropdownItemHeight*]*2),[#*DropdownHighlightCorner*] | Fill LinearGradient HLColorGradient | StrokeWidth [#*DropdownHLStrokeWidth*] | Stroke Color 0,0,0,([#*DropdownHLStrokeOpacity*]*[#*ActionTimer.HLFadeIn*])
Meter_Shape_2_Type_0=([#*DropdownMenuCutout*]+[#*DropdownHLOffsetX*]),0,([#*DropdownMenuWidth*]+[#*SysAppMenuWOffset*]-([#*DropdownMenuCutout*]*2)+(([#*DropdownMenuWidth*]-([#*DropdownMenuCutout*]*2))%1)-([#*DropdownHLOffsetX*]*2)),([#*DropdownItemHeight*]*2),[#*DropdownHighlightCorner*] | Fill Color [#*DropdownFontColor1*],((25*[#*ReverseDarkLight*])*[#*ActionTimer.HLFadeIn*]) | StrokeWidth 0
Meter_Shape_3_Type_0=([#*DropdownMenuCutout*]+[#*DropdownHLOffsetX*]),0,([#*DropdownMenuWidth*]-([#*DropdownMenuCutout*]*2)+(([#*DropdownMenuWidth*]-([#*DropdownMenuCutout*]*2))%1)-([#*DropdownHLOffsetX*]*2)),([#*DropdownItemHeight*]*2),[#*DropdownHighlightCorner*] | Fill LinearGradient HLShadowGradient | StrokeWidth 0
Meter_Shape_4_Type_0=([#*DropdownMenuCutout*]+[#*DropdownHLOffsetX*]),0,([#*DropdownMenuWidth*]+[#*SysAppMenuWOffset*]-([#*DropdownMenuCutout*]*2)+(([#*DropdownMenuWidth*]-([#*DropdownMenuCutout*]*2))%1)-([#*DropdownHLOffsetX*]*2)),([#*DropdownItemHeight*]*2),[#*DropdownHighlightCorner*] | Fill Color 255,255,255,((55*[#*DropdownHLSolidColor*])*[#*ActionTimer.HLFadeIn*]) | StrokeWidth 0
Meter_Shape_1_Type_1=[[#*CurrentSubFolder*]:X],0,[[#*CurrentSubFolder*]:W],[[#*CurrentSubFolder*]:H],[#*DropdownHighlightCorner*] | Fill LinearGradient HLColorGradient | StrokeWidth [#*DropdownHLStrokeWidth*] | Stroke Color 0,0,0,([#*DropdownHLStrokeOpacity*]*[#*ActionTimer.HLFadeIn*])
Meter_Shape_2_Type_1=[[#*CurrentSubFolder*]:X],0,[[#*CurrentSubFolder*]:W],[[#*CurrentSubFolder*]:H],[#*DropdownHighlightCorner*] | Fill Color [#*DropdownFontColor1*],((25*[#*ReverseDarkLight*])*[#*ActionTimer.HLFadeIn*]) | StrokeWidth 0
Meter_Shape_3_Type_1=[[#*CurrentSubFolder*]:X],0,[[#*CurrentSubFolder*]:W],[[#*CurrentSubFolder*]:H],[#*DropdownHighlightCorner*] | Fill LinearGradient HLShadowGradient | StrokeWidth 0
Meter_Shape_4_Type_1=[[#*CurrentSubFolder*]:X],0,[[#*CurrentSubFolder*]:W],[[#*CurrentSubFolder*]:H],[#*DropdownHighlightCorner*] | Fill Color 255,255,255,((55*[#*DropdownHLSolidColor*])*[#*ActionTimer.HLFadeIn*]) | StrokeWidth 0

;----------------------------------------------------
; # # BEGIN EDITING BELOW # # # # # # # # # # # # # #
;----------------------------------------------------

[InfoStyle]
Padding=#DropdownItemPadding1#,#DropdownItemPaddingY#,#DropdownNoIconPadding#,(#DropdownItemPaddingY#*-1)
W=((#DropdownMenuWidth#+2)-#DropdownNoIconPadding#-#DropdownItemPadding1#)

[IconStyle]
ImageName=

[ArrowStyleB]

[BoxStyle]
DynamicVariables=1

[TextStyle]

[MiniInfoStyle]
StringAlign=CenterCenter
Padding=#DropdownNoIconPadding#,#DropdownItemPaddingY#,#DropdownNoIconPadding#,(#DropdownItemPaddingY#*-1)
X=((#DropdownMenuWidth#+2)/2)
W=((#DropdownMenuWidth#+2)-#DropdownNoIconPadding#*2)
H=(#DropdownItemHeight#*2)
InlinePattern3=#CRLF#.*
InlineSetting3=Size | (#DropdownItemFontSize#*0.9)
InlinePattern4=#CRLF#.*
InlineSetting4=Color | #DropdownFontColor1#,(#DropdownItemOpacity#/1.25)
Hidden=0

[SubInfoStyle]
Text=
MouseOverAction=[!SetVariable CurrentHighlightType "0"][!SetOption [##CURRENTSECTION#] InlineSetting4 "Color | #DropdownFontColor2#,#DropdownItemOpacity#"]
MouseLeaveAction=[!SetOption [##CURRENTSECTION#] InlineSetting4 "Color | #DropdownFontColor1#,(#DropdownItemOpacity#/1.25)"]

[SubMiniInfoStyle]
InlinePattern3=\|.*
InlineSetting3=Size | (#DropdownItemFontSize#*0.9)
InlinePattern4=\|.*
InlineSetting4=Color | #DropdownFontColor1#,(#DropdownItemOpacity#/1.25)

;-----------------------------------------

[1]
MeterStyle=#DefaultMeterStyle#

[2]
MeterStyle=#DefaultMeterStyle#

[3]
MeterStyle=#DefaultMeterStyle#

[4]
MeterStyle=#DefaultMeterStyle#

[5]
MeterStyle=#DefaultMeterStyle#

[6]
MeterStyle=#DefaultMeterStyle#

[7]
MeterStyle=#DefaultMeterStyle#

[8]
MeterStyle=#DefaultMeterStyle#

[9]
MeterStyle=#DefaultMeterStyle#

[10]
MeterStyle=#DefaultMeterStyle#

[11]
Meter=String
MeterStyle=InfoStyle

[12]
Meter=String
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

[11Icon]
Meter=Image
MeterStyle=IconStyle

[12Icon]
Meter=Image
MeterStyle=IconStyle

;-----------------------------------------

[1Arrow]
MeterStyle=ArrowStyleB

[2Arrow]
MeterStyle=ArrowStyleB

[3Arrow]
MeterStyle=ArrowStyleB

[4Arrow]
MeterStyle=ArrowStyleB

[5Arrow]
MeterStyle=ArrowStyleB

[6Arrow]
MeterStyle=ArrowStyleB

[7Arrow]
MeterStyle=ArrowStyleB

[8Arrow]
MeterStyle=ArrowStyleB

[9Arrow]
MeterStyle=ArrowStyleB

[10Arrow]
MeterStyle=ArrowStyleB

[11Arrow]
Meter=Shape
MeterStyle=ArrowStyleB

[12Arrow]
Meter=Shape
MeterStyle=ArrowStyleB
