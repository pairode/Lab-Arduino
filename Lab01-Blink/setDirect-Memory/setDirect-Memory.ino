#define MITCHB *((volatile byte*) 0x25)
#define MITCHDIRB *((volatile byte*) 0x24)

#define _pinMode 0x20    //0x20 = 32 = Pin13 ArduinoUNO 
#define _pinOn 32//0x20 = 32 = Pin13 ArduinoUNO 
#define _pinOff 0x0 // 0x00 = 0
#define _waitOn 1000000
#define _waitOff 800000

void setup() {
	MITCHDIRB = _pinMode;
}

void loop() {

	MITCHB = _pinOn;

		for (long i = 0; i < _waitOn; i++) { MITCHB = _pinOn; }

	MITCHB = _pinOff;
		for (long i = 0; i < _waitOff; i++) { MITCHB = _pinOff; }
}