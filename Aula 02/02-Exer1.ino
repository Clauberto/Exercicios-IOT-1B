float n1,n2,n3;
/*
 * Calcular média do aluno
 * Nome: Claubert Felisberto Colonetti
 * Turma: 2005
 */
void setup() {
Serial.begin(9600);
}

void loop() {
Serial.println("Digite a sua primera nota:");
while(!Serial.available());
n1 = Serial.parseFloat();
Serial.println("Digite a sua segunda nota:");
while(!Serial.available());
n2 = Serial.parseFloat();
Serial.println("Digite a sua terceira nota:");
while(!Serial.available());
n3 = Serial.parseFloat();

float media = (n1+n2+n3)/3;
Serial.println("Média do aluno:" + String(media));
}
