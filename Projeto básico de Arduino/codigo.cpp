// dando um "nome" para as portas 
int vermelho = 10;
int amarelo = 9;
int verde = 8;
 
void setup() {
  // indicando para o ardu�no quais portas vamos usar
  pinMode(vermelho, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(verde, OUTPUT);
}
 
void loop() {
  // vamos come�ar do amarelo. Estranho n�o? 
  // voc� vai entender no pr�ximo exerc�cio!
  digitalWrite(vermelho, LOW);
  digitalWrite(amarelo, HIGH);
  digitalWrite(verde, LOW);
 
  // esperamos 2s com o sinal no amarelo
  delay(2000);
 
  // apagamos o amarelo e ligamos o vermelho
  digitalWrite(amarelo, LOW);
  digitalWrite(vermelho, HIGH);
  // N�o precisa desse pois o verde j� estava apagado
  // digitalWrite(verde, LOW);
 
  // esperamos 5s com o sinal fechado
  delay(5000);  
 
  // para finalizar, apagamos o vermelho e ligamos o verde
  digitalWrite(verde, HIGH);
  // n�o precisa desse pois o amarelo j� estava apagado
  // digitalWrite(amarelo, LOW);
  digitalWrite(vermelho, LOW);
 
  // esperamos 5s com o sinal aberto
  delay(5000);
}