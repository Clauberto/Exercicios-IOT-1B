int n1;
int n2;
/*
 * Pedir dois números inteiros dizer qual é o maior.
 * Nome: Claubert Felisberto Colonetti
 * Turma: 2005.
 */

void setup() {
Serial.begin(9600);
}

void loop() {
Serial.println("Digite um número inteiro:");
while(!Serial.available());
n1 = Serial.parseInt();
Serial.println("Digite outro número inteiro:");
while(!Serial.available());
n2 = Serial.parseInt();

if(n1 > n2)
Serial.println("O número " + String(n1) + " é maior que " + String(n2));
else
Serial.println("O número " + String(n2) + " é maior que " + String(n1)); 

}
