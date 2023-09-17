//presentado por: Juan David García Arce

#include <stdio.h>
#include <stdbool.h>

// Función para verificar si un número es primo


int main() {

    //----------------------------------------------------ENUNCIADO----------------------------------------------------
    // Realizar un círculo con el radio que ingrese el usuario utilizando los números primos y el tabulador sin utilizar while anidados

    //----------------------------------------------------VARIABLES-------------------------------------------------

    int radio;
    int  j = 1, n = 0, primo = 1, booleanoPrimo = 0 , l = 2;
    printf("Ingrese el radio del círculo: ");
    scanf("%d", &radio);

    int fila = -radio;
    int columna;

    int numeroPrimo = 2;

    //----------------------------------------------------CODIGO----------------------------------------------------
    while (fila <= radio) {
        columna = -radio;
        while (columna <= radio) {
            int distancia = fila * fila + columna * columna;
            if (distancia <= radio * radio) {
                if( primo == 1 ){
                    printf("2\t");
                    primo++;
                } else {
                    while( booleanoPrimo == 0 )
                {
                    primo++;
                    l = 2;
                    while( l < primo )
                    {
                        if( primo % l == 0 )
                        {
                            booleanoPrimo = 0;
                            break;
                        }
                        else
                        {
                            booleanoPrimo = 1;
                        }
                        l++;
                    }
                }
                    printf("%d\t", primo);
                    booleanoPrimo = 0;
                }
            } else {
                printf("\t");
            }
            columna++;
        }
        printf("\n");
        fila++;
    }

    return 0;
}
