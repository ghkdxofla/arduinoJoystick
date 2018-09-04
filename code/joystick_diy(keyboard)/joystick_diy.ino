const int button_start = 3;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(button_start, INPUT_PULLUP);

}

void loop() {
  // put your main code here, to run repeatedly:
  if (digitalRead(button_start) == LOW)
    Serial.println("button!");
  delay(10);

}

