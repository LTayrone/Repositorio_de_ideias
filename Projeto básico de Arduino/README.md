# Semáforo com Arduino - Versão Básica

Este projeto consiste em controlar um semáforo utilizando um Arduino e três LEDs: vermelho, amarelo e verde. O código fornecido implementa a lógica sequencial do semáforo, onde as cores são exibidas na seguinte ordem: verde, amarelo e vermelho.

## Componentes Necessários
- Arduino
- 3 LEDs (vermelho, amarelo e verde)
- Resistores adequados para limitar a corrente dos LEDs
- Jumpers para conexões

## Configuração

1. Conecte os LEDs aos pinos corretos do Arduino, conforme indicado no código.
2. Carregue o código no Arduino utilizando a IDE de programação.
3. Observe o funcionamento do semáforo, seguindo a sequência padrão (verde, amarelo, vermelho) com os intervalos de tempo especificados.

## Código

```arduino
// Definindo os pinos para cada LED
int vermelho = 10;
int amarelo = 9;
int verde = 8;

void setup() {
  // Configurando os pinos como saída
  pinMode(vermelho, OUTPUT);
  pinMode(amarelo, OUTPUT);
  pinMode(verde, OUTPUT);
}

void loop() {
  // Exibindo o amarelo. (Início do ciclo estranho, será explicado em outro exercício!)
  digitalWrite(vermelho, LOW);
  digitalWrite(amarelo, HIGH);
  digitalWrite(verde, LOW);

  // Aguardando 2 segundos com o sinal no amarelo
  delay(2000);

  // Apagando o amarelo e acendendo o vermelho
  digitalWrite(amarelo, LOW);
  digitalWrite(vermelho, HIGH);

  // Aguardando 5 segundos com o sinal fechado
  delay(5000);

  // Apagando o vermelho e acendendo o verde
  digitalWrite(verde, HIGH);
  digitalWrite(vermelho, LOW);

  // Aguardando 5 segundos com o sinal aberto
  delay(5000);
}

