//This sketch is to read the position of a potentiometer

#define potPin A0
int potVal = 0;
float angle = 0;

void setup()
{
	Serial.begin(9600);
	pinMode ( potPin, INPUT);
}

void loop()
{
	potVal = analogRead(potPin);
	angle = potVal/1023.0 * 250.0;
	Serial.println (angle);
	delay(100);
}

