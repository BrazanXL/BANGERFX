#include <stdio.h>
#include <conio.h>
#include <windows.h> // Para usar la función Sleep()

int main() {
    char input;
    int tiempoRojo = 3000; // Tiempo en milisegundos
    int tiempoVerde = 3000; // Tiempo en milisegundos
    int estadoActual = 0; // 0: Rojo, 1: Amarillo, 2: Verde
    int estadoAnterior = -1; // Inicialización para forzar la impresión inicial

    while (1) {
        if (_kbhit()) {
            input = _getch();
            if (input == 'S' || input == 's') {
                break;
            } else if (input == 'C' || input == 'c') {
                estadoActual = 0; // Reiniciar al estado Rojo
            }
        }

        if (estadoActual != estadoAnterior) {
            system("cls"); // Limpiar la pantalla (solo en sistemas Windows)
            estadoAnterior = estadoActual;
            printf("Estado actual del semaforo:\n");

            switch (estadoActual) {
                case 0:
                    printf("R: Encendido\n");
                    printf("A: Apagado\n");
                    printf("V: Apagado\n");
                    Sleep(tiempoRojo);
                    estadoActual = 1;
                    break;
                case 1:
                    printf("R: Apagado\n");
                    printf("A: Encendido\n");
                    printf("V: Apagado\n");
                    Sleep(1000); // Tiempo de espera del amarillo
                    estadoActual = 2;
                    break;
                case 2:
                    printf("R: Apagado\n");
                    printf("A: Apagado\n");
                    printf("V: Encendido\n");
                    Sleep(tiempoVerde);
                    estadoActual = 0;
                    break;
            }
        }
    }

    return 0;
}
