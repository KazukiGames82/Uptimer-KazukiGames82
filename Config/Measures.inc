;----------------------------------------------------
; Measures
;----------------------------------------------------

[Measure_Login]
Measure=Plugin
Plugin=SysInfo
SysInfoType=USER_LOGONTIME

[Measure_Time]
Measure=Time

[Measure_Uptime]
Measure=Uptime

;----------------------------------------------------

[Measure_PC_Uptime]
Measure=Calc
Formula=([Measure_Time:]-[Measure_Uptime:])
DynamicVariables=1

[Measure_PC_Uptime_Date]
Measure=Time
TimeStamp=[Measure_PC_Uptime]
Format="[#Uptimer-KazukiGames82___Measure_Data_Format_[#Uptimer-KazukiGames82___Type_Format_Login_History]]"
DynamicVariables=1

[Measure_PC_Uptime_Time_Raw]
Measure=Uptime
Format=%4!i!,%3!i!,%2!i!
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

[Measure_PC_Uptime_Time]
Measure=Uptime
Format=[#Uptimer-KazukiGames82___Measure_TopBar_[#Uptimer-KazukiGames82___Measure_Show_Day]_[#Uptimer-KazukiGames82___Measure_Show_Hr]_[#Uptimer-KazukiGames82___Measure_Show_Min]]
DynamicVariables=1

;----------------------------------------------------

[Measure_User_Uptime_Date]
Measure=Time
TimeStamp=#Uptimer-KazukiGames82___Data_Login_History_Date_1#
Format="[#Uptimer-KazukiGames82___Measure_Data_Format_[#Uptimer-KazukiGames82___Type_Format_Login_History]]"
DynamicVariables=1

[Measure_User_Uptime]
Measure=Uptime
Format=%4!i! #TimeDay#, %3!i! #TimeHr#, %2!i! #TimeMin#
SecondsValue=([Measure_Time:]-[Measure_Login:])
DynamicVariables=1

;----------------------------------------------------

[Measure_Page]
Measure=Calc
Formula=(#CheckNumberOfPageBound#=0?1:#CheckNumberOfPageBound#)

;----------------------------------------------------

[Measure_User_History_1]
Measure=Time
TimeStamp=[#Measure_Data_Date_1_Page_[#NumberOfPage]]
Format="[#Uptimer-KazukiGames82___Measure_Data_Format_[#Uptimer-KazukiGames82___Type_Format_Login_History]]"
DynamicVariables=1
Group=History

[Measure_User_History_2]
Measure=Time
TimeStamp=[#Measure_Data_Date_2_Page_[#NumberOfPage]]
Format="[#Uptimer-KazukiGames82___Measure_Data_Format_[#Uptimer-KazukiGames82___Type_Format_Login_History]]"
DynamicVariables=1
Group=History

[Measure_User_History_3]
Measure=Time
TimeStamp=[#Measure_Data_Date_3_Page_[#NumberOfPage]]
Format="[#Uptimer-KazukiGames82___Measure_Data_Format_[#Uptimer-KazukiGames82___Type_Format_Login_History]]"
DynamicVariables=1
Group=History

[Measure_User_History_4]
Measure=Time
TimeStamp=[#Measure_Data_Date_4_Page_[#NumberOfPage]]
Format="[#Uptimer-KazukiGames82___Measure_Data_Format_[#Uptimer-KazukiGames82___Type_Format_Login_History]]"
DynamicVariables=1
Group=History

[Measure_User_History_5]
Measure=Time
TimeStamp=[#Measure_Data_Date_5_Page_[#NumberOfPage]]
Format="[#Uptimer-KazukiGames82___Measure_Data_Format_[#Uptimer-KazukiGames82___Type_Format_Login_History]]"
DynamicVariables=1
Group=History

[Measure_User_History_6]
Measure=Time
TimeStamp=[#Measure_Data_Date_6_Page_[#NumberOfPage]]
Format="[#Uptimer-KazukiGames82___Measure_Data_Format_[#Uptimer-KazukiGames82___Type_Format_Login_History]]"
DynamicVariables=1
Group=History

;----------------------------------------------------

[Measure_Actions]
Measure=Calc
Formula=(#CheckNumberOfPageBound#=0?1:#CheckNumberOfPageBound#)
IfCondition=(#NumberOfPage# <= 1)
IfTrueAction=[!DisableMouseAction 11 "*"][!DisableMouseAction 11Icon "*"][!DisableMouseAction 11Arrow "*"][!HideMeter HighlightBackground][!SetOption 11Icon ImageTint "#*DropdownFontColor1*#,(#*DropdownItemOpacity*#/(#*NumberOfPage*#=1?4:1))"][!SetOption 11Arrow FillColor "FillColor #*DropdownFontColor1*#,(#*DropdownItemOpacity*#/(#*NumberOfPage*#=1?4:1))"][!SetOption 11Arrow StrokeColor "StrokeColor #*DropdownFontColor1*#,(#*DropdownItemOpacity*#/(#*NumberOfPage*#=1?4:1))"]
IfFalseAction=[!EnableMouseAction 11 "*"][!EnableMouseAction 11Icon "*"][!EnableMouseAction 11Arrow "*"]
IfCondition2=(#NumberOfPage# >= Measure_Actions)
IfTrueAction2=[!DisableMouseAction 12 "*"][!DisableMouseAction 12Icon "*"][!DisableMouseAction 12Arrow "*"][!HideMeter HighlightBackground][!SetOption 12Icon ImageTint "#*DropdownFontColor1*#,(#*DropdownItemOpacity*#/(#*NumberOfPage*#=(#*CheckNumberOfPageBound*#=0?1:#*CheckNumberOfPageBound*#)?4:1))"][!SetOption 12Arrow FillColor "FillColor #*DropdownFontColor1*#,(#*DropdownItemOpacity*#/(#*NumberOfPage*#=(#*CheckNumberOfPageBound*#=0?1:#*CheckNumberOfPageBound*#)?4:1))"][!SetOption 12Arrow StrokeColor "StrokeColor#*DropdownFontColor1*#,(#*DropdownItemOpacity*#/(#*NumberOfPage*#=(#*CheckNumberOfPageBound*#=0?1:#*CheckNumberOfPageBound*#)?4:1))"]
IfFalseAction2=[!EnableMouseAction 12 "*"][!EnableMouseAction 12Icon "*"][!EnableMouseAction 12Arrow "*"]
IfConditionMode=1
DynamicVariables=1

;----------------------------------------------------
