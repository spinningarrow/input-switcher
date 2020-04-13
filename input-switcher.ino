int input1 = D1;
int input2 = D2;
int input3 = D3;
int input4 = D4;

int red = A0;
int green = A1;
int blue = A2;

void setup() {
   pinMode(input1, OUTPUT);
   pinMode(input2, OUTPUT);
   pinMode(input3, OUTPUT);
   pinMode(input4, OUTPUT);

   pinMode(red, OUTPUT);
   pinMode(green, OUTPUT);
   pinMode(blue, OUTPUT);

   Particle.function("input", switchInput);

   digitalWrite(input1, LOW);
   digitalWrite(input2, LOW);
   digitalWrite(input3, LOW);
   digitalWrite(input4, LOW);

   ledWhite();

   RGB.control(true);
   RGB.brightness(4);
   RGB.control(false);
}

void loop() {
   // Nothing to do here
}

int switchInput(String command) {
    digitalWrite(input1, LOW);
    digitalWrite(input2, LOW);
    digitalWrite(input3, LOW);
    digitalWrite(input4, LOW);

    if (command == "1") {
        digitalWrite(input1, HIGH);
        ledGreen();
        return 1;
    }

    if (command == "2") {
        digitalWrite(input2, HIGH);
        ledRed();
        return 2;
    }

    if (command == "3") {
        digitalWrite(input3, HIGH);
        ledBlue();
        return 3;
    }

    if (command == "4") {
        digitalWrite(input4, HIGH);
        ledMagenta();
        return 4;
    }

    ledOff();
    return 0;
}

void ledRed() {
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
    digitalWrite(blue, HIGH);
}

void ledBlue() {
    digitalWrite(red, HIGH);
    digitalWrite(green, HIGH);
    digitalWrite(blue, LOW);
}

void ledGreen() {
    digitalWrite(red, HIGH);
    digitalWrite(green, LOW);
    digitalWrite(blue, HIGH);
}

void ledMagenta() {
    digitalWrite(red, LOW);
    digitalWrite(green, HIGH);
    digitalWrite(blue, LOW);
}

void ledYellow() {
    digitalWrite(red, LOW);
    digitalWrite(green, LOW);
    digitalWrite(blue, HIGH);
}

void ledCyan() {
    digitalWrite(red, HIGH);
    digitalWrite(green, LOW);
    digitalWrite(blue, LOW);
}

void ledWhite() {
    digitalWrite(red, LOW);
    digitalWrite(green, LOW);
    digitalWrite(blue, LOW);
}

void ledOff() {
    digitalWrite(red, HIGH);
    digitalWrite(green, HIGH);
    digitalWrite(blue, HIGH);
}
