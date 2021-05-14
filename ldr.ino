
int in1 = 8;
int in2 = 9;
int in3 = 10;
int in4 = 11;
char value;

void setup()
{
  pinMode(in1, OUTPUT);  // Digital pin 10 set as output Pin
  pinMode(in2, OUTPUT);  // Digital pin 11 set as output Pin
  pinMode(in3, OUTPUT);  // Digital pin 12 set as output Pin
  pinMode(in4, OUTPUT);  // Digital pin 13 set as output Pin
  Serial.begin(9600);
}

void loop()
{
  int val = 0;

  while (Serial.available() > 0)
  {
    
    val = Serial.read()
    value = Serial.read();
    

  }

  if ( value == 'F') // Forward
  {
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    delay(val * 1000);
  }
  else if (value == 'B') // Backward
  {
    digitalWrite(in1, LOW);
    digitalWrite(in2, HIGH);
    digitalWrite(in3, LOW);
    digitalWrite(in4, HIGH);
    delay(val * 1000);
  }


  else if (value == 'S') //Stop
  {
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);

  }


  else if (value == 'L') //Left
  {
    digitalWrite(in1, LOW);
    digitalWrite(in2, LOW);
    digitalWrite(in3, HIGH);
    digitalWrite(in4, LOW);
    delay(val * 1000);
  }

  else if (value == 'R') //Right
  {
    digitalWrite(in1, HIGH);
    digitalWrite(in2, LOW);
    digitalWrite(in3, LOW);
    digitalWrite(in4, LOW);
    delay(val * 1000);
  }

}
