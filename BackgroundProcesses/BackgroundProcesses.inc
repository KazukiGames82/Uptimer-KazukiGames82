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

[Uptimer-KazukiGames82_Measure_Time]
Measure=Time
OnChangeAction=[!UpdateMeasureGroup Uptimer-KazukiGames82]
UpdateDivider=60

[Uptimer-KazukiGames82_Measure_Login]
Measure=Plugin
Plugin=SysInfo
SysInfoType=USER_LOGONTIME
IfCondition=([Uptimer-KazukiGames82_Measure_Login] <> [#Uptimer-KazukiGames82___Data_Login_History_Date_1])
IfTrueAction=[#Uptimer-KazukiGames82___Action_Login][#Uptimer-KazukiGames82___Action_Login_Date]
Substitute="":"[#Uptimer-KazukiGames82___Data_Login_History_Date_1]"
DynamicVariables=1
UpdateDivider=-1

;----------------------------------------------------------------------

[Uptimer-KazukiGames82_Measure_Condition_Uptime]
Measure=Uptime
Format=%4!i!,%3!i!,%2!i! 
SecondsValue=([Uptimer-KazukiGames82_Measure_Time:]-[Uptimer-KazukiGames82_Measure_Login:])
OnUpdateAction=[!UpdateMeasureGroup Uptimer-KazukiGames82_Conditions][!WriteKeyValue Variables Uptimer-KazukiGames82___Text_Uptime "[&Uptimer-KazukiGames82_Measure_TopBar]" "#Uptimer-KazukiGames82___MyVariablesLoc#"][!SetVariable Uptimer-KazukiGames82___Text_Uptime "[&Uptimer-KazukiGames82_Measure_TopBar]" "Droptop\DropdownBar"][#Uptimer-KazukiGames82___Update_[#Uptimer-KazukiGames82___Show_Text]][!SetOption Uptimer-KazukiGames82_Measure_Condition_Uptime OnUpdateAction ""]
OnChangeAction=[!UpdateMeasureGroup Uptimer-KazukiGames82_Conditions][!WriteKeyValue Variables Uptimer-KazukiGames82___Text_Uptime "[&Uptimer-KazukiGames82_Measure_TopBar]" "#Uptimer-KazukiGames82___MyVariablesLoc#"][!SetVariable Uptimer-KazukiGames82___Text_Uptime "[&Uptimer-KazukiGames82_Measure_TopBar]" "Droptop\DropdownBar"][#Uptimer-KazukiGames82___Update_[#Uptimer-KazukiGames82___Show_Text]]
IfMatch=^0
IfMatchAction=[!SetVariable "Uptimer-KazukiGames82___Measure_Show_Day" "0"]
IfNotMatchAction=[!SetVariable "Uptimer-KazukiGames82___Measure_Show_Day" "1"]
IfMatch2=.*,0,
IfMatchAction2=[!SetVariable "Uptimer-KazukiGames82___Measure_Show_Hr" "0"]
IfNotMatchAction2=[!SetVariable "Uptimer-KazukiGames82___Measure_Show_Hr" "1"]
IfMatch3=.*,.*,0
IfMatchAction3=[!SetVariable "Uptimer-KazukiGames82___Measure_Show_Min" "0"]
IfNotMatchAction3=[!SetVariable "Uptimer-KazukiGames82___Measure_Show_Min" "1"]
DynamicVariables=1
UpdateDivider=-1
Group=Uptimer-KazukiGames82

[Uptimer-KazukiGames82_Measure_TopBar]
Measure=Uptime
Format=[#Uptimer-KazukiGames82___Measure_TopBar_[#Uptimer-KazukiGames82___Measure_Show_Day]_[#Uptimer-KazukiGames82___Measure_Show_Hr]_[#Uptimer-KazukiGames82___Measure_Show_Min]]
SecondsValue=([Uptimer-KazukiGames82_Measure_Time:]-[Uptimer-KazukiGames82_Measure_Login:])
DynamicVariables=1
UpdateDivider=-1
Group=Uptimer-KazukiGames82_Conditions
