//ส่วนของการประกาศตัวแปร
int myOut = D0;
int myDelayTime = 2000; //ค่าของเวลาจะมีหน่วยเป็น มิลิวินาที


//ส่วนของ Setup คือ ส่วนที่กำหนดค่าคงที่ ที่จะใช้ในโค้ด จะทำงานครั้งแรก ครั้งเดียว
void setup() {


//  ส่วนที่กำหนด การส่ง Digital Out จากขาของ Node  
  pinMode(myOut, OUTPUT);
} // end of setup

//ส่วนของ loop จะทำงาน วนไปมาตามสัญญาณนาฬิกา Digital Logic
void loop() {
  digitalWrite(myOut, HIGH);   // turn the LED on (HIGH is the voltage level)
  delay(myDelayTime);                       // wait for a second
  digitalWrite(myOut, LOW);    // turn the LED off by making the voltage LOW
  delay(myDelayTime);                       // wait for a second
}
