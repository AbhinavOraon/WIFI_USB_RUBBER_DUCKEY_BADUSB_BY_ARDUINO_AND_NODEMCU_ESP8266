/*

  @Author Abhianv Etwa Oraon
  Youtube-OmegaElectronics
  16-June-2022 17:50
*/
String msg;
uint8_t buf[8] = { 0 };   //Keyboard report buffer
void releaseKey()
{
  buf[0] = 0;
  buf[2] = 0;
  Serial.write(buf, 8); // Send Release key
}
#include <SoftwareSerial.h>

SoftwareSerial mySerial(6, 7); //rx,tx

//============================================================CMD Open Commands
void opencmd() {
  buf[2] = 227;   //Win
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 6;   //c
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 16;   //m
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 7;   //d
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 40;   //enter
  Serial.write(buf, 8);
  releaseKey();
  delay(1000);
}//===========================================================Shutdown Commands
void shutDown() {
  opencmd();
  buf[2] = 22;   //s
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 11;   //h
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 24;   //u
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 23;   //t
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 7;   //d
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 18;   //o
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 26;   //w
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 17;   //n
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 44;   //space
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 45;   //-
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 22;   //s
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 44;   //space
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 45;   //-
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 23;   //t
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 44;   //space
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 30;   //1
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 40;   //enter
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
}//============================================================multiple CMD window commands
void cmdwindow() {
  opencmd();
  buf[2] = 22;   //s
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 23;   //t
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 4;   //a
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 21;   //r
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 23;   //t
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 40;   //enter
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
}//===========================================================directory Making commands
void mkDir() {
  opencmd();
  buf[2] = 6;   //c
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 7;   //d
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 44;   //space
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 7;   //d
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 8;   //e
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 22;   //s
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 14;   //k
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 23;   //t
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 18;   //o
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 19;   //p
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 40;   //enter
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 16;   //m
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 7;   //d
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 44;   //space
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 30;   //1
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 54;   //,
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 31;   //2
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 54;   //,
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 32;   //3
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 54;   //,
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 33;   //4
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 54;   //,
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 34;   //5
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 54;   //,
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 35;   //6
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 54;   //,
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 36;   //7
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 54;   //,
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 37;   //8
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 54;   //,
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 38;   //9
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 54;   //,
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 39;   //0
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 40;   //enter
  Serial.write(buf, 8);
  releaseKey();
  delay(100);

}//=========================================================================================================
void CMDcolor() {
  opencmd();
  buf[2] = 6;   //c
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 18;   //o
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 15;   //l
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 18;   //o
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 21;   //r
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 44;   //space
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 39;   //0
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 31;   //2
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 40;   //enter
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 6;   //c
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 18;   //o
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 15;   //l
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 18;   //o
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 21;   //r
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 44;   //space
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 39;   //0
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 33;   //4
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 40;   //enter
  Serial.write(buf, 8);
  releaseKey();
  delay(100);}
void Exit(){
  buf[2] = 8;   //e
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] =27;   //x
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 12;   //i
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] =23;   //t
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
  buf[2] = 40;   //enter
  Serial.write(buf, 8);
  releaseKey();
  delay(100);
}
void setup() {
  Serial.begin(9600); // // Serial Communication is starting with 9600 of baudrate speed
  mySerial.begin(115200);

}

void loop() {
  if (mySerial.available() > 0) {
    msg = mySerial.readStringUntil('\n');
    delay(100);
    if (msg == "a") {
    }
    else if (msg == "b") {
      CMDcolor();}
      else if (msg == "c") {
        cmdwindow();}
      
      else if (msg == "d") {
        shutDown();
      }
      else if (msg == "e") {
        mkDir();
      }
      else if (msg == "f") {
        Exit();
      }
    }
}
