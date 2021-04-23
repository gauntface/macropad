EESchema Schematic File Version 4
EELAYER 30 0
EELAYER END
$Descr A4 11693 8268
encoding utf-8
Sheet 1 1
Title "Macropad v2.0.1"
Date "2021-04-21"
Rev "v2.0.1"
Comp "Gauntface"
Comment1 ""
Comment2 ""
Comment3 ""
Comment4 ""
$EndDescr
$Comp
L Switch:SW_Push SW1
U 1 1 604E9B04
P 2100 4950
F 0 "SW1" H 2100 5235 50  0000 C CNN
F 1 "Key_1" H 2100 5144 50  0000 C CNN
F 2 "Switch_Keyboard_Kailh:SW_Hotswap_Kailh" H 2100 5150 50  0001 C CNN
F 3 "~" H 2100 5150 50  0001 C CNN
	1    2100 4950
	1    0    0    -1  
$EndComp
$Comp
L Switch:SW_Push SW3
U 1 1 604EAC65
P 3400 4950
F 0 "SW3" H 3400 5235 50  0000 C CNN
F 1 "Key_3" H 3400 5144 50  0000 C CNN
F 2 "Switch_Keyboard_Kailh:SW_Hotswap_Kailh" H 3400 5150 50  0001 C CNN
F 3 "~" H 3400 5150 50  0001 C CNN
	1    3400 4950
	1    0    0    -1  
$EndComp
$Comp
L Switch:SW_Push SW6
U 1 1 604EB0AB
P 3400 5850
F 0 "SW6" H 3400 6135 50  0000 C CNN
F 1 "Key_6" H 3400 6044 50  0000 C CNN
F 2 "Switch_Keyboard_Kailh:SW_Hotswap_Kailh" H 3400 6050 50  0001 C CNN
F 3 "~" H 3400 6050 50  0001 C CNN
	1    3400 5850
	1    0    0    -1  
$EndComp
$Comp
L Switch:SW_Push SW5
U 1 1 604EB7D8
P 2750 5850
F 0 "SW5" H 2750 6135 50  0000 C CNN
F 1 "Key_5" H 2750 6044 50  0000 C CNN
F 2 "Switch_Keyboard_Kailh:SW_Hotswap_Kailh" H 2750 6050 50  0001 C CNN
F 3 "~" H 2750 6050 50  0001 C CNN
	1    2750 5850
	1    0    0    -1  
$EndComp
$Comp
L Switch:SW_Push SW4
U 1 1 604EBC9D
P 2100 5850
F 0 "SW4" H 2100 6135 50  0000 C CNN
F 1 "Key_4" H 2100 6044 50  0000 C CNN
F 2 "Switch_Keyboard_Kailh:SW_Hotswap_Kailh" H 2100 6050 50  0001 C CNN
F 3 "~" H 2100 6050 50  0001 C CNN
	1    2100 5850
	1    0    0    -1  
$EndComp
$Comp
L Device:D D3
U 1 1 60502B62
P 3200 5250
F 0 "D3" V 3246 5170 50  0000 R CNN
F 1 "D" V 3155 5170 50  0000 R CNN
F 2 "Diode_THT:D_A-405_P7.62mm_Horizontal" H 3200 5250 50  0001 C CNN
F 3 "~" H 3200 5250 50  0001 C CNN
	1    3200 5250
	0    -1   -1   0   
$EndComp
$Comp
L Device:D D2
U 1 1 6050256B
P 2550 5250
F 0 "D2" V 2596 5170 50  0000 R CNN
F 1 "D" V 2505 5170 50  0000 R CNN
F 2 "Diode_THT:D_A-405_P7.62mm_Horizontal" H 2550 5250 50  0001 C CNN
F 3 "~" H 2550 5250 50  0001 C CNN
	1    2550 5250
	0    -1   -1   0   
$EndComp
$Comp
L Device:D D1
U 1 1 604FB85A
P 1900 5250
F 0 "D1" V 1946 5170 50  0000 R CNN
F 1 "D" V 1855 5170 50  0000 R CNN
F 2 "Diode_THT:D_A-405_P7.62mm_Horizontal" H 1900 5250 50  0001 C CNN
F 3 "~" H 1900 5250 50  0001 C CNN
	1    1900 5250
	0    -1   -1   0   
$EndComp
$Comp
L Device:D D4
U 1 1 6051FFAF
P 1900 6150
F 0 "D4" V 1946 6070 50  0000 R CNN
F 1 "D" V 1855 6070 50  0000 R CNN
F 2 "Diode_THT:D_A-405_P7.62mm_Horizontal" H 1900 6150 50  0001 C CNN
F 3 "~" H 1900 6150 50  0001 C CNN
	1    1900 6150
	0    -1   -1   0   
