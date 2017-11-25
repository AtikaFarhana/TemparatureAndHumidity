void setup()
{
Serial.begin(9600); // Serial monitor baud rate
Serial.println("setup");
}
void loop()
{
int humValue = analogRead(A0); // read humidity value from A0 pin
// eqn
float voltage = ((humValue*5.0)/1023.0); // convert analog value to voltage
//equation for humidity
float humidity= (3.71*pow(voltage,3))-(20.65*pow(voltage,2))+(64.81*voltage)-27.44;

Serial.print(humidity);
Serial.println(" %");
delay(1000);
int tempValue = analogRead(A1); // read temperature value from A1 pin
float voltage_temp = ((tempValue*5.0)/1023.0); // convert analog value to voltage
//equation for temperature
float temperature=(5.26*pow(voltage_temp,3))-(27.34*pow(voltage_temp,2))+(68.87*voltage_temp)-17.81;
Serial.print(temperature);
Serial.println(" C");
}
