
/*
// 924 bytes (2%), 9 bytes of dynamic memory.
// 646 bytes (2%), 9 bytes of dynamic memory.

	// the setup function runs once when you press reset or power the board
	void setup( ){
	// initialize digital pin LED_BUILTIN as an output.
		DDRB = 0xff;
	}

	// the loop function runs over and over again forever
	void loop() {
		PORTB = 0xff;
		delay(1000);
		PORTB = 0x0;
		delay(1000);
	}

*/

/*
	int main() {
	// initialize digital pin LED_BUILTIN as an output.
		DDRB = 0xff; 
		while (true) {
		PINB = 0xff;
			for (long i = 0; i < 500000; i++) {
			asm("");
			}
		PORTB = 0x0;
			for (long i = 0; i < 5000000; i++) {
			asm("");
			}
	}
}


*/

/*
	// Final blink pin13 with C

	// 924 bytes (2%), 9 bytes of dynamic memory.
	// 646 bytes (2%), 9 bytes of dynamic memory.
	// 498 bytes (1%), 9 bytes of dynamic memory.
	// 142 bytes (0%), 0 bytes of dynamic memory.

	// Final: 158 bytes!

	int main() {
	// initialize digital pin LED_BUILTIN as an output.
		DDRB = 0xff;
		while (true) {
		PINB = 0xff;
			for (long i = 0; i < 500000; i++) {
			asm("");
			}
		}
	}
*/