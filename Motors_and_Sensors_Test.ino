//This is the declaration of motor pins second ESP Motor Shield

int motorA_EN = D1;
int motorA_DIR = D3;

int motorB_EN = D2;
int motorB_DIR = D4;

//Declaration of five sensors module
const int sensorPin1 = D0;  // Pino do primeiro sensor IR (D0)
const int sensorPin2 = D5;  // Pino do terceiro sensor IR (D5)
const int sensorPin3 = D6;  // Pino do quarto sensor IR (D6)
const int sensorPin4 = D7;  // Pino do quinto sensor IR (D7)
const int sensorPin5 = D8;  // Pino do segundo sensor IR (D8)

void setup() {
//Serial monitor Frequency for ESP
  Serial.begin(115200);

  Serial.println("");
  Serial.println("Teste de motores iniciando...");
  
  pinMode(motorA_EN, OUTPUT);
  pinMode(motorA_DIR, OUTPUT);
  pinMode(motorB_EN, OUTPUT);
  pinMode(motorB_DIR, OUTPUT);

  pinMode(sensorPin1, INPUT);  // Configuração do pino como entrada
  pinMode(sensorPin2, INPUT);
  pinMode(sensorPin3, INPUT);
  pinMode(sensorPin4, INPUT);
  pinMode(sensorPin5, INPUT);
}

void loop() {
      digitalWrite(motorA_EN,HIGH);
      digitalWrite(motorA_DIR,HIGH);
    
      digitalWrite(motorB_EN,HIGH);
      digitalWrite(motorB_DIR,HIGH);

      int value1 = digitalRead(sensorPin1);
      int value2 = digitalRead(sensorPin2);
      int value3 = digitalRead(sensorPin3);
      int value4 = digitalRead(sensorPin4);
      int value5 = digitalRead(sensorPin5);
    
      Serial.print("Sensor 1: ");
      Serial.print(value1);
      Serial.print(" | Sensor 2: ");
      Serial.print(value2);
      Serial.print(" | Sensor 3: ");
      Serial.print(value3);
      Serial.print(" | Sensor 4: ");
      Serial.print(value4);
      Serial.print(" | Sensor 5: ");
      Serial.println(value5);
    
      delay(1000);  // Aguarda por 1 segundo antes da próxima leitura

}
