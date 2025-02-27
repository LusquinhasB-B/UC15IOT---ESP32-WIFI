/*********
  Professor Marcos Costa
  Conectando a um roteador e
  Fazendo um Ping com Esp32 para verificar se
  o Esp32 está na Web validando dois sites.
*********/
 
#include <WiFi.h>
#include <ESP32Ping.h>
 
//Constantes que terão o dados da Rede WiFi
const char* ssid = "IoT-Senac";
const char* password = "Senac@2025";
 
String wifiConnected = "";
 
 
void conectaWiFi() {
  Serial.print("Conectando em ");
  Serial.println(ssid);
 
  //Inicia a conexão de acorod com os parâmetros do roteador escolhido
  WiFi.begin(ssid, password);
 
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
 
    WiFi.mode(WIFI_STA); // Modo de conexão, neste caso iremos procurar roteadores
 
    int qtdeRedes = WiFi.scanNetworks(); //Quantidade de redes encontradas
 
    for (int i = 0; i < qtdeRedes; ++i) {
      if (WiFi.encryptionType(i) == WIFI_AUTH_OPEN) {
        Serial.print("Rede aberta com melhor sinal: ");
        Serial.print(WiFi.SSID(i));
        Serial.print(" - Sinal: ");
        Serial.println(WiFi.RSSI(i));
        Serial.println("--------------------------------------------");
        
        Serial.println();
        
        if (wifiConnected == ""){
          //Conectando a rede aberta com melhor sinal
          Serial.print("Conectando a melhor rede aberta encontrada: ");
          Serial.println(WiFi.SSID(i));
  
          //Efetua a conexão com a rede wifi
          WiFi.begin(WiFi.SSID(i));
  
          //Variável para controlar as tentativas de conexão
          int tentativas = 0;
  
          while (WiFi.status() != WL_CONNECTED) {
            Serial.print(".");
            tentativas++;
            //Foi tentado conectar 100 vezes, como não conseguir, para o processo
            if (tentativas == 100) break; //Mantém aguardando conexão por 15 segundos
            delay(100);
          }
          
          Serial.println("");
          
          if (WiFi.status() == WL_CONNECTED) {
            wifiConnected = WiFi.SSID(i);
            Serial.println("WiFi conectado!" + wifiConnected);
          } else {
            wifiConnected = "";
            Serial.println("Nao foi possivel conectar.");
          }
          break; //Finaliza o loop
        }else{
          Serial.println("ESP32 ja conectado a Rede: " + wifiConnected);
        }
        Serial.println("--------------------------------------------");
      }
    }
  }
 
  Serial.println("");
  Serial.println("WiFi conectado.");
  Serial.println("Endereço de IP: ");
  Serial.println(WiFi.localIP());  
}
 
void setup() {
  //Iniciar a comunicação serial
  Serial.begin(115200);
  //Chamada da função para conexão com WiFi
  conectaWiFi();
  Serial.println("==============================================================");
  //Chamada da função para verificações dos Pings
  // verificaSite();
}
 
void loop(){  
  conectaWiFi();
}
 
 
 
// void verificaSite() {
//   if (WiFi.status() != WL_CONNECTED) {
//     Serial.println("WiFi não está conectado. Não será possível realizar o ping.");
//     return;
//   }
 
//   for (int x = 0; x < sizeof(site) / sizeof(site[0]); x++) {
//     Serial.print("Pingando o site: ");
//     Serial.println(String(site[x]));
 
//     //Variável booelana que recebe True ou False do Ping realizado de até 5 segundos
//     bool success = Ping.ping(site[x], 5);
  
//     if (!success) {
//       Serial.println("O Ping falhou!");
//     } else {
//       Serial.println("Ping no site foi realizado com sucesso!");
//     }
    
//     Serial.println("==============================================================");
//   }
// }
 
 
