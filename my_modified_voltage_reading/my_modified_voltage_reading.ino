//Voltage Detection module code
//http://www.ebay.com/itm/161758492882?_trksid=p2060353.m2749.l2649&ssPageName=STRK%3AMEBIDX%3AIT

//Improved verson of voltage sensor updated by LeRoy Miller Aug 2015
//This version Displays the raw reading (float) and than a corrected reading
//that can be used as a rough guess of voltage.

//Wire Library and LED were not used so they have been removed

int val11;
int val2;

void setup()
{

Serial.begin(9600);
Serial.println("Emartee.Com");
Serial.println("Voltage: ");
Serial.print("V");
}
void loop()
{
float temp;
val11=analogRead(1);
Serial.print("Raw Val11: ");
Serial.println(val11);
//temp=(val11/3.092)/10;
//val11=(int)temp * 10;//
//val2=((val11%100)/10);
//Serial.print("Raw Reading: ");
//Serial.println(temp);
//Serial.print("Corrected Reading: ");
//Serial.println(val2);
delay(250);
}
