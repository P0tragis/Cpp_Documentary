#include <WiFi.h>
const char* ssid = "Link";
const char* password = "HQRN7K767";
const int ledPin = 2;
WiFiServer server(80);

void setup() {
  Serial.begin(115200);
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);

  Serial.print("Connecting to WiFi");
  WiFi.begin(ssid, password);
  int attemps = 0;
  while (WiFi.status() != WL_CONNECTED && attemps < 20) {
    delay(1000);
    Serial.print(".");
    attemps++;
  }

  if (WiFi.status() == WL_CONNECTED) {
    Serial.println("Connected!");
    Serial.print("IP address: ");
    Serial.println(WiFi.localIP());
  }
  else {
    Serial.println("\nFailed to connect");
  }
  server.begin();

}

void loop() {
  WiFiClient client = server.available();
  if (client) {
    Serial.println("Client Connected");
    String request = client.readStringUntil('\r');
    Serial.println(request);
    client.flush();

    if (request.indexOf("/LED=ON") != -1) {
      digitalWrite(ledPin, HIGH);
    }
    else if(request.indexOf("/LED=OFF") != -1) {
      digitalWrite(ledPin, LOW);
    }

    //HTML
    client.println("HTTP/1.1 200 OK");
    client.println("Content-type:text/html");
    client.println();


    client.println("<html> <body style = 'text-align: center;'>");
    client.println("<h2> ESP 32 LED CONTROL </h2>");
    client.println("<a href = \"/LED=ON\"><button style = 'font-size: 30px;'> Turn on </button></a>");
    client.println("&nbsp;");
    client.println("<a href = \"/LED=OFF\"><button style = 'font-size: 30px;'> Turn off </button></a>");
    client.println("</html></body>");

    client.stop();
    Serial.println("Client Disconnected");

  }

}
