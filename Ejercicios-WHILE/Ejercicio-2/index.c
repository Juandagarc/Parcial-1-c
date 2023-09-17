//Presentado por: Juan David García Arce

#include <stdio.h>

int main () {

    //----------------------------------------------------ENUNCIADO----------------------------------------------------
    // Realizar un programa que reciba números por teclado, reste los pares, sume los impares y acabe cuando se ingrese un
    // primo, debe ir imprimiendo todo el proceso y acabar con el resultado y contar cuántos números se operaron al final.

    //----------------------------------------------------VARIABLES----------------------------------------------------
    int numero = 0;
    int suma = 0;
    int resta = 0;
    int primo = 0;
    int i = 0;

    //----------------------------------------------------CODIGO----------------------------------------------------

    //Se pide un numero en bucle hasta que se ingrese un primo

    while (primo == 0) {
        printf("Ingrese un numero: ");
        scanf("%d", &numero);
 
        //Se verifica si el numero es primo con while
        i = 2;
        while (i < numero) {
            if (numero % i == 0) {
                primo = 0;
                break;
            } else {
                primo = 1;
            }
            i++;
        }

        //Se verifica si el numero es par o impar
        if (numero % 2 == 0) {
            resta -= numero;
        } else {
            suma += numero;
        }
    }
    printf("La suma de los impares es: %d\n", suma);
    printf("La resta de los pares es: %d\n", resta);

    return 0;
}
