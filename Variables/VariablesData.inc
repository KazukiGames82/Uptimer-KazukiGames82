[Variables]
; -------------------------------------------------------------------------------
; VariablesData.inc is used to store variables for your app that are not user-specific or user-configurable.
; Variables in this document should be used to control the app's general functionality.
; -------------------------------------------------------------------------------

MyAppVersion=24.0227

Uptimer___Update_Meters_TopBar=[!UpdateMeterGroup Uptimer-KazukiGames82 "Droptop\DropdownBar"][!UpdateMeterGroup CustomApp[#Uptimer-KazukiGames82]Sys "Droptop\DropdownBar"][!UpdateMeterGroup Buttons00 "Droptop\DropdownBar"][!UpdateMeterGroup TrayDivider "Droptop\DropdownBar"][!UpdateMeterGroup HL "Droptop\DropdownBar"][!UpdateMeterGroup NotificationBar "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]

Uptimer___Update_Meters_TopBar_000=
Uptimer___Update_Meters_TopBar_001=[!UpdateMeterGroup Uptimer-KazukiGames82 "Droptop\DropdownBar"][!UpdateMeterGroup CustomApp[#Uptimer-KazukiGames82]Sys "Droptop\DropdownBar"][!UpdateMeterGroup Buttons00 "Droptop\DropdownBar"][!UpdateMeterGroup TrayDivider "Droptop\DropdownBar"][!UpdateMeterGroup HL "Droptop\DropdownBar"][!UpdateMeterGroup NotificationBar "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]
Uptimer___Update_Meters_TopBar_010=[!UpdateMeterGroup Uptimer-KazukiGames82 "Droptop\DropdownBar"][!UpdateMeterGroup CustomApp[#Uptimer-KazukiGames82]Sys "Droptop\DropdownBar"][!UpdateMeterGroup Buttons00 "Droptop\DropdownBar"][!UpdateMeterGroup TrayDivider "Droptop\DropdownBar"][!UpdateMeterGroup HL "Droptop\DropdownBar"][!UpdateMeterGroup NotificationBar "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]
Uptimer___Update_Meters_TopBar_011=[!UpdateMeterGroup Uptimer-KazukiGames82 "Droptop\DropdownBar"][!UpdateMeterGroup CustomApp[#Uptimer-KazukiGames82]Sys "Droptop\DropdownBar"][!UpdateMeterGroup Buttons00 "Droptop\DropdownBar"][!UpdateMeterGroup TrayDivider "Droptop\DropdownBar"][!UpdateMeterGroup HL "Droptop\DropdownBar"][!UpdateMeterGroup NotificationBar "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]
Uptimer___Update_Meters_TopBar_100=[!UpdateMeterGroup Uptimer-KazukiGames82 "Droptop\DropdownBar"][!UpdateMeterGroup CustomApp[#Uptimer-KazukiGames82]Sys "Droptop\DropdownBar"][!UpdateMeterGroup Buttons00 "Droptop\DropdownBar"][!UpdateMeterGroup TrayDivider "Droptop\DropdownBar"][!UpdateMeterGroup HL "Droptop\DropdownBar"][!UpdateMeterGroup NotificationBar "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]
Uptimer___Update_Meters_TopBar_101=[!UpdateMeterGroup Uptimer-KazukiGames82 "Droptop\DropdownBar"][!UpdateMeterGroup CustomApp[#Uptimer-KazukiGames82]Sys "Droptop\DropdownBar"][!UpdateMeterGroup Buttons00 "Droptop\DropdownBar"][!UpdateMeterGroup TrayDivider "Droptop\DropdownBar"][!UpdateMeterGroup HL "Droptop\DropdownBar"][!UpdateMeterGroup NotificationBar "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]
Uptimer___Update_Meters_TopBar_110=[!UpdateMeterGroup Uptimer-KazukiGames82 "Droptop\DropdownBar"][!UpdateMeterGroup CustomApp[#Uptimer-KazukiGames82]Sys "Droptop\DropdownBar"][!UpdateMeterGroup Buttons00 "Droptop\DropdownBar"][!UpdateMeterGroup TrayDivider "Droptop\DropdownBar"][!UpdateMeterGroup HL "Droptop\DropdownBar"][!UpdateMeterGroup NotificationBar "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]
Uptimer___Update_Meters_TopBar_111=[!UpdateMeterGroup Uptimer-KazukiGames82 "Droptop\DropdownBar"][!UpdateMeterGroup CustomApp[#Uptimer-KazukiGames82]Sys "Droptop\DropdownBar"][!UpdateMeterGroup Buttons00 "Droptop\DropdownBar"][!UpdateMeterGroup TrayDivider "Droptop\DropdownBar"][!UpdateMeterGroup HL "Droptop\DropdownBar"][!UpdateMeterGroup NotificationBar "Droptop\DropdownBar"][!Redraw "Droptop\DropdownBar"]

Uptimer___Smart_Time_0="[#Uptimer___Measure_Days_[#*Uptimer___Show_Days*]][#Uptimer___Time_Divisor_[#*Uptimer___Show_Days*][#*Uptimer___Show_Hours*][#*Uptimer___Show_Minutes*]][#Uptimer___Measure_Hours_[#*Uptimer___Show_Hours*]][#Uptimer___Time_Divisor_[#*Uptimer___Show_Hours*][#*Uptimer___Show_Minutes*]][#Uptimer___Measure_Minutes_[#*Uptimer___Show_Minutes*]]"
Uptimer___Smart_Time_1="[#*Uptimer___Measure_Days_1*],[#*Uptimer___Measure_Hours_1*],[#*Uptimer___Measure_Minutes_1*]"

Uptimer___Measure_Login_0=
Uptimer___Measure_Login_1=([&Uptimer___Measure_Time:] - [&Uptimer___Measure_Login_Time:])

Uptimer___Text_Smart_0="[#*Uptimer___Uptime*]"
Uptimer___Text_Smart_1="[#Uptimer___Smart_Days_[#*Uptimer___Uptime_Show_Days*]][#Uptimer___Smart_Hours_[#*Uptimer___Uptime_Show_Hours*]][#*Uptimer___Uptime_Minutes*] #TimeMinShorthand#"

Uptimer___Smart_Days_0=
Uptimer___Smart_Days_1="[#*Uptimer___Uptime_Days*] #TimeDayShorthand#[#Uptimer___Time_Divisor_[#*Uptimer___Uptime_Show_Days*][#*Uptimer___Uptime_Show_Hours*]1]"

Uptimer___Smart_Hours_0=
Uptimer___Smart_Hours_1="[#*Uptimer___Uptime_Hours*] #TimeHrShorthand#[#Uptimer___Time_Divisor_[#*Uptimer___Uptime_Show_Hours*]1]"

Uptimer___Measure_OnUpdateAction_0=[!SetVariable Uptimer___Uptime "[*Uptimer___Measure_Uptime*]" "Droptop\DropdownBar"][!WriteKeyValue Variables Uptimer___Uptime "[*Uptimer___Measure_Uptime*]" "#UptimerWriteConfigPath#"][#*Uptimer___Update_Meters_TopBar*][!SetOption Uptimer___Measure_Uptime OnUpdateAction ""]
Uptimer___Measure_OnUpdateAction_1=[!UpdateMeasureGroup Uptimer___Calc][!SetVariable Uptimer___Uptime_Days "[*Uptimer___Measure_Calc_Days*]" "Droptop\DropdownBar"][!SetVariable Uptimer___Uptime_Hours "[*Uptimer___Measure_Calc_Hours*]" "Droptop\DropdownBar"][!SetVariable Uptimer___Uptime_Minutes "[*Uptimer___Measure_Calc_Minutes*]" "Droptop\DropdownBar"][!SetVariable Uptimer___Uptime_Days "[*Uptimer___Measure_Calc_Days*]" "Droptop\Other\BackgroundProcesses"][!SetVariable Uptimer___Uptime_Hours "[*Uptimer___Measure_Calc_Hours*]" "Droptop\Other\BackgroundProcesses"][!SetVariable Uptimer___Uptime_Minutes "[*Uptimer___Measure_Calc_Minutes*]" "Droptop\Other\BackgroundProcesses"][!WriteKeyValue Variables Uptimer___Uptime_Days "[*Uptimer___Measure_Calc_Days*]" "#UptimerWriteConfigPath#"][!WriteKeyValue Variables Uptimer___Uptime_Hours "[*Uptimer___Measure_Calc_Hours*]" "#UptimerWriteConfigPath#"][!WriteKeyValue Variables Uptimer___Uptime_Minutes "[*Uptimer___Measure_Calc_Minutes*]" "#UptimerWriteConfigPath#"][!UpdateMeasureGroup Uptimer___Condition][#*Uptimer___Update_Meters_TopBar*][!SetOption Uptimer___Measure_Uptime OnUpdateAction ""]

Uptimer___Measure_OnChangeAction_0=[!SetVariable Uptimer___Uptime "[*Uptimer___Measure_Uptime*]" "Droptop\DropdownBar"][!WriteKeyValue Variables Uptimer___Uptime "[*Uptimer___Measure_Uptime*]" "#UptimerWriteConfigPath#"][#Uptimer___Update_Meters_TopBar_[#*Uptimer___Show_Days*][#*Uptimer___Show_Hours*][#*Uptimer___Show_Minutes*]]
Uptimer___Measure_OnChangeAction_1=[!UpdateMeasureGroup Uptimer___Calc][!SetVariable Uptimer___Uptime_Days "[*Uptimer___Measure_Calc_Days*]" "Droptop\DropdownBar"][!SetVariable Uptimer___Uptime_Hours "[*Uptimer___Measure_Calc_Hours*]" "Droptop\DropdownBar"][!SetVariable Uptimer___Uptime_Minutes "[*Uptimer___Measure_Calc_Minutes*]" "Droptop\DropdownBar"][!SetVariable Uptimer___Uptime_Days "[*Uptimer___Measure_Calc_Days*]" "Droptop\Other\BackgroundProcesses"][!SetVariable Uptimer___Uptime_Hours "[*Uptimer___Measure_Calc_Hours*]" "Droptop\Other\BackgroundProcesses"][!SetVariable Uptimer___Uptime_Minutes "[*Uptimer___Measure_Calc_Minutes*]" "Droptop\Other\BackgroundProcesses"][!WriteKeyValue Variables Uptimer___Uptime_Days "[*Uptimer___Measure_Calc_Days*]" "#UptimerWriteConfigPath#"][!WriteKeyValue Variables Uptimer___Uptime_Hours "[*Uptimer___Measure_Calc_Hours*]" "#UptimerWriteConfigPath#"][!WriteKeyValue Variables Uptimer___Uptime_Minutes "[*Uptimer___Measure_Calc_Minutes*]" "#UptimerWriteConfigPath#"][!UpdateMeasureGroup Uptimer___Condition][#*Uptimer___Update_Meters_TopBar*]

Uptimer___Leading_Zeros_0=!i!
Uptimer___Leading_Zeros_1=!02i!

Uptimer___Measure_Days_0=
Uptimer___Measure_Days_1=%4[#Uptimer___Leading_Zeros_[#*Uptimer___Show_Leading_Zeros*]] #TimeDayShorthand#

Uptimer___Measure_Hours_0=
Uptimer___Measure_Hours_1=%3[#Uptimer___Leading_Zeros_[#*Uptimer___Show_Leading_Zeros*]] #TimeHrShorthand#

Uptimer___Measure_Minutes_0=
Uptimer___Measure_Minutes_1=%2[#Uptimer___Leading_Zeros_[#*Uptimer___Show_Leading_Zeros*]] #TimeMinShorthand#

Uptimer___Measure_Seconds_0=
Uptimer___Measure_Seconds_1=%1[#Uptimer___Leading_Zeros_[#*Uptimer___Show_Leading_Zeros*]] #TimeSecShorthand#

Uptimer___Time_Divisor_000=""
Uptimer___Time_Divisor_001=""
Uptimer___Time_Divisor_010=""
Uptimer___Time_Divisor_011=""
Uptimer___Time_Divisor_100=""
Uptimer___Time_Divisor_101=", "
Uptimer___Time_Divisor_110=", "
Uptimer___Time_Divisor_111=", "

Uptimer___Time_Divisor_00=""
Uptimer___Time_Divisor_01=""
Uptimer___Time_Divisor_10=""
Uptimer___Time_Divisor_11=", "

Uptimer___Login_Action=[!WriteKeyValue Variables Uptimer___Login_Time_10 "[#*Uptimer___Login_Time_9*]" "#UptimerWriteConfigPath#"][!WriteKeyValue Variables Uptimer___Login_Time_9 "[#*Uptimer___Login_Time_8*]" "#UptimerWriteConfigPath#"][!WriteKeyValue Variables Uptimer___Login_Time_8 "[#*Uptimer___Login_Time_7*]" "#UptimerWriteConfigPath#"][!WriteKeyValue Variables Uptimer___Login_Time_7 "[#*Uptimer___Login_Time_6*]" "#UptimerWriteConfigPath#"][!WriteKeyValue Variables Uptimer___Login_Time_6 "[#*Uptimer___Login_Time_5*]" "#UptimerWriteConfigPath#"][!WriteKeyValue Variables Uptimer___Login_Time_5 "[#*Uptimer___Login_Time_4*]" "#UptimerWriteConfigPath#"][!WriteKeyValue Variables Uptimer___Login_Time_4 "[#*Uptimer___Login_Time_3*]" "#UptimerWriteConfigPath#"][!WriteKeyValue Variables Uptimer___Login_Time_3 "[#*Uptimer___Login_Time_2*]" "#UptimerWriteConfigPath#"][!WriteKeyValue Variables Uptimer___Login_Time_2 "[#*Uptimer___Login_Time_1*]" "#UptimerWriteConfigPath#"][!WriteKeyValue Variables Uptimer___Login_Time_1 "[&Uptimer___Measure_Login_Time]" "#UptimerWriteConfigPath#"][!SetVariable Uptimer___Login_Time_10 "[#*Uptimer___Login_Time_9*]"][!SetVariable Uptimer___Login_Time_9 "[#*Uptimer___Login_Time_8*]"][!SetVariable Uptimer___Login_Time_8 "[#*Uptimer___Login_Time_7*]"][!SetVariable Uptimer___Login_Time_7 "[#*Uptimer___Login_Time_6*]"][!SetVariable Uptimer___Login_Time_6 "[#*Uptimer___Login_Time_5*]"][!SetVariable Uptimer___Login_Time_5 "[#*Uptimer___Login_Time_4*]"][!SetVariable Uptimer___Login_Time_4 "[#*Uptimer___Login_Time_3*]"][!SetVariable Uptimer___Login_Time_3 "[#*Uptimer___Login_Time_2*]"][!SetVariable Uptimer___Login_Time_2 "[#*Uptimer___Login_Time_1*]"][!SetVariable Uptimer___Login_Time_1 "[&Uptimer___Measure_Login_Time]"]
