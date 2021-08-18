/*
 * Conversor de metros para dm, cm, mm.
 * Nome: Claubert Felisberto Colonetti
 * Turma: 2005.
 */
float number;
void setup(){
Serial.begin(9600);
}

void loop(){
Serial.println("Digite o valor: em metros:");
while(!Serial.available());
number = Serial.parseFloat();
float dm = number * 10;
float cm = number * 100;
float mm = number * 1000;
Serial.println("Decímetros: " + String(dm));
Serial.println("Centímetros: " + String(cm));
Serial.println("Milímetros: " + String(mm));

}
