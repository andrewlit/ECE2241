//This is a more advanced sketch, to deal with multiple LEDs 
//by Andrew Lit, 2018, for ECE2241b

//Set things up
const int led1=7;
const int led2 = 13;
void setup()
{
	pinMode(led1, OUTPUT);
	pinMode(led2, OUTPUT);
}


//This will blink only the LED on pin 7
void blink7()
{
	digitalWrite(led1, HIGH);
	delay(1000);
	digitalWrite(led1, LOW);
	delay(1000);
}

//This will blink the two LEDs in phase with each other
void blinkInPhase()
{

	digitalWrite(led1, HIGH);
	digitalWrite(led2, HIGH);
	delay(1000);
	digitalWrite(led1, LOW);
	digitalWrite(led2, LOW);
	delay(1000);
}

//This will blink the two LEDs out of phase with each other
void blinkOutPhase()
{

	digitalWrite(led1, HIGH);
	digitalWrite(led2, LOW);
	delay(1000);
	digitalWrite(led1, LOW);
	digitalWrite(led2, HIGH);
	delay(1000);
}

//Loop to blink
void loop()
{
//	blink7();
	//blinkInPhase();
	blinkOutPhase();
}

