//This is a simple sketch to blink the onboard LED
//by Andrew Lit, 2018, for ECE2241b

int blinkTime = 250;
//Set things up
void setup()
{
	pinMode(13, OUTPUT);
}

//Loop to blink
void loop()
{
	digitalWrite(13, HIGH);
	delay(blinkTime);
	digitalWrite(13, LOW);
	delay(blinkTime);
}
