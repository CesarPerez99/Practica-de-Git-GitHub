#include <iostream>

void printWelcome() {
    std::cout << "Bienvenido al sistema de control LED (C++)" << std::endl;
}

//Función para amntener un led encendido
 void turnOnLed() {
    std::cout << "LED encendido (C++)" << std::endl;
}

int main() {
    printWelcome();
    turnOnLed();
    return 0;
}
