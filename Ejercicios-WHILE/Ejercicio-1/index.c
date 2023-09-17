//Presentado por: Juan David García Arce

#include <stdio.h>

int main () {

    //----------------------------------------------------ENUNCIADO----------------------------------------------------
    // Realizar una carita feliz de varios colores utilizando el símbolo "■" (Alt + 254) como se muestra en el dibujo:
    // ■■■■■■■■■■■■■
    // ■■■■□□□□□■■■■
    // ■■□□□□□□□□□■■  
    // ■□□□■□□□■□□□■
    // ■□□□□□□□□□□□■
    // ■□□■□□□□□■□□■
    // ■■□□■■■■■□□■■
    // ■■■■□□□□□■■■■
    // ■■■■■■■■■■■■■

    //----------------------------------------------------VARIABLES-------------------------------------------------
    int size;
    
    //----------------------------------------------------CODIGO----------------------------------------------------
    // Solicitamos al usuario el tamaño deseado
    printf("Ingrese el tamaño de la carita feliz: ");
    scanf("%d", &size);

    // Verificamos que el tamaño sea al menos 3
    if (size < 3) {
        printf("El tamaño debe ser al menos 3.\n");
        return 1; // Salir del programa con un código de error
    }

    // Dibujo de la carita feliz
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            if(( i == ((size/2)-2) && j == 2) || (i == ((size/2)-2) && j == (size -3)) || (i == ((size/2)+1) && j >= 2 && j <= (size-3)) || (i == (size/2) && j == (size-2)) || (i == (size/2) && j == 1 )){
                printf("■");
                } else
                if (((i == 0 && j >= 2 && j <= size - 3) ||
                    (i == 1 && j >= 1 && j <= size - 2) ||
                    (i >= 2 && i <= size - 3 && j >= 0 && j < size) ||
                    (i == size - 2 && j >= 1 && j <= size - 2) ||
                    (i == size - 1 && j >= 2 && j <= size - 3))) {
                    printf("□");
                } else {
                    printf("■");
                }
        }
        printf("\n");
    }



    return 0;
}