$EndComp
$Comp
L Device:D D5
U 1 1 605207A3
P 2550 6150
F 0 "D5" V 2596 6070 50  0000 R CNN
F 1 "D" V 2505 6070 50  0000 R CNN
F 2 "Diode_THT:D_A-405_P7.62mm_Horizontal" H 2550 6150 50  0001 C CNN
F 3 "~" H 2550 6150 50  0001 C CNN
	1    2550 6150
	0    -1   -1   0   
$EndComp
$Comp
L Device:D D6
U 1 1 60520D0A
P 3200 6150
F 0 "D6" V 3246 6070 50  0000 R CNN
F 1 "D" V 3155 6070 50  0000 R CNN
F 2 "Diode_THT:D_A-405_P7.62mm_Horizontal" H 3200 6150 50  0001 C CNN
F 3 "~" H 3200 6150 50  0001 C CNN
	1    3200 6150
	0    -1   -1   0   
$EndComp
Wire Wire Line
	1900 4950 1900 5100
Wire Wire Line
	2550 4950 2550 5100
Wire Wire Line
	3200 4950 3200 5100
Wire Wire Line
	1900 5400 2550 5400
Wire Wire Line
	2550 5400 3200 5400
Connection ~ 2550 5400
Wire Wire Line
	2300 4950 2300 5850
Wire Wire Line
	2950 4950 2950 5850
Wire Wire Line
	3600 4950 3600 5850
Wire Wire Line
	1900 5850 1900 6000
Wire Wire Line
	2550 5850 2550 6000
Wire Wire Line
	3200 5850 3200 6000
Wire Wire Line
	1900 6300 2550 6300
Connection ~ 2550 6300
Wire Wire Line
	2550 6300 3200 6300
$Comp
L Device:Rotary_Encoder_Switch SW7
U 1 1 6057EBC9
P 6000 5200
F 0 "SW7" H 6000 5567 50  0000 C CNN
F 1 "Rotary_Encoder_Switch" H 6000 5476 50  0000 C CNN
F 2 "Gauntface:ACZ11BRXE" H 5850 5360 50  0001 C CNN
F 3 "~" H 6000 5460 50  0001 C CNN
	1    6000 5200
	1    0    0    -1  
$EndComp
$Comp
L Connector:Conn_01x04_Male J1
U 1 1 60581994
P 3400 3250
F 0 "J1" H 3508 3531 50  0000 C CNN
F 1 "Conn_01x04_Male" H 3508 3440 50  0000 C CNN
F 2 "Gauntface:Screen_38x12mm_JMD0_91_a" H 3400 3250 50  0001 C CNN
F 3 "~" H 3400 3250 50  0001 C CNN
	1    3400 3250
	1    0    0    -1  
$EndComp
$Comp
L power:VCC #PWR02
U 1 1 605842C8
P 3950 3350
F 0 "#PWR02" H 3950 3200 50  0001 C CNN
F 1 "VCC" H 3965 3523 50  0000 C CNN
F 2 "" H 3950 3350 50  0001 C CNN
F 3 "" H 3950 3350 50  0001 C CNN
	1    3950 3350
	-1   0    0    1   
$EndComp
$Comp
L power:GND #PWR01
U 1 1 60584EA4
P 3750 3450
F 0 "#PWR01" H 3750 3200 50  0001 C CNN
F 1 "GND" H 3755 3277 50  0000 C CNN
F 2 "" H 3750 3450 50  0001 C CNN
F 3 "" H 3750 3450 50  0001 C CNN
	1    3750 3450
	1    0    0    -1  
$EndComp
Wire Wire Line
	3600 3350 3950 3350
Wire Wire Line
	3600 3450 3750 3450
$Comp
L power:GND #PWR03
U 1 1 60587943
P 6050 2850
F 0 "#PWR03" H 6050 2600 50  0001 C CNN
F 1 "GND" V 6055 2722 50  0000 R CNN
F 2 "" H 6050 2850 50  0001 C CNN
F 3 "" H 6050 2850 50  0001 C CNN
	1    6050 2850
	0    -1   -1   0   
