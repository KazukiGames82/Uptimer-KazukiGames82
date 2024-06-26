[Variables]

Uptimer_Slide=((#Uptimer-KazukiGames82___Use_Dropdown_Animation#-1)*-1)
Uptimer_Update=[!UpdateMeter Background][!Redraw]
Uptimer_Wait=8

Uptimer_Animation_Slide_Down_0=
Uptimer_Animation_Slide_Down_1=[!Hide][!DisableMouseAction * "*"][!CommandMeasure UptimerTimer "Stop 2"][!CommandMeasure UptimerTimer "Execute 1"]
Uptimer_Animation_Slide_Up_0=#CloseMenu#
Uptimer_Animation_Slide_Up_1=[!DisableMouseAction * "*"][!CommandMeasure UptimerTimer "Stop 1"][!CommandMeasure UptimerTimer "Execute 2"]

Uptimer-KazukiGames82___Wait_Time_0=150
Uptimer-KazukiGames82___Wait_Time_1=200

;----------------------------------------------------
; Measures
;----------------------------------------------------

[UptimerTimer]
Measure=Plugin
Plugin=ActionTimer
; Show Menu | Dropdown Menu Variant.
ActionList1=Wait [#Uptimer-KazukiGames82___Wait_Time_[#ShowFadeNum]] | SlideDownStart | SlideDown6 | Repeat SlideDown1,#Uptimer_Wait#,7 | Repeat SlideDown2,#Uptimer_Wait#,3 | Repeat SlideDown3,#Uptimer_Wait#,3 | Repeat SlideDown4,#Uptimer_Wait#,3 | Repeat SlideDown5,#Uptimer_Wait#,3 | Repeat SlideDown6,#Uptimer_Wait#,5 | SlideDown0
SlideDownStart=[!#Show#]
SlideDown0=[!EnableMouseAction * "*"][!UpdateMeasure Measure_Actions][!SetVariable Uptimer_Slide "1"]#Uptimer_Update#
SlideDown1=[!SetVariable Uptimer_Slide "(Clamp(([#Uptimer_Slide]+(1/10)),0,1))"]#Uptimer_Update#
SlideDown2=[!SetVariable Uptimer_Slide "(Clamp(([#Uptimer_Slide]+(1/20)),0,1))"]#Uptimer_Update#
SlideDown3=[!SetVariable Uptimer_Slide "(Clamp(([#Uptimer_Slide]+(1/40)),0,1))"]#Uptimer_Update#
SlideDown4=[!SetVariable Uptimer_Slide "(Clamp(([#Uptimer_Slide]+(1/80)),0,1))"]#Uptimer_Update# 
SlideDown5=[!SetVariable Uptimer_Slide "(Clamp(([#Uptimer_Slide]+(1/160)),0,1))"]#Uptimer_Update# 
SlideDown6=[!SetVariable Uptimer_Slide "(Clamp(([#Uptimer_Slide]+(1/320)),0,1))"]#Uptimer_Update# 
; Hide menu | Dropdown Menu Variant.
ActionList2=Repeat SlideUp6,#Uptimer_Wait#,5 | Repeat SlideUp5,#Uptimer_Wait#,3 | Repeat SlideUp4,#Uptimer_Wait#,3 | Repeat SlideUp3,#Uptimer_Wait#,3 | Repeat SlideUp2,#Uptimer_Wait#,3 | Repeat SlideUp1,#Uptimer_Wait#,7 | SlideUp0 | SlideUpEnd
SlideUp0=[!EnableMouseAction * "*"][!SetVariable Uptimer_Slide "0"]#Uptimer_Update#
SlideUp1=[!SetVariable Uptimer_Slide "(Clamp(([#Uptimer_Slide]-(1/10)),0,1))"]#Uptimer_Update#
SlideUp2=[!SetVariable Uptimer_Slide "(Clamp(([#Uptimer_Slide]-(1/20)),0,1))"]#Uptimer_Update#
SlideUp3=[!SetVariable Uptimer_Slide "(Clamp(([#Uptimer_Slide]-(1/40)),0,1))"]#Uptimer_Update#
SlideUp4=[!SetVariable Uptimer_Slide "(Clamp(([#Uptimer_Slide]-(1/80)),0,1))"]#Uptimer_Update# 
SlideUp5=[!SetVariable Uptimer_Slide "(Clamp(([#Uptimer_Slide]-(1/160)),0,1))"]#Uptimer_Update# 
SlideUp6=[!SetVariable Uptimer_Slide "(Clamp(([#Uptimer_Slide]-(1/320)),0,1))"]#Uptimer_Update# 
SlideUpEnd=#CloseMenu#
DynamicVariables=1
IgnoreWarnings=1
Disabled=1
