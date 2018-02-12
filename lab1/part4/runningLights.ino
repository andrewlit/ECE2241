//This is a sketch to have 8 "running lights"

//Array of LED pins
int leds[] = {6, 7, 8, 9, 10, 11, 12, 13};

//Initialize the pins
void setup()
{
	//Iterate over the leds and set pinmodes
	for (int x = 0; x < 8; x ++)
		pinMode(leds[x], OUTPUT);
}

//Do the "running"

void loop()
{
	//Iterate over all the LEDs and toggle them on and off
	for (int x = 0; x < 8; x ++)
	{
		digitalWrite(leds[x], HIGH);
		delay(100);
		digitalWrite(leds[x], LOW);
	}
	for (int x = 7; x > 0; x --)
	{
		digitalWrite(leds[x], HIGH);
		delay(100);
		digitalWrite(leds[x], LOW);
	}
}
