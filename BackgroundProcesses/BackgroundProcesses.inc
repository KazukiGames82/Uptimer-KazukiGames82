[Rainmeter]

[Variables]

;----------------------------------------------------
; # # ADD BACKGROUND PROCESSES BELOW # # # # # # # #
; # # Measures that run even when the app isn't open
;----------------------------------------------------

;----------------------------------------------------------------------
; Example # # # # # # # # # # # # # # # # # # # # # # # # # # # # # # #
; Updates the top bar when CPU temperature changes
; 
; UpdateDivider=10 rechecks the temperature every 10 seconds
; Recommended this number be no lower than 10 to prevent high CPU usage
;----------------------------------------------------------------------

[Uptimer___Measure_Time]
Measure=Time
UpdateDivider=60

[Uptimer___Measure_Login_Time]
Measure=Plugin
Plugin=SysInfo
SysInfoType=USER_LOGONTIME
IfCondition=([Uptimer___Measure_Login_Time] <> [#Uptimer___Login_Time_1])
IfTrueAction=[#Uptimer___Login_Action]
Substitute="":"[#Uptimer___Login_Time_1]"
DynamicVariables=1
UpdateDivider=-1

[Uptimer___Measure_Uptime]
Measure=Uptime
Format=[#Uptimer___Smart_Time_[#Uptimer___Use_Smart_Time]]
SecondsValue=[#Uptimer___Measure_Login_[#Uptimer___Show_Login_Time]]
OnUpdateAction=[#Uptimer___Measure_OnUpdateAction_[#Uptimer___Use_Smart_Time]]
OnChangeAction=[#Uptimer___Measure_OnChangeAction_[#Uptimer___Use_Smart_Time]]
DynamicVariables=1
UpdateDivider=60

[Uptimer___Measure_Calc_Days]
Measure=String
String=[Uptimer___Measure_Uptime]
RegExpSubstitute=1
Substitute="\s":"","(.*)#TimeDayShorthand#.*":"\1","":"0"
DynamicVariables=1
UpdateDivider=-1
Group=Uptimer___Calc

[Uptimer___Measure_Calc_Hours]
Measure=String
String=[Uptimer___Measure_Uptime]
RegExpSubstitute=1
Substitute="\s":"",".*#TimeDayShorthand#,(.*)#TimeHrShorthand#.*":"\1","":"0"
DynamicVariables=1
UpdateDivider=-1
Group=Uptimer___Calc

[Uptimer___Measure_Calc_Minutes]
Measure=String
String=[Uptimer___Measure_Uptime]
RegExpSubstitute=1
Substitute="\s":"",".*#TimeDayShorthand#,.*#TimeHrShorthand#,(.*)#TimeMinShorthand#.*":"\1","":"0"
DynamicVariables=1
UpdateDivider=-1
Group=Uptimer___Calc

[Uptimer___Measure_Condition_Days]
Measure=Calc
Formula=#Uptimer___Uptime_Days#
IfCondition=Uptimer___Measure_Condition_Days > 0
IfTrueAction=[!SetVariable Uptimer___Uptime_Show_Days 1 "Droptop\DropdownBar"][!WriteKeyValue Variables Uptimer___Uptime_Show_Days 1 "#UptimerWriteConfigPath#"]
IfFalseAction=[!SetVariable Uptimer___Uptime_Show_Days 0 "Droptop\DropdownBar"][!WriteKeyValue Variables Uptimer___Uptime_Show_Days 0 "#UptimerWriteConfigPath#"]
DynamicVariables=1
UpdateDivider=-1
Group=Uptimer___Condition

[Uptimer___Measure_Condition_Hours]
Measure=Calc
Formula=#Uptimer___Uptime_Hours#
IfCondition=Uptimer___Measure_Condition_Hours > 0
IfTrueAction=[!SetVariable Uptimer___Uptime_Show_Hours 1 "Droptop\DropdownBar"][!WriteKeyValue Variables Uptimer___Uptime_Show_Hours 1 "#UptimerWriteConfigPath#"]
IfFalseAction=[!SetVariable Uptimer___Uptime_Show_Hours 0 "Droptop\DropdownBar"][!WriteKeyValue Variables Uptimer___Uptime_Show_Hours 0 "#UptimerWriteConfigPath#"]
DynamicVariables=1
UpdateDivider=-1
Group=Uptimer___Condition
