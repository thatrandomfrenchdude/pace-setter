#define mile_ft 5280    // 5280 ft = 1 mi
#define min_ms 60    // 60 s = 1 min

// http://www.run2r.com/Technical+linking-bpm-to-running-speed-usa.aspx

int buzzPin = 13; //2 for sound
float pace[7] = {6, 8, 9.4, 11, 12, 14, 16};
int bpm[7] = {171, 166, 163, 160, 156, 153, 150};
float wait;


//to determine stride
//  1. run for 15-20 mins
//  2. for a min during the run, count your steps (several times to get an average)
//  3. average determines bpm, distance covered determines pace for that bpm

void setup() {
  pinMode(buzzPin, OUTPUT);
  wait = (60.0/bpm[1])*1000; // 8 min mile
  Serial.begin(9600);
  Serial.println(wait);
  Serial.println((int)wait);
}

void loop() {
  digitalWrite(buzzPin, HIGH);
  delay(100);
  digitalWrite(buzzPin, LOW);
  delay(wait);
}
