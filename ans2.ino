// C++ code
//
int sensorValue =0;
int ledDimming =0;
int pwmPin=9;


void setup()
{
  pinMode(A0, INPUT);
  Serial.begin(9600);
  
  pinMode(pwmPin, OUTPUT);
}
                                  
void loop()
{
  sensorValue = analogRead(A0);
  Serial.print("PhotoResistor read = ");
  Serial.println(sensorValue);
  
  ledDimming =map(sensorValue,700,930,0,255);
  if (ledDimming<0) ledDimming=0;
  
  analogWrite(pwmPin,ledDimming);
  
  delay(100); // Wait for 1000 millisecond(s)
}