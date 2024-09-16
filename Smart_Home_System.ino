#include <Servo.h>
#include <DHT.h>
#include <DHT_U.h>

#define dhtpin 3
#define dhttype DHT11

DHT dht1(dhtpin, dhttype);

Servo myservo;
int trigPin = 9;
int echoPin = 8;
int door_active;
float distance;
float duration;
int led = 4;
int buzzer = 2;
int fan = 12;
float t;

void setup()
{
    myservo.attach(6);
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
    pinMode(led, OUTPUT);
    dht1.begin();
    pinMode(buzzer, OUTPUT);
    pinMode(fan, OUTPUT);
    Serial.begin(9600);
}

void loop()
{
    servo_distance();
    myservo.write(90);

    if (distance <= 9)
    {
        myservo.write(0);
        door_active = 1;
    }

    if (door_active == 1)
    {
        digitalWrite(led, HIGH);
        temp();

        if (t > 70)
        {
            digitalWrite(buzzer, HIGH);
            digitalWrite(fan, LOW);
        }
        else if (t > 25 && t < 70)
        {
            digitalWrite(fan, HIGH);
        }
        else
        {
            digitalWrite(buzzer, LOW);
            digitalWrite(fan, LOW);
        }
    }
    else
    {
        digitalWrite(led, LOW);
        digitalWrite(buzzer, LOW);
        digitalWrite(fan, LOW);
    }
}

void servo_distance()
{
    digitalWrite(trigPin, LOW);
    delayMicroseconds(2);
    digitalWrite(trigPin, HIGH);
    delayMicroseconds(10);
    digitalWrite(trigPin, LOW);
    duration = pulseIn(echoPin, HIGH);
    distance = duration * 0.034 / 2;
}

void temp()
{
    t = dht1.readTemperature();
}
