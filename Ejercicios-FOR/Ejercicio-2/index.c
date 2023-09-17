//Presentado por: Juan David García Arce

#include <stdio.h>
//Para usar radom
#include <stdlib.h>
//Se define el color azul
#define ANSI_COLOR_BLUE    "\x1b[34m"
//Se define el color verde
#define ANSI_COLOR_GREEN   "\x1b[32m"
//Se reinicia el color
#define ANSI_COLOR_RESET   "\x1b[0m"

int main () {

    //----------------------------------------------------ENUNCIADO----------------------------------------------------
    // Realizar un programa que haga un cuadrado de 7 x 8 utilizando el símbolo "█" (Alt + 219) y mediante el cambio de color
    // haga un juego en el cual el usuario tenga que llevar el cuadro azul (empieza en la esquina 1 - 1) hasta el cuadro verde
    // que se ubica aleatoriamente en el mapa (no se debe ubicar encima o en los proximos 2 cuadros del azul) utilizando WASD,
    // y acabe cuando se utilicen 50 movimientos, al final debe mostrar el puntaje (cuantas veces se llegó al cuadro verde con
    // el cuadro azul).

    //----------------------------------------------------VARIABLES-------------------------------------------------
    //Se define la variable para el puntaje
    int puntaje = 0;
    //Se define la variable para el movimiento
    char movimiento = 0;
    //Se define la variable para la cantidad de movimientos
    int cantidadMovimientos = 0;
    //Se define la posicion del cuadro azul en x y
        int posicionAzulX = 0;
        int posicionAzulY = 0;
    //Se define la posicion del cuadro verde en x y
        int posicionVerdeX = 6;
        int posicionVerdeY = 5;
    
    //----------------------------------------------------CODIGO----------------------------------------------------

    //Se imprime el mapa
    for(int i = 0; i < 7; i++) {
                for(int j = 0; j < 8; j++) {
                    if(i == posicionAzulY && j == posicionAzulX) {
                        printf(ANSI_COLOR_BLUE "█" ANSI_COLOR_RESET);
                    } else if(i == posicionVerdeY && j == posicionVerdeX) {
                        printf(ANSI_COLOR_GREEN "█" ANSI_COLOR_RESET);
                    } else {
                        printf("█");
                    }
                }
                printf("\n");
            }

    //Se pide el movimiento
    for(int j = 0; j < 50; j++) {
        printf("Ingrese el caracter de movimiento: ");
        scanf(" %c", &movimiento);
        //Se aumenta la cantidad de movimientos
        cantidadMovimientos++;

        //Se muestran los movimientos y el puntaje
        printf("Movimientos: %d\n", cantidadMovimientos);
        printf("Puntaje: %d\n", puntaje);

        //Se cambia la posicion del cuadro azul
        switch(movimiento) {
            case 'w':
                if(posicionAzulY > 0) {
                    posicionAzulY--;
                }
                break;
            case 'a':
                if(posicionAzulX > 0) {
                    posicionAzulX--;
                }
                break;
            case 's':
                if(posicionAzulY < 6) {
                    posicionAzulY++;
                }
                break;
            case 'd':
                if(posicionAzulX < 7) {
                    posicionAzulX++;
                }
                break;
        }

        for(int i = 0; i < 7; i++) {
                if(posicionAzulX == posicionVerdeX && posicionAzulY == posicionVerdeY) {
                    puntaje++;
                    //Se cambia la posicion del cuadro verde
                    posicionVerdeX = rand() % 8;
                    posicionVerdeY = rand() % 7;
                }
                for(int j = 0; j < 8; j++) {
                    if(i == posicionAzulY && j == posicionAzulX) {
                        printf(ANSI_COLOR_BLUE "█" ANSI_COLOR_RESET);
                    } else if(i == posicionVerdeY && j == posicionVerdeX) {
                        printf(ANSI_COLOR_GREEN "█" ANSI_COLOR_RESET);
                    } else {
                        printf("█");
                    }
                }
                printf("\n");
            }
    }
    

    return 0;
}