$EndComp
Text GLabel 1650 5400 0    50   Input ~ 0
Row_0
Text GLabel 1650 6300 0    50   Input ~ 0
Row_1
Text GLabel 1650 7250 0    50   Input ~ 0
Row_Extra
Text GLabel 2300 4600 1    50   Input ~ 0
Col_0
Text GLabel 2950 4600 1    50   Input ~ 0
Col_1
Text GLabel 3600 4600 1    50   Input ~ 0
Col_2
$Comp
L Device:D D7
U 1 1 6073A593
P 2550 7000
F 0 "D7" V 2596 6920 50  0000 R CNN
F 1 "D" V 2505 6920 50  0000 R CNN
F 2 "Diode_THT:D_A-405_P7.62mm_Horizontal" H 2550 7000 50  0001 C CNN
F 3 "~" H 2550 7000 50  0001 C CNN
	1    2550 7000
	0    -1   -1   0   
$EndComp
$Comp
L Device:D D8
U 1 1 6073ACE0
P 3450 7250
F 0 "D8" V 3496 7170 50  0000 R CNN
F 1 "D" V 3405 7170 50  0000 R CNN
F 2 "Diode_THT:D_A-405_P7.62mm_Horizontal" H 3450 7250 50  0001 C CNN
F 3 "~" H 3450 7250 50  0001 C CNN
	1    3450 7250
	1    0    0    -1  
$EndComp
Text GLabel 2700 6800 1    50   Input ~ 0
Encoder_S1
Text GLabel 2850 6800 1    50   Input ~ 0
Encoder_S2
Wire Wire Line
	2300 4600 2300 4950
Connection ~ 2300 4950
Wire Wire Line
	2950 4600 2950 4950
Connection ~ 2950 4950
Wire Wire Line
	3600 4600 3600 4950
Connection ~ 3600 4950
Wire Wire Line
	1900 5400 1650 5400
Connection ~ 1900 5400
Wire Wire Line
	1650 6300 1900 6300
Connection ~ 1900 6300
Text GLabel 6050 3550 2    50   Input ~ 0
Row_Extra
Text GLabel 6050 3750 2    50   Input ~ 0
Col_0
Text GLabel 6050 3850 2    50   Input ~ 0
Col_1
Text GLabel 6050 3650 2    50   Input ~ 0
Col_2
Text GLabel 6300 5100 2    50   Input ~ 0
Encoder_S1
Text GLabel 6300 5300 2    50   Input ~ 0
Encoder_S2
$Comp
L power:GND #PWR04
U 1 1 60775D40
P 4650 2950
F 0 "#PWR04" H 4650 2700 50  0001 C CNN
F 1 "GND" V 4655 2822 50  0000 R CNN
F 2 "" H 4650 2950 50  0001 C CNN
F 3 "" H 4650 2950 50  0001 C CNN
	1    4650 2950
	0    1    1    0   
$EndComp
$Comp
L power:GND #PWR05
U 1 1 60777E04
P 4650 3050
F 0 "#PWR05" H 4650 2800 50  0001 C CNN
F 1 "GND" V 4655 2922 50  0000 R CNN
F 2 "" H 4650 3050 50  0001 C CNN
F 3 "" H 4650 3050 50  0001 C CNN
	1    4650 3050
	0    1    1    0   
$EndComp
NoConn ~ 4650 2750
NoConn ~ 4650 2850
NoConn ~ 6050 2750
$Comp
L power:VCC #PWR06
U 1 1 6077A18F
P 6050 3050
F 0 "#PWR06" H 6050 2900 50  0001 C CNN
F 1 "VCC" V 6065 3178 50  0000 L CNN
F 2 "" H 6050 3050 50  0001 C CNN
F 3 "" H 6050 3050 50  0001 C CNN
	1    6050 3050
	0    1    1    0   
$EndComp
$Comp
L macropad-v2_0_1-rescue:ProMicro-promicro U1
U 1 1 6077E1C9
P 5350 3500
F 0 "U1" H 5350 4537 60  0000 C CNN
F 1 "ProMicro" H 5350 4431 60  0000 C CNN
F 2 "promicro:ProMicro" H 5450 2450 60  0001 C CNN
F 3 "" H 5450 2450 60  0000 C CNN
	1    5350 3500
	1    0    0    -1  
$EndComp
$Comp
L power:GND #PWR07
U 1 1 60785B0E
P 5700 5200
F 0 "#PWR07" H 5700 4950 50  0001 C CNN
F 1 "GND" V 5705 5072 50  0000 R CNN
F 2 "" H 5700 5200 50  0001 C CNN
F 3 "" H 5700 5200 50  0001 C CNN
	1    5700 5200
	0    1    1    0   
$EndComp
NoConn ~ 6050 3450
NoConn ~ 6050 3350
NoConn ~ 6050 3250
NoConn ~ 6050 3150
Wire Wire Line
	6050 2950 6500 2950
