
#include <Wire.h>
#include <Adafruit_MCP23X17.h>

Adafruit_MCP23X17 mcp;

#define SDA_PIN 4
#define SCL_PIN 5
#define MCP_ADDRESS 0x20

#define ROWS 9
#define COLS 10

const uint8_t rowPins[ROWS] = {0, 1, 2, 3, 4, 5, 6, 7, 8};
const uint8_t mcpCols[7] = {9, 10, 11, 12, 13, 14, 15};
const uint8_t picoCols[3] = {6, 7, 8};

const char* keymap[ROWS][COLS] = {
  {"ESC","1","2","3","4","5","6","7","8","9"},
  {"TAB","Q","W","E","R","T","Y","U","I","O"},
  {"CAPS","A","S","D","F","G","H","J","K","L"},
  {"SHIFT","Z","X","C","V","B","N","M",",","."},
  {"CTRL","ALT","WIN","SPACE","SPACE","SPACE","SPACE","ALT","FN","CTRL"},
  {"F1","F2","F3","F4","F5","F6","F7","F8","F9","F10"},
  {"F11","F12","HOME","END","PGUP","PGDN","INS","DEL","UP","DOWN"},
  {"LEFT","RIGHT","ENTER","BACKSPACE","[","]",";","'","/","\\"},
  {"-", "=","`","K83","K84","K85","","","",""}
};

bool previousState[ROWS][COLS] = {};

void setColumn(int c, uint8_t state) {
  if (c < 7) {
    mcp.digitalWrite(mcpCols[c], state);
  } else {
    digitalWrite(picoCols[c - 7], state);
  }
}

void setup() {
  Serial.begin(115200);

  Wire.setSDA(SDA_PIN);
  Wire.setSCL(SCL_PIN);
  Wire.begin();

  if (!mcp.begin_I2C(MCP_ADDRESS, &Wire)) {
    Serial.println("MCP23017 not found!");
    while (1);
  }

  for (int r = 0; r < ROWS; r++) {
    mcp.pinMode(rowPins[r], INPUT_PULLUP);
  }

  for (int c = 0; c < 7; c++) {
    mcp.pinMode(mcpCols[c], OUTPUT);
    setColumn(c, HIGH);
  }

  for (int c = 7; c < COLS; c++) {
    pinMode(picoCols[c - 7], OUTPUT);
    setColumn(c, HIGH);
  }

  Serial.println("85-key keyboard tester ready!");
}

void loop() {
  for (int c = 0; c < COLS; c++) {
    setColumn(c, LOW);
    delayMicroseconds(50);

    for (int r = 0; r < ROWS; r++) {
      if (keymap[r][c][0] == '\0') continue;

      bool pressed = (mcp.digitalRead(rowPins[r]) == LOW);

      if (pressed != previousState[r][c]) {
        Serial.print(pressed ? "Pressed: " : "Released: ");
        Serial.println(keymap[r][c]);
        previousState[r][c] = pressed;
      }
    }

    setColumn(c, HIGH);
  }

  delay(5);
}
