;----------------------------------------------------
; Styles
;----------------------------------------------------

[Uptimer-KazukiGames82.Style]
ImageAlpha=0
W=((((#TopHeight#+#TopBarIconHOffset#)*1.5)-((#TopHeight#+#TopBarIconHOffset#)*1.5)%1)*[#Uptimer___Show_Icon]+([Uptimer_KazukiGames82_String:W]-[Uptimer_KazukiGames82_String:W]%1+((((#TopHeight#+#TopBarIconHOffset#)*1.5)/3.5)-(((#TopHeight#+#TopBarIconHOffset#)*1.5)/3.5)%1)*[#Uptimer___Show_Icon])*(#Uptimer___Use_Smart_Time#=0?(([#Uptimer___Show_Days]+[#Uptimer___Show_Hours]+[#Uptimer___Show_Minutes])=0?0:1):1))

[Uptimer_KazukiGames82_Style]
X=[#SideAppSlotXPos[#SideAppPosCustomApp[#Uptimer-KazukiGames82]]]
MouseOverAction=
MouseLeaveAction=
LeftMouseDownAction=
RightMouseDownAction=
LeftMouseUpAction=
DynamicVariables=1
Container=SystemTrayContainer
Group=CustomApp[#Uptimer-KazukiGames82]Sys | SysTray | Buttons00 | AppButton[#CustomApp[#Uptimer-KazukiGames82]] | CustomAppButton | Uptimer-KazukiGames82

;----------------------------------------------------
; Meters
;----------------------------------------------------

[Uptimer_KazukiGames82_Icon]
Meter=Image
MeterStyle=InfoStyle | Uptimer_KazukiGames82_Style
ImageName="#SKINSPATH#Droptop Community Apps\Apps\Uptimer-KazukiGames82\Button\Medium\Button[#TopIconShadows[#TopBarFontShadow][#ChamLum1][#LockTopBarShadow[#LockTopBarShadowNum]]].png"
ImageTint=#TopBarFontColor1#,#TopBarTitleOpacity#
ImageAlpha=(#TopBarTitleOpacity#*[#Uptimer___Show_Icon])
Padding=#SysIconPadding#
X=[#SideAppSlotXPos[#SideAppPosCustomApp[#Uptimer-KazukiGames82]]]
Y=0
W=(((#TopHeight#+#TopBarIconHOffset#)*1.5)-((#TopHeight#+#TopBarIconHOffset#)*1.5)%1)
H=(#TopHeight#+#TopBarIconHOffset#)

[Uptimer_KazukiGames82_String]
Meter=String
MeterStyle=InfoStyle | Uptimer_KazukiGames82_Style
StringAlign=LeftCenter
FontColor=#TopBarFontColor1#,#TopBarTitleOpacity#
Padding=(((#TopBarSysTextWPadding#*1.5)-(#TopBarSysTextWPadding#*1.5)%1)*(1-[#Uptimer___Show_Icon])),#TopBarSysTextYPadding#,(((#TopBarSysTextWPadding#*1.5)-(#TopBarSysTextWPadding#*1.5)%1)*(1-[#Uptimer___Show_Icon])),0
Y=((#TopBarTextYOffset#+#TopHeight#/2)-((#TopBarTextYOffset#+#TopHeight#/2)%1))
X=([#SideAppSlotXPos[#SideAppPosCustomApp[#Uptimer-KazukiGames82]]]+(((#TopHeight#+#TopBarIconHOffset#)*1.5)-((#TopHeight#+#TopBarIconHOffset#)*1.5)%1)*[#Uptimer___Show_Icon])
Text=[#Uptimer___Text_Smart_[#Uptimer___Use_Smart_Time]]
Hidden=(#Uptimer___Use_Smart_Time#=0?(([#Uptimer___Show_Days]+[#Uptimer___Show_Hours]+[#Uptimer___Show_Minutes])=0?1:0):0)
