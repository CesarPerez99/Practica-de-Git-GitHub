#include <stdio.h>

void start_driver() {
    printf("Inicializando controlador de hardware (C)\n");
}

//Funcion para indicar un error
void report_error() {
    printf("Error detectado en hardware (C)\n");
}

int main() {
    start_driver();
    report_error();
    return 0;
}
