
#include <Joystick.h>

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

// joystick setup
Joystick_ Joystick(JOYSTICK_DEFAULT_REPORT_ID,JOYSTICK_TYPE_GAMEPAD,
  10, JOYSTICK_DEFAULT_HATSWITCH_COUNT,                  // Button Count, Hat Switch Count
  false, false, false,     // No X and No Y, and no Z Axis
  false, false, false,   // No Rx, Ry, or Rz
  false, false,          // No rudder or throttle
  false, false, false);  // No accelerator, brake, or steering

void setup() {
  // put your setup code here, to run once:

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

  Joystick.begin();

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
       Joystick.setButton(0, 1);
    else
      Joystick.setButton(0, 0);
    delay(1);
  } // X
  if(btn_2_old != btn_2_new){
    if(btn_2_new == LOW)
     Joystick.setButton(3, 1);
    else
      Joystick.setButton(3, 0);
    delay(1);
  } // Y
  if(btn_3_old != btn_3_new){
    if(btn_3_new == LOW)
      Joystick.setButton(6, 1);
    else
      Joystick.setButton(6, 0);
    delay(1);
  } // LT
  if(btn_4_old != btn_4_new){
    if(btn_4_new == LOW)
      Joystick.setButton(1, 1);
    else
      Joystick.setButton(1, 0);
    delay(1);
  } // A
  if(btn_5_old != btn_5_new){
    if(btn_5_new == LOW)
      Joystick.setButton(2, 1);
    else
      Joystick.setButton(2, 0);
    delay(1);
  } // B
  if(btn_6_old != btn_6_new){
    if(btn_6_new == LOW)
      Joystick.setButton(7, 1);
    else
      Joystick.setButton(7, 0);
    delay(1);
  } // RT
  if(btn_7_old != btn_7_new){
    if(btn_7_new == LOW)
      Joystick.setButton(4, 1);
    else
      Joystick.setButton(4, 0);
    delay(1);
  }
  if(btn_8_old != btn_8_new){
    if(btn_8_new == LOW)
      Joystick.setButton(5, 1);
    else
      Joystick.setButton(5, 0);
    delay(1);
  }

  if(lev_l_old != lev_l_new){
    if(lev_l_new == LOW)
      if(lev_u_old == LOW)
        Joystick.setHatSwitch(0, 315);
      else if(lev_d_old == LOW)
        Joystick.setHatSwitch(0, 225);
      else
        Joystick.setHatSwitch(0, 270);
    else
      if(lev_u_old == LOW)
        Joystick.setHatSwitch(0, 0);
      else if(lev_d_old == LOW)
        Joystick.setHatSwitch(0, 180);
      else
        Joystick.setHatSwitch(0, -1);
    delay(3);
  }  
  if(lev_r_old != lev_r_new){
    if(lev_r_new == LOW)
      if(lev_u_old == LOW)
        Joystick.setHatSwitch(0, 45);
      else if(lev_d_old == LOW)
        Joystick.setHatSwitch(0, 135);
      else
        Joystick.setHatSwitch(0, 90);
    else
      if(lev_u_old == LOW)
        Joystick.setHatSwitch(0, 0);
      else if(lev_d_old == LOW)
        Joystick.setHatSwitch(0, 180);
      else
        Joystick.setHatSwitch(0, -1);
    delay(3);
  }
  if(lev_u_old != lev_u_new){
    if(lev_u_new == LOW)
      if(lev_l_old == LOW)
        Joystick.setHatSwitch(0, 315);
      else if(lev_r_old == LOW)
        Joystick.setHatSwitch(0, 45);
      else
        Joystick.setHatSwitch(0, 0);
    else
      if(lev_l_old == LOW)
        Joystick.setHatSwitch(0, 270);
      else if(lev_r_old == LOW)
        Joystick.setHatSwitch(0, 90);
      else
        Joystick.setHatSwitch(0, -1);
    delay(3);
  }
  if(lev_d_old != lev_d_new){
    if(lev_d_new == LOW)
      if(lev_l_old == LOW)
        Joystick.setHatSwitch(0, 225);
      else if(lev_r_old == LOW)
        Joystick.setHatSwitch(0, 135);
      else
        Joystick.setHatSwitch(0, 180);
    else
      if(lev_l_old == LOW)
        Joystick.setHatSwitch(0, 270);
      else if(lev_r_old == LOW)
        Joystick.setHatSwitch(0, 90);
      else
        Joystick.setHatSwitch(0, -1);
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

