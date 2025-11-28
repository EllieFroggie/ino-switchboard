


int PREVIOUS0 = 0;
int sensor = 0;
int diff = 0;

void setup() {
  // put your setup code here, to run once

  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:

  sensor = analogRead(A0);

  if (sensor != PREVIOUS0) {

    diff = abs(PREVIOUS0 - sensor);
    

    if (diff > 3) {
      Serial.println(sensor);
      PREVIOUS0 = sensor;
      delay(50);
    }
  }

}

