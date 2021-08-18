/*
 * Fazer tabuada do número pedido.
 * Nome: Claubert Felisberto Colonetti
 * Turma: 2005.
 */
float num, resul, i=0;
void setup() {
Serial.begin(9600);
}

void loop() {
Serial.println("Digite um número:");
while(!Serial.available());
num = Serial.parseFloat();
for( i = 1; i <= 10; i++){
resul = num * i;
Serial.println(String(num)+ " x " +String(i,0)+ " = "+ String(resul));
}

}
