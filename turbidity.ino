void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600); //initialize serial communications at Baud rate of 9600 bps
}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue = analogRead(A0);// read the input on analog pin 0:
  //int outputValue = map(sensorValue,0,1023,255); //alternative scale down technique
  float voltage = sensorValue * (5.0 / 1024.0); // Convert the analog reading (which goes from 0 - 1023) to a voltage (0 - 5V):
  //analogWrite(9, voltage);
  
  //print results to serial monitor
  Serial.print("sensor = ");
  Serial.print(sensorValue);
  Serial.print("\t output = ");
  Serial.println(voltage); // print out the value you read:
  
  delay(500); //originally 500 ms
}
