#include "system.h"
#include "memory.h"

void setup() {
  Serial.begin(115200);
  start_setup();
  menu();
  myplan(plan);
//  while (1) {
//    readADC();
//    for (int a = 0; a < 14; a++) {
//      Serial.print(adc[a]);
//      Serial.print("\t");
//    }
//    Serial.println();
//  }
}

void loop() {
  runn(
    find_error[ctr],
    warna_garis[ctr],
    kp_counter[ctr],
    kd_counter[ctr],
    speed_1[ctr],
    timer_normal[ctr],
    speed_2[ctr],
    trig_sensor[ctr],
    trig_mode[ctr],
    break_reading[ctr],
    mode_move[ctr],
    speed_left[ctr],
    speed_right[ctr],
    delay_move[ctr],
    warna_break[ctr],
    delay_break[ctr],
    dbreak_mode[ctr]
  );
  //  if (ctr >= stop_ct) {
  //    unsigned long lst;
  //    //    lcd.clrScr();
  //    //    lcd.print("Finish", CENTER, 0);
  //    //    float timeF = (((float) millis() - (float)startTimer) + (float)startTimerPlus) / 1000.00;
  //    //    lcd.printNumF(timeF, 2, CENTER, 16);
  //    //    lcd.update();
  //    //    digitalWrite(SL, HIGH);
  //    //    digitalWrite(SR, HIGH);
  //    while (1) {
  //      digitalWrite(SL, LOW);
  //      digitalWrite(SR, LOW);
  //      motor(0, 0);
  //      if (millis() - lst >= 100) {
  //        lst = millis();
  //        digitalWrite(led0, !digitalRead(led0));
  //      }
  //    }
  //  }
  ctr++;
}
