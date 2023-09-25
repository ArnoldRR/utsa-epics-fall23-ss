int led_pin1 = 13;
int led_pin2 = 12;
int led_pin3 = 11;
int led_pin4 = 10;
int blink_duration1 = 200;

void setup() {
 pinMode(led_pin1, OUTPUT);
 pinMode(led_pin2, OUTPUT);
 pinMode(led_pin3, OUTPUT);
 pinMode(led_pin4, OUTPUT);
}

void loop() {
 //put your main code here, to run repeatedly:
digitalWrite (led_pin1,HIGH);
digitalWrite (led_pin2,HIGH);
 delay (blink_duration1);
digitalWrite (led_pin1,LOW);
digitalWrite (led_pin2,LOW);
 delay (blink_duration1);

digitalWrite (led_pin3,HIGH);
digitalWrite (led_pin4,HIGH);
 delay (blink_duration1);
digitalWrite (led_pin3,LOW);
digitalWrite (led_pin4,LOW);
 delay (blink_duration1);

}
