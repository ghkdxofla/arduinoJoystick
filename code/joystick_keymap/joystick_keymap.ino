#include <Keyboard.h>

// button number definition
const int button_1 = 7;
const int button_2 = 6;
const int button_3 = 5;
const int button_4 = 4;
const int button_5 = 3;
const int button_6 = 2;
const int button_7 = 8;
const int button_8 = 9;

// lever number definition
// use analog to digital
const int lever_left = A0;
const int lever_right = A1;
const int lever_up = A3;
const int lever_down = A2;

// variable for saving switch statement
int btn_1_old, btn_1_new;
int btn_2_old, btn_2_new;
int btn_3_old, btn_3_new;
int btn_4_old, btn_4_new;
int btn_5_old, btn_5_new;
int btn_6_old, btn_6_new;
int btn_7_old, btn_7_new;
int btn_8_old, btn_8_new;

int lev_l_old, lev_l_new;
int lev_r_old, lev_r_new;
int lev_u_old, lev_u_new;
int lev_d_old, lev_d_new;

void setup() {
  // put your setup code here, to run once:
//  Serial.begin(9600);

  // button setup
  pinMode(button_1, INPUT_PULLUP);
  pinMode(button_2, INPUT_PULLUP);
  pinMode(button_3, INPUT_PULLUP);
  pinMode(button_4, INPUT_PULLUP);
  pinMode(button_5, INPUT_PULLUP);
  pinMode(button_6, INPUT_PULLUP);
  pinMode(button_7, INPUT_PULLUP);
  pinMode(button_8, INPUT_PULLUP);

  // lever setup
  pinMode(lever_left, INPUT_PULLUP);
  pinMode(lever_right, INPUT_PULLUP);
  pinMode(lever_up, INPUT_PULLUP);
  pinMode(lever_down, INPUT_PULLUP);

  Keyboard.begin();

}

void loop() {
  // put your main code here, to run repeatedly:
  btn_1_new = digitalRead(button_1);
  btn_2_new = digitalRead(button_2);
  btn_3_new = digitalRead(button_3);
  btn_4_new = digitalRead(button_4);
  btn_5_new = digitalRead(button_5);
  btn_6_new = digitalRead(button_6);
  btn_7_new = digitalRead(button_7);
  btn_8_new = digitalRead(button_8);

  lev_l_new = digitalRead(lever_left);
  lev_r_new = digitalRead(lever_right);
  lev_u_new = digitalRead(lever_up);
  lev_d_new = digitalRead(lever_down);

  if(btn_1_old != btn_1_new){
    if(btn_1_new == LOW)
      Keyboard.press('u');
    else
      Keyboard.release('u');
    delay(1);
  }
  if(btn_2_old != btn_2_new){
    if(btn_2_new == LOW)
      Keyboard.press('i');
    else
      Keyboard.release('i');
    delay(1);
  }
  if(btn_3_old != btn_3_new){
    if(btn_3_new == LOW)
      Keyboard.press('o');
    else
      Keyboard.release('o');
    delay(1);
  }
  if(btn_4_old != btn_4_new){
    if(btn_4_new == LOW)
      Keyboard.press('j');
    else
      Keyboard.release('j');
    delay(1);
  }
  if(btn_5_old != btn_5_new){
    if(btn_5_new == LOW)
      Keyboard.press('k');
    else
      Keyboard.release('k');
    delay(1);
  }
  if(btn_6_old != btn_6_new){
    if(btn_6_new == LOW)
      Keyboard.press('p');
    else
      Keyboard.release('p');
    delay(1);
  }
  if(btn_7_old != btn_7_new){
    if(btn_7_new == LOW)
      Keyboard.press('v');
    else
      Keyboard.release('v');
    delay(1);
  }
  if(btn_8_old != btn_8_new){
    if(btn_8_new == LOW)
      Keyboard.press('b');
    else
      Keyboard.release('b');
    delay(1);
  }

  if(lev_l_old != lev_l_new){
    if(lev_l_new == LOW)
      Keyboard.press('a');
    else
      Keyboard.release('a');
    delay(3);
  }  
  if(lev_r_old != lev_r_new){
    if(lev_r_new == LOW)
      Keyboard.press('d');
    else
      Keyboard.release('d');
    delay(3);
  }
  if(lev_u_old != lev_u_new){
    if(lev_u_new == LOW)
      Keyboard.press('w');
    else
      Keyboard.release('w');
    delay(3);
  }
  if(lev_d_old != lev_d_new){
    if(lev_d_new == LOW)
      Keyboard.press('s');
    else
      Keyboard.release('s');
    delay(3);
  }
  
  // renew button statement
  btn_1_old = btn_1_new;
  btn_2_old = btn_2_new;
  btn_3_old = btn_3_new;
  btn_4_old = btn_4_new;
  btn_5_old = btn_5_new;
  btn_6_old = btn_6_new;
  btn_7_old = btn_7_new;
  btn_8_old = btn_8_new;
  
  lev_l_old = lev_l_new;
  lev_r_old = lev_r_new;
  lev_u_old = lev_u_new;
  lev_d_old = lev_d_new;

}

