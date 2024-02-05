int input1 = D1;
int input2 = D2;
int input3 = D3;
int input4 = D4;

String currentInput = "0";

void setup() {
   // WiFi.setCredentials("My_Router", "mypasswordishuge");
   RGB.control(true);
   RGB.brightness(0);
   RGB.control(false);
    
   pinMode(input1, OUTPUT);
   pinMode(input2, OUTPUT);
   pinMode(input3, OUTPUT);
   pinMode(input4, OUTPUT);
   
   digitalWrite(input1, LOW);
   digitalWrite(input2, LOW);
   digitalWrite(input3, LOW);
   digitalWrite(input4, LOW);
   
   Particle.function("input", switchInput);
   Particle.variable("currentInput", currentInput);
}

void loop() {
   // Nothing to do here
}

int switchInput(String command) {
    digitalWrite(input1, LOW);
    digitalWrite(input2, LOW);
    digitalWrite(input3, LOW);
    digitalWrite(input4, LOW);
    
    currentInput = command;

    if (command == "1") {
        digitalWrite(input1, HIGH);
        return 1;
    }

    if (command == "2") {
        digitalWrite(input2, HIGH);
        return 2;
    }
    
    if (command == "3") {
        digitalWrite(input3, HIGH);
        return 3;
    }
    
    if (command == "4") {
        digitalWrite(input4, HIGH);
        return 4;
    }

    return 0;
}
