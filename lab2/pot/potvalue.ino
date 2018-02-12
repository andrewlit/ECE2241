//This sketch is to read the position of a potentiometer

#define potPin A0
int potVal = 0;
float angle = 0;
float voltage = 0;

void setup()
{
	Serial.begin(9600);
	pinMode ( potPin, INPUT);
}

void loop()
{
	potVal = analogRead(potPin);
	angle = potVal/1023.0 * 250.0;
	voltage = potVal/1023.0 * 5.0;
	Serial.print (voltage);
	Serial.print ("V: ");
	Serial.print (angle);
	Serial.println (" degrees");
	delay(500);
}

