//This is a simple sketch to blink the onboard LED
//by Andrew Lit, 2018, for ECE2241b

//Set things up
void setup()
{
	pinMode(13, OUTPUT);
}

//Loop to blink
void loop()
{
	digitalWrite(13, HIGH);
	delay(1000);
	digitalWrite(13, LOW);
	delay(1000);
}
