const int Sensor1 = 2;
const int Sensor2 = 3;
const int led1 = 8;
const int led2 = 7;
void setup()
{
pinMode(Sensor1, INPUT);
pinMode(Sensor2, INPUT);
pinMode(led1, OUTPUT);
pinMode(led2, OUTPUT);
Serial.begin(9600);
attachInterrupt(digitalPinToInterrupt(Sensor1), SensorInterupt1,
CHANGE);
attachInterrupt(digitalPinToInterrupt(Sensor2), SensorInterupt2,
CHANGE);
}
void loop()
{
Serial.println("Hello World!");
delay(1000);
}
void SensorInterupt1()
{
digitalWrite(led1, HIGH);
Serial.println("Motion detected on sensor 1");
delay(1000);
digitalWrite(led1, LOW);
}
void SensorInterupt2()
{
digitalWrite(led2, HIGH);
Serial.println("Motion detected on sensor 2");
delay(1000);
digitalWrite(led2, LOW);
}
