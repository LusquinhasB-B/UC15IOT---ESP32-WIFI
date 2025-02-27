#include <WiFi.h>
#include <ESP32Ping.h>
 
const char* ssid = "IoT-Senac";
const char* password = "Senac@2025";
 
const char* site[] = {"www.senactaboao.com.br", "www.google.com.br", "www.marcoscosta.eti.br"};
 
void conectaWifi(){
    Serial.print("Conectando em");
    Serial.println(ssid);
 
    WiFi.begin(ssid, password);
 
    while (WiFi.status() != WL_CONNECTED)
    {
        delay(500);
        Serial.print(".");
    }
   
    Serial.println("");
    Serial.println("WiFi conectado.");
    Serial.println("Endereço de IP:");
 
    Serial.println(WiFi.localIP());
}
 
void verificaSite() {
    if (WiFi.status() != WL_CONNECTED) {
        Serial.println("Wifi não está conectado. Ping é impossível nesse estado");
        return;
    }
 
    for (int x = 0; x < sizeof(site) / sizeof(site[0]); x++) {
        Serial.print("Pingando site: ");
        Serial.println(String(site[x]));
 
        bool sucess = Ping.ping(site[x], 5);
 
        if (!sucess){
            Serial.println("Falha no ping!");
 
        } else {
            Serial.println("Ping realizado com sucesso");
        }
 
        Serial.println("==============");
    }
}
 
void setup() {
    Serial.begin(115200);
    conectaWifi();
 
    Serial.println("===============");
    verificaSite();
}
 
void loop(){
 
}
