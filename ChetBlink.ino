//ส่วนของการประกาศตัวแปร
int myOut = D1;
int myOut2 = D2;
int myDelayTime = 3000; //ค่าของเวลาจะมีหน่วยเป็น มิลิวินาที


//ส่วนของ Setup คือ ส่วนที่กำหนดค่าคงที่ ที่จะใช้ในโค้ด จะทำงานครั้งแรก ครั้งเดียว
void setup() {

//  ส่วนที่กำหนด การส่ง Digital Out จากขาของ Node  
  pinMode(myOut, OUTPUT);
  pinMode(myOut2, OUTPUT);
} // end of setup

//ส่วนของ loop จะทำงาน วนไปมาตามสัญญาณนาฬิกา Digital Logic
void loop() {
  //  สำหรับ myOutput
  digitalWrite(myOut, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(myDelayTime);                       // wait for a second
  digitalWrite(myOut, LOW);    // turn the LED off by making the voltage LOW
  delay(myDelayTime);                       // wait for a second
    //  สำหรับ myOutput2
  digitalWrite(myOut2, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(myDelayTime);                       // wait for a second
  digitalWrite(myOut2, LOW);    // turn the LED off by making the voltage LOW
  delay(myDelayTime);                       // wait for a second
}
