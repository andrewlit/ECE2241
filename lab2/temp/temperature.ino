
//This sketch is to read the temperature with an LM35 sensor

#define tempSensor A0
int tempVal = 0;
float convertedTemp = 0;

void setup()
{
	Serial.begin(9600);
	pinMode ( tempSensor, INPUT);
}

void loop()
{
	tempVal = analogRead(tempSensor);
	convertedTemp = 500.0/1023.0*tempVal;
	Serial.print ("Temperature: ");
	Serial.print (convertedTemp);
	Serial.println("C");
	delay(500);
}
