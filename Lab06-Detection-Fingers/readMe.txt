การ Run โปรแกรม
######################  Run .exe ######################################

Note! ArduinoUNO Board ต้อง Upload โปรแกรมที่ใช้งานไว้แล้ว [file ==> Lab06_Detection_Fingers.ino]

	1. ต่อ LED ขา 8,9,10,11,12 < ========= > ArduinoUNO Board 
	2. ต่อ ArduinoUNO Board  < ============== >  USB [กำหนด ... Port COM5 ... ]เท่านั้น
	3. Run File ==> run_Vedio_FD.exe


การ Run โปรแกรม
######################  Run .py ######################################
1. ทำการตรวจสอบและติดตั้ง
		PS C:\rtech2\python_Project\For_Teach> 

			pip install Modulต่อไปนี้ใน Terminal Pycharm

				cvzone                1.6.1
				mediapipe             0.10.21
				pyFirmata             1.1.0
2.Upload :Lab06_Detection_Fingers.ino
3.Run file ต่อไปนี้ใน PycharmIDE
		- Finger01_MCU.py  		===> 	ต้องเปลียน com port ให้ตรงกับที่ต่อ ArduinoUNO
										comport='COM3' 
										
										led_1=board.get_pin('d:8:o') 	เป็น digital  :ขา 8   :กำหนดเป็น output
										led_2=board.get_pin('d:9:o') 	เป็น digital  :ขา 9   :กำหนดเป็น output
										led_3=board.get_pin('d:10:o') 	เป็น digital  :ขา 10  :กำหนดเป็น output
										led_4=board.get_pin('d:11:o')	เป็น digital  :ขา 11  :กำหนดเป็น output
										led_5=board.get_pin('d:12:o')	เป็น digital  :ขา 12  :กำหนดเป็น output
		
		
		
		
		- Finger02_vedioRun.py  ==>		สามารถเปลี่ยนชื่อได้ ตาม File ในตัวอย่างคือ Finger01_MCU.py