$Comp
L power:GND #PWR08
U 1 1 6078F804
P 7300 2950
F 0 "#PWR08" H 7300 2700 50  0001 C CNN
F 1 "GND" V 7305 2822 50  0000 R CNN
F 2 "" H 7300 2950 50  0001 C CNN
F 3 "" H 7300 2950 50  0001 C CNN
	1    7300 2950
	0    -1   -1   0   
$EndComp
$Comp
L Switch:SW_Push SW2
U 1 1 604EA70F
P 2750 4950
F 0 "SW2" H 2750 5250 50  0000 C CNN
F 1 "Key_2" H 2750 5144 50  0000 C CNN
F 2 "Switch_Keyboard_Kailh:SW_Hotswap_Kailh" H 2750 5150 50  0001 C CNN
F 3 "~" H 2750 5150 50  0001 C CNN
	1    2750 4950
	1    0    0    -1  
$EndComp
$Comp
L macropad-v2_0_1-rescue:1825910-6-1825910-6 SW9
U 1 1 60729392
P 6900 2950
F 0 "SW9" H 6900 3315 50  0000 C CNN
F 1 "Reset_Btn" H 6900 3224 50  0000 C CNN
F 2 "Button_1825910-6:SW_1825910-6-4" H 6900 2950 50  0001 L BNN
F 3 "" H 6900 2950 50  0001 L BNN
F 4 "Compliant" H 6900 2950 50  0001 L BNN "EU_RoHS_Compliance"
F 5 "Single Pole - Single Throw" H 6900 2950 50  0001 L BNN "Configuration_Pole-Throw"
F 6 "50 mA" H 6900 2950 50  0001 L BNN "Contact_Current_Rating"
F 7 "1825910-6" H 6900 2950 50  0001 L BNN "Comment"
	1    6900 2950
	1    0    0    -1  
$EndComp
Wire Wire Line
	6500 3050 6500 2950
Connection ~ 6500 2950
Wire Wire Line
	6500 2950 6500 2850
Wire Wire Line
	7300 2850 7300 2950
Connection ~ 7300 2950
Wire Wire Line
	7300 2950 7300 3050
$Comp
L macropad-v2_0_1-rescue:1825910-6-1825910-6 SW8
U 1 1 6072FEF7
P 3600 6750
F 0 "SW8" V 3554 6978 50  0000 L CNN
F 1 "Layer_Btn" V 3645 6978 50  0000 L CNN
F 2 "Button_1825910-6:SW_1825910-6-4" H 3600 6750 50  0001 L BNN
F 3 "" H 3600 6750 50  0001 L BNN
F 4 "Compliant" H 3600 6750 50  0001 L BNN "EU_RoHS_Compliance"
F 5 "Single Pole - Single Throw" H 3600 6750 50  0001 L BNN "Configuration_Pole-Throw"
F 6 "50 mA" H 3600 6750 50  0001 L BNN "Contact_Current_Rating"
F 7 "1825910-6" H 3600 6750 50  0001 L BNN "Comment"
	1    3600 6750
	0    1    1    0   
$EndComp
Wire Wire Line
	3600 5850 3600 6350
Wire Wire Line
	3600 6350 3500 6350
Connection ~ 3600 5850
Wire Wire Line
	3700 6350 3600 6350
Connection ~ 3600 6350
Wire Wire Line
	3500 7150 3600 7150
Wire Wire Line
	3600 7150 3600 7250
Connection ~ 3600 7150
Wire Wire Line
	3600 7150 3700 7150
Wire Wire Line
	2700 6800 2550 6800
Wire Wire Line
	2550 6800 2550 6850
Wire Wire Line
	2850 6800 2950 6800
Wire Wire Line
	2950 6800 2950 5850
Connection ~ 2950 5850
Wire Wire Line
	3300 7250 2550 7250
Wire Wire Line
	2550 7150 2550 7250
Connection ~ 2550 7250
Wire Wire Line
	2550 7250 1650 7250
Wire Wire Line
	3600 3150 4650 3150
Wire Wire Line
	3600 3250 4650 3250
Text GLabel 5700 5100 0    50   Input ~ 0
Encoder_A
Text GLabel 5700 5300 0    50   Input ~ 0
Encoder_B
Text GLabel 4650 3450 0    50   Input ~ 0
Encoder_A
Text GLabel 4650 3550 0    50   Input ~ 0
Encoder_B
Text GLabel 4650 3850 0    50   Input ~ 0
Row_1
Text GLabel 4650 3750 0    50   Input ~ 0
Row_0
NoConn ~ 4650 3650
NoConn ~ 4650 3350
$EndSCHEMATC
