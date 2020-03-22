void setup()

{
Serial.begin(9600);
}

void loop()

{
float tension, degresC, degresF;
tension = analogRead(0)* (5.0/1024.0);
degresC = (tension - 0.5) * 100.0;
degresF = degresC * (9.0/5.0) + 32.0;
Serial.print("Tension : ");
Serial.print(tension);
Serial.print("  deg C : ");
Serial.print(degresC);
Serial.print(" deg F : ");
Serial.println(degresF);
delay(1000);
}
