;----------------------------------------------------
; # # DO NOT REMOVE ANYTHING FROM THIS SECTION # # # 
;----------------------------------------------------

[Rainmeter]
Update=-1
LeftMouseDownAction=[]

[Variables]
CustomAppPosition=3

@IncludeCommunityAppMeters=#SKINSPATH#Droptop\@Resources\Meters\CommunityAppMeters.inc

;----------------------------------------------------
; Droptop Variables

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

;----------------------------------------------------
; Beta Variables

ActionTimer.HLFadeIn=1

;----------------------------------------------------
; Custom Variables

NumberOfPage=1
CheckNumberOfPageBound=0

CurrentHighlightType=0
Meter_Shape_1_Type_0=([#*DropdownMenuCutout*]+[#*DropdownHLOffsetX*]),[[#*CurrentSubFolder*]:Y],([#*DropdownMenuWidth*]+[#*SysAppMenuWOffset*]-([#*DropdownMenuCutout*]*2)+(([#*DropdownMenuWidth*]-([#*DropdownMenuCutout*]*2))%1)-([#*DropdownHLOffsetX*]*2)),([#*DropdownItemHeight*]*2),[#*DropdownHighlightCorner*] | Fill Color [#*DropdownItemHL*],(([#*DropdownHLOpacity*]/[#*HighlightShapeOpacityDivisor1B*])*[#*ActionTimer.HLFadeIn*]) | StrokeWidth [#*DropdownHLStrokeWidth*] | Stroke Color 0,0,0,([#*DropdownHLStrokeOpacity*]*[#*ActionTimer.HLFadeIn*])
Meter_Shape_2_Type_0=([#*DropdownMenuCutout*]+[#*DropdownHLOffsetX*]),[[#*CurrentSubFolder*]:Y],([#*DropdownMenuWidth*]+[#*SysAppMenuWOffset*]-([#*DropdownMenuCutout*]*2)+(([#*DropdownMenuWidth*]-([#*DropdownMenuCutout*]*2))%1)-([#*DropdownHLOffsetX*]*2)),([#*DropdownItemHeight*]*2),[#*DropdownHighlightCorner*] | Fill Color [#*DropdownFontColor1*],((25*[#*ReverseDarkLight*])*[#*ActionTimer.HLFadeIn*]) | StrokeWidth 0
Meter_Shape_3_Type_0=([#*DropdownMenuCutout*]+[#*DropdownHLOffsetX*]),[[#*CurrentSubFolder*]:Y],([#*DropdownMenuWidth*]-([#*DropdownMenuCutout*]*2)+(([#*DropdownMenuWidth*]-([#*DropdownMenuCutout*]*2))%1)-([#*DropdownHLOffsetX*]*2)),([#*DropdownItemHeight*]*2),[#*DropdownHighlightCorner*] | Fill LinearGradient HLShadowGradient | StrokeWidth 0
Meter_Shape_4_Type_0=([#*DropdownMenuCutout*]+[#*DropdownHLOffsetX*]),[[#*CurrentSubFolder*]:Y],([#*DropdownMenuWidth*]+[#*SysAppMenuWOffset*]-([#*DropdownMenuCutout*]*2)+(([#*DropdownMenuWidth*]-([#*DropdownMenuCutout*]*2))%1)-([#*DropdownHLOffsetX*]*2)),([#*DropdownItemHeight*]*2),[#*DropdownHighlightCorner*] | Fill Color 255,255,255,((55*[#*DropdownHLSolidColor*])*[#*ActionTimer.HLFadeIn*]) | StrokeWidth 0
Meter_Shape_1_Type_1=[[#*CurrentSubFolder*]:X],[[#*CurrentSubFolder*]:Y],[[#*CurrentSubFolder*]:W],[[#*CurrentSubFolder*]:H],[#*DropdownHighlightCorner*] | Fill Color [#*DropdownItemHL*],(([#*DropdownHLOpacity*]/[#*HighlightShapeOpacityDivisor1B*])*[#*ActionTimer.HLFadeIn*]) | StrokeWidth [#*DropdownHLStrokeWidth*] | Stroke Color 0,0,0,([#*DropdownHLStrokeOpacity*]*[#*ActionTimer.HLFadeIn*])
Meter_Shape_2_Type_1=[[#*CurrentSubFolder*]:X],[[#*CurrentSubFolder*]:Y],[[#*CurrentSubFolder*]:W],[[#*CurrentSubFolder*]:H],[#*DropdownHighlightCorner*] | Fill Color [#*DropdownFontColor1*],((25*[#*ReverseDarkLight*])*[#*ActionTimer.HLFadeIn*]) | StrokeWidth 0
Meter_Shape_3_Type_1=[[#*CurrentSubFolder*]:X],[[#*CurrentSubFolder*]:Y],[[#*CurrentSubFolder*]:W],[[#*CurrentSubFolder*]:H],[#*DropdownHighlightCorner*] | Fill LinearGradient HLShadowGradient | StrokeWidth 0
Meter_Shape_4_Type_1=[[#*CurrentSubFolder*]:X],[[#*CurrentSubFolder*]:Y],[[#*CurrentSubFolder*]:W],[[#*CurrentSubFolder*]:H],[#*DropdownHighlightCorner*] | Fill Color 255,255,255,((55*[#*DropdownHLSolidColor*])*[#*ActionTimer.HLFadeIn*]) | StrokeWidth 0

;----------------------------------------------------
; # # BEGIN EDITING BELOW # # # # # # # # # # # # # #
;----------------------------------------------------

[InfoStyle]
Padding=#DropdownItemPadding1#,#DropdownItemPaddingY#,#DropdownNoIconPadding#,(#DropdownItemPaddingY#*-1)
W=((#DropdownMenuWidth#+2)-#DropdownNoIconPadding#-#DropdownItemPadding1#)

[IconStyle]
ImageName=
Y=R

[ArrowStyleB]
Y=0
Hidden=1

[BoxStyle]

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
InlineSetting4=Color | #DropdownFontColor1#,(#DropdownItemOpacity#/2)

[SubInfoStyle]
Text=
MouseOverAction=[!SetVariable CurrentHighlightType "0"][!SetOption [##CURRENTSECTION#] InlineSetting4 "Color | #DropdownFontColor2#,#DropdownItemOpacity#"]
MouseLeaveAction=[!SetOption [##CURRENTSECTION#] InlineSetting4 "Color | #DropdownFontColor1#,(#DropdownItemOpacity#/2)"]

[SubMiniInfoStyle]
InlinePattern3=\|.*
InlineSetting3=Size | (#DropdownItemFontSize#*0.9)
InlinePattern4=\|.*
InlineSetting4=Color | #DropdownFontColor1#,(#DropdownItemOpacity#/1.5)

[HighlightStyle]
HLShadowGradient=90 | 255,255,255,((35*#DropdownHLShadow#)*#ActionTimer.HLFadeIn#) ; 1.0 | 0,0,0,((35*#DropdownHLShadow#)*#ActionTimer.HLFadeIn#) ; 0.0
Group=Highlight | HL | Animation.HL
DynamicVariables=1

;----------------------------------------------------

[Background]

[Background2]

[Background3]

;----------------------------------------------------

[HighlightBackground]

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
Meter=String
MeterStyle=
Hidden=1

[2Arrow]
Meter=String
MeterStyle=
Hidden=1

[3Arrow]
Meter=String
MeterStyle=
Hidden=1

[4Arrow]
Meter=String
MeterStyle=
Hidden=1

[5Arrow]
Meter=String
MeterStyle=
Hidden=1

[6Arrow]
Meter=String
MeterStyle=
Hidden=1

[7Arrow]
Meter=String
MeterStyle=
Hidden=1

[8Arrow]
Meter=String
MeterStyle=
Hidden=1

[9Arrow]
Meter=String
MeterStyle=
Hidden=1

[10Arrow]
Meter=String
MeterStyle=
Hidden=1

[11Arrow]
Meter=Shape
MeterStyle=ArrowStyleB

[12Arrow]
Meter=Shape
MeterStyle=ArrowStyleB
