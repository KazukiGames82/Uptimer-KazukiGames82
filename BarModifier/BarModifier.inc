;----------------------------------------------------
; Styles
;----------------------------------------------------

[Uptimer-KazukiGames82.Style]
ImageAlpha=0
W=([Uptimer-KazukiGames82_String:W]-(([Uptimer-KazukiGames82_String:W])%1))

[Uptimer-KazukiGames82_Style]
X=[#SideAppSlotXPos[#SideAppPosCustomApp[#Uptimer-KazukiGames82]]]
MouseOverAction=
MouseLeaveAction=
LeftMouseDownAction=
RightMouseDownAction=
LeftMouseUpAction=
Container=SystemTrayContainer
Group=CustomApp[#Uptimer-KazukiGames82]Sys | SysTray | Buttons00 | AppButton[#CustomApp[#Uptimer-KazukiGames82]] | CustomAppButton | Uptimer-KazukiGames82
DynamicVariables=1

;----------------------------------------------------
; Meters
;----------------------------------------------------

[Uptimer-KazukiGames82_String]
Meter=String
MeterStyle=InfoStyle | Uptimer-KazukiGames82_Style
StringAlign=LeftCenter
FontColor=#TopBarFontColor1#,#TopBarTitleOpacity#
Padding=(#Uptimer-KazukiGames82___Show_Icon#=1?(((#TopHeight#+#TopBarIconHOffset#)*1.5)-((#TopHeight#+#TopBarIconHOffset#)*1.5)%1):((((#TopHeight#+#TopBarIconHOffset#)*1.5)/4)-(((#TopHeight#+#TopBarIconHOffset#)*1.5)/4)%1)),#TopBarSysTextYPadding#,(((((#TopHeight#+#TopBarIconHOffset#)*1.5)/4)-(((#TopHeight#+#TopBarIconHOffset#)*1.5)/4)%1)*#Uptimer-KazukiGames82___Show_Text#),0
Text=[#Uptimer-KazukiGames82___Text_[#Uptimer-KazukiGames82___Show_Text]]
Y=((#TopBarTextYOffset#+#TopHeight#/2)-((#TopBarTextYOffset#+#TopHeight#/2)%1))

[Uptimer-KazukiGames82_Icon]
Meter=Image
MeterStyle=InfoStyle | Uptimer-KazukiGames82_Style
ImageName="#SKINSPATH#Droptop Community Apps\Apps\Uptimer-KazukiGames82\Button\Medium\#Uptimer-KazukiGames82___Type_Style_Icon#\Button[#TopIconShadows[#TopBarFontShadow][#ChamLum1][#LockTopBarShadow[#LockTopBarShadowNum]]].png"
ImageTint=#TopBarFontColor1#,#TopBarTitleOpacity#
ImageAlpha=(#TopBarTitleOpacity#*#Uptimer-KazukiGames82___Show_Icon#)
Padding=#SysIconPadding#
X=r
Y=0
W=(((#TopHeight#+#TopBarIconHOffset#)*1.5)-((#TopHeight#+#TopBarIconHOffset#)*1.5)%1)
H=(#TopHeight#+#TopBarIconHOffset#)
