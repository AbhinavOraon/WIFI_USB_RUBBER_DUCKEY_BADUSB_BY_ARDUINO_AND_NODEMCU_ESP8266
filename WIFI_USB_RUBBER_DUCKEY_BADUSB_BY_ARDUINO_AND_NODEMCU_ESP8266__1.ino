 /*

@Author Abhianv Etwa Oraon
Youtube-OmegaElectronics
16-June-2022 17:50

*/

#include <ESP8266WiFi.h>
#include <SoftwareSerial.h>

SoftwareSerial mySerial(D1,D2); //rx,tx

const char* ssid = "oppo";
const char* password = "12345678";

WiFiServer server(80);

void setup() {
  
  Serial.begin(115200);
  mySerial.begin(115200);
  Serial.print("Connecting to ");
  Serial.println(ssid);

  WiFi.mode(WIFI_STA);
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }

  Serial.println("");
  Serial.println("NodeMCU is connected to WiFi");
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
  server.begin();
  delay(3000);
}

void loop() {
  WiFiClient client;
  client = server.available();

 if (client == 1) {
    String request = client.readStringUntil('\n');
    client.flush();
    //Serial.println(request);
    if (request.indexOf("inject") != -1)
    { 
      mySerial.write("a");
    }

    if (request.indexOf("color") != -1)
    { 
      mySerial.write("b");
    }
    if (request.indexOf("shut") != -1)
    { 
      mySerial.write('c');
    }
    if (request.indexOf("multi") != -1)
    { 
      mySerial.write('d');
    }
    if (request.indexOf("make") != -1)
    { 
      mySerial.write('e');
    }
    if (request.indexOf("abort") != -1)
    { 
      mySerial.write('f');
    }
 
    client.println("HTTP/1.1 200 OK");
    client.println("Content-Type: text/html");
    client.println(""); 
  
    client.println("<!DOCTYPE HTML>");
    client.println("<html>");
    client.println("<head>");
    client.println("<title>WIFI USB RUBBER DUCKEY</title>");
    client.println("</head>");
    client.println("<body >");
    client.println("<center><h1>WIFI USB RUBBER DUCKEY</h1><p>Plug This Devics To Victum Computer</p></center>");
    client.println("<center><h3>LIST OF TASKS THAT YOU CAN DO WITH THIS DEVICE:-</center></h2><p>wifi usb rubber duckey with esp8266 and arduino uno</p><h3><ol><li>Inject Payload</li><li>Open Multiple CMD window</li><li>Make and delete unlimited directory</li><li>Shutdown the system</li><li>Change color of CMD</li></ol></h4>");
    client.println("<center><p> <a href=\"/inject\">  <button style=\"height:100px; background-color: yellow; width:200px; cursor: pointer\"> INJECT PAYLOAD </button> <a> </font></p> ");
    client.println("<p> <a href=\"/color\"> <button style=\"height:100px; background-color: yellow; width:200px; cursor: pointer\" > CHANGE COLOR OF CMD WINDOW </button> <a> </font></p> ");
    client.println("<p> <a href=\"/shut\"> <button style=\"height:100px; background-color: yellow; width:200px; cursor: pointer\" > OPEN MULTIPLE CMD WINDOW </button> <a> </font></p> ");
    client.println("<p> <a href=\"/multi\">  <button style=\"height:100px; background-color: yellow; width:200px; cursor: pointer\"> SHUTDOWN THE SYSTEM  </button> <a> </font></p> ");
    client.println("<p> <a href=\"/make\"> <button style=\"height:100px; background-color: yellow; width:200px; cursor: pointer\" > MAKE AND DELETE UNLIMITED DIRECTORY </button> <a> </font></p> ");
    client.println("<p> <a href=\"/abort\"> <button style=\"height:100px; background-color: yellow; width:200px; cursor: pointer\" > ABORT</button> <a> </font></p> ");
    client.println("<h2>Warning!!!</h2><p><em>We are</em>,not responsible fo any inleagle use of this device.</p><p>You <strong>only you</strong> is responsible fo this device.</p><p><em><strong>USE IT ON YOUR OWN RISK</strong></em></p>");
    client.println("<p>Subscribe to my channel(omega Electronics)</p><p>Regards, <br>Abhinav Etwa Oraon</p><hr>");
    client.println("<p>|| @OmegaElectronics || Youtube ||</p><p>|| @Author Abhinav Oraon ||</p></body></html></center>");
    client.println("</body>");
    client.println("</html>");
       
  }
}
