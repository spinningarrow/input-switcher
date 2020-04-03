int input1 = D3;
int input2 = D4;

void setup() {
   pinMode(input1, OUTPUT);
   pinMode(input2, OUTPUT);

   Particle.function("led", switchInput);
   Particle.function("input", switchInput);

   digitalWrite(input1, LOW);
   digitalWrite(input2, LOW);
}

void loop() {
   // Nothing to do here
}

int switchInput(String command) {
    digitalWrite(input1, LOW);
    digitalWrite(input2, LOW);

    if (command == "1") {
        digitalWrite(input1, HIGH);
        return 1;
    }

    if (command == "2") {
        digitalWrite(input2, HIGH);
        return 2;
    }

    return -1;
}
