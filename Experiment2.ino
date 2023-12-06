// C++ code
//
#define red_pin 13
#define yellow_pin 12
#define green_pin 11
void setup()
{
  pinMode(red_pin, OUTPUT);
  pinMode(yellow_pin, OUTPUT);
  pinMode(green_pin, OUTPUT);
}

void loop()
{
  digitalWrite(green_pin, HIGH);
  digitalWrite(red_pin, LOW);
  digitalWrite(yellow_pin, LOW);
  delay(50); // Wait for 1000 millisecond(s)
  digitalWrite(red_pin, HIGH);
  digitalWrite(green_pin, LOW);
  digitalWrite(yellow_pin, LOW);
  delay(50); // Wait for 1000 millisecond(s)
  digitalWrite(yellow_pin, HIGH);
  digitalWrite(red_pin, LOW);
  digitalWrite(green_pin, LOW);
  delay(50); // Wait for 1000 millisecond(s)
}