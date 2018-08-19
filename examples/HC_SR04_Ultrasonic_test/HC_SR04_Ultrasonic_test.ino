/*
   EMX robot with BRC motor shield HC-SR04 sensor test
   Author eng.A.Anchev
   Byala, 2018
*/
#include <Ultrasonic.h>
Ultrasonic ultrasonic(7, 8);

// ================== SETUP ======================
void setup()
{
  Serial.begin(9600);
}

// ================= LOOP =======================
void loop()
{
  int distance = ultrasonic.distanceRead();
  Serial.println(distance);
  delay(10);

}
