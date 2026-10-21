{
    "version": 1,
      "author": "Smart Security Lock System",
        "editor": "wokwi",
          "parts": [
              { "type": "wokwi-arduino-uno", "id": "uno", "top": 210, "left": 260, "attrs": {} },
                  { "type": "wokwi-ssd1306", "id": "oled", "top": -70, "left": 20, "attrs": { "i2cAddress": "0x3c" } },
                      { "type": "wokwi-pushbutton", "id": "btn1", "top": 10, "left": 360, "attrs": { "color": "blue", "label": "1" } },
                          { "type": "wokwi-pushbutton", "id": "btn2", "top": 10, "left": 430, "attrs": { "color": "blue", "label": "2" } },
                              { "type": "wokwi-pushbutton", "id": "btn3", "top": 10, "left": 500, "attrs": { "color": "blue", "label": "3" } },
                                  { "type": "wokwi-pushbutton", "id": "btn4", "top": 10, "left": 570, "attrs": { "color": "blue", "label": "4" } },
                                      { "type": "wokwi-led", "id": "ledGreen", "top": 40, "left": 680, "attrs": { "color": "green" } },
                                          { "type": "wokwi-led", "id": "ledRed", "top": 40, "left": 760, "attrs": { "color": "red" } },
                                              { "type": "wokwi-buzzer", "id": "buzzer", "top": 30, "left": 850, "attrs": {} },
                                                  { "type": "wokwi-servo", "id": "servo", "top": 270, "left": 760, "attrs": {} },
                                                      { "type": "wokwi-resistor", "id": "rGreen", "top": 115, "left": 680, "attrs": { "value": "220" } },
                                                          { "type": "wokwi-resistor", "id": "rRed", "top": 115, "left": 760, "attrs": { "value": "220" } }
                                                            ],
                                                              "connections": [
                                                                  ["oled:GND", "uno:GND.1", "black", []],
                                                                      ["oled:VCC", "uno:5V", "red", []],
                                                                          ["oled:SDA", "uno:A4", "green", []],
                                                                              ["oled:SCL", "uno:A5", "blue", []],
                                                                              
                                                                                  ["btn1:1.l", "uno:2", "orange", []],
                                                                                      ["btn1:2.l", "uno:GND.1", "black", []],
                                                                                          ["btn2:1.l", "uno:3", "yellow", []],
                                                                                              ["btn2:2.l", "uno:GND.1", "black", []],
                                                                                                  ["btn3:1.l", "uno:4", "green", []],
                                                                                                      ["btn3:2.l", "uno:GND.1", "black", []],
                                                                                                          ["btn4:1.l", "uno:5", "blue", []],
                                                                                                              ["btn4:2.l", "uno:GND.1", "black", []],
                                                                                                              
                                                                                                                  ["uno:8", "rGreen:1", "green", []],
                                                                                                                      ["rGreen:2", "ledGreen:A", "green", []],
                                                                                                                          ["ledGreen:C", "uno:GND.1", "black", []],
                                                                                                                              ["uno:9", "rRed:1", "red", []],
                                                                                                                                  ["rRed:2", "ledRed:A", "red", []],
                                                                                                                                      ["ledRed:C", "uno:GND.1", "black", []],
                                                                                                                                      
                                                                                                                                          ["buzzer:1", "uno:10", "orange", []],
                                                                                                                                              ["buzzer:2", "uno:GND.1", "black", []],
                                                                                                                                              
                                                                                                                                                  ["servo:PWM", "uno:6", "orange", []],
                                                                                                                                                      ["servo:V+", "uno:5V", "red", []],
                                                                                                                                                          ["servo:GND", "uno:GND.1", "black", []]
                                                                                                                                                            ],
                                                                                                                                                              "dependencies": {}
                                                                                                                                                              }void setup() {
  // put your setup code here, to run once:

}

void loop() {
  // put your main code here, to run repeatedly:

}
