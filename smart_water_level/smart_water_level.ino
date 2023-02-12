//#include <Wire.h>
//#include <LiquidCrystal_I2C.h>

#include <LiquidCrystal.h>



LiquidCrystal lcd(12, 11, 5, 4, 3, 2);


const int trigger = 7;
const int echo = 6;
const int buzzer = 13;
//const int ledPin = 13;

#define m11 8
#define m12 9
#define usonic 0.034

int percentage;

long duration, distance;

// Set the LCD address to 0x27 for a 16 chars and 2 line display
//LiquidCrystal_I2C lcd(0x27, 16, 2);


void setup()
{

  //lcd.begin();
  lcd.begin(16, 2);
  Serial.begin(9600);

  pinMode(m11, OUTPUT);
  pinMode(m12, OUTPUT);

  pinMode(trigger, OUTPUT);
  pinMode(echo, INPUT);
  pinMode(buzzer, OUTPUT);

  // Turn on the blacklight and print a message.
  //  lcd.backlight();
  lcd.print("ST-Water Level");
  lcd.setCursor(0, 1);
  lcd.print("   By Ndlovu");
  delay(2000);
  lcd.clear();
  lcd.setCursor(0, 1);
  lcd.print("  LOADING ... ");
  delay(1000);

}

void loop()
{
  //digitalWrite(buzzer, LOW);

  // LEVEL SENSOR

  digitalWrite(trigger, LOW);
  delayMicroseconds(2);
  
  digitalWrite(trigger, HIGH);
  delayMicroseconds(11);
  digitalWrite(trigger, LOW);
  
  duration = pulseIn(echo, HIGH);
  
  distance = duration * usonic / 2;
  percentage = map(distance, 0, 1023, 0,100);

  if (percentage < 0) {

    percentage = 0;

  } else if ( percentage > 100) {
    percentage = 100;
  }

  if (percentage >= 90) {

    lcd.clear();
    lcd.print("Capacity in");
    lcd.setCursor(0, 1);
    lcd.print("tank is:");
    lcd.print(percentage);
    lcd.print("%");
    delay(2000);
    lcd.setCursor(0, 1);
    lcd.print("Distance:");
    lcd.print(distance);
    lcd.print("cm");
    delay(1000);

    digitalWrite(buzzer, LOW);
    digitalWrite(m11, LOW);         // pump stoped
    digitalWrite(m12, LOW);
    delay(1000);
  }
  else if (percentage >= 30 || 90 )
  {
    lcd.clear();
    lcd.print("Capacity in");
    lcd.setCursor(0, 1);
    lcd.print("tank is:");
    lcd.print(percentage);
    lcd.print("%");
    delay(2000);
    lcd.setCursor(0, 1);
    lcd.print("Distance:");
    lcd.print(distance);
    lcd.print("cm");
    digitalWrite(m11, HIGH);        
    digitalWrite(m12, LOW);
    delay(1000);
  }

  else if ( percentage <= 30)
  {    

    
    lcd.clear();
    lcd.print("Capacity in");
    lcd.setCursor(0, 1);
    lcd.print("tank is:");
    lcd.print(percentage);
    lcd.print("%");
    delay(2000);
    lcd.setCursor(0, 1);
    lcd.print("Distance:");
    lcd.print(distance);
    lcd.print("cm");
    
    digitalWrite(buzzer, HIGH);
    digitalWrite(m11, HIGH);
    digitalWrite(m12, LOW);

    delay(1000);

  } 
  Serial.print(distance);
  Serial.print("cm");
  Serial.println();

  delay(1000);
}
