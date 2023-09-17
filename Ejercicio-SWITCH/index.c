//Presentado por: Juan David García Arce

#include <stdio.h>
#include <stdlib.h>
//Se define el color azul
#define ANSI_COLOR_BLUE    "\x1b[34m"
//Se define el color rojo
#define ANSI_COLOR_RED     "\x1b[31m"
//Se reinicia el color
#define ANSI_COLOR_RESET   "\x1b[0m"

int main (){

    //----------------------------------------------------ENUNCIADO----------------------------------------------------
    // Realizar un programa que SOLAMENTE utilizando switch, printf y scanf muestre una palabra en español en color azul con
    // la cantidad de letras que el usuario elija entre 4 y 10 que empiece con la vocal que el usuario decida (sin importar
    // si la ingresa en mayuscula o minuscula), en caso de que el usuario ingrese una opción inválida muestre en rojo “opción
    // inválida, ¿Desea intentar de nuevo?” Dando hasta 3 intentos.

    //----------------------------------------------------VARIABLES----------------------------------------------------

    int cantidadLetras = 0;
    char vocal;
    int intentos = 1;
    int intentosVocal = 1;

    //----------------------------------------------------CODIGO----------------------------------------------------

    //Se pregunta la cantidad de letras
    printf("Por favor escoja la cantidad de letras que tendrá su palabra: \n");
    scanf("%d", &cantidadLetras);


    //NOTA: Esta es la logica de los intentos de la cantidad de letras, el programa se finaliza si se ingresan 3 veces una opcion invalida.
    switch (cantidadLetras)
    {
        case 4:
            break;
        case 5:
            break;
        case 6:
            break;
        case 7:
            break;
        case 8:
            break;
        case 9:
            break;
        case 10:
            break;

        default:
            getchar();
            printf(ANSI_COLOR_RED "Opción invalida, intente de nuevo (%d)\n" ANSI_COLOR_RESET, intentos);
            printf("Por favor escoja la cantidad de letras que tendrá su palabra: \n");
            scanf("%d", &cantidadLetras);
            switch (cantidadLetras)
            {
                case 4:
                    break;
                case 5:
                    break;
                case 6:
                    break;
                case 7:
                    break;
                case 8:
                    break;
                case 9:
                    break;
                case 10:
                    break;

                default:
                    getchar();
                    intentos++;
                    printf(ANSI_COLOR_RED "Opción invalida, intente de nuevo (%d)\n" ANSI_COLOR_RESET, intentos);
                    printf("Por favor escoja la cantidad de letras que tendrá su palabra: \n");
                    scanf("%d", &cantidadLetras);
                    switch (cantidadLetras)
                    {
                        case 4:
                            break;
                        case 5:
                            break;
                        case 6:
                            break;
                        case 7:
                            break;
                        case 8:
                            break;
                        case 9:
                            break;
                        case 10:
                            break;

                        default:
                            getchar();
                            intentos++;
                            printf(ANSI_COLOR_RED "Opción invalida, Juego finalizado (%d).\n" ANSI_COLOR_RESET, intentos);
                            exit(-1);
                            break;
                    }
                    break;
            }
            break;

    }


    //NOTA: Esta es la logica de los intentos de la vocal, el programa se finaliza si se ingresan 3 veces una opcion invalida.
            //Ademas, el programa extiende demasiado las lineas de codigo ya que solo se puede utilizar switch, printf y scanf.
            //Esto se podria hacer mucho mas corto con if, else if y else.

    switch (cantidadLetras)
    {
    //--------------------Caso 4--------------------
    case 4:
        getchar();
        //Se pregunta la vocal
        printf("Por favor escoja la letra inicial:\n");
        scanf("%c", &vocal);
        switch (vocal)
        {
        case 'a':
            printf(ANSI_COLOR_BLUE "azul\n" ANSI_COLOR_RESET);
            break;
        case 'A':
            printf(ANSI_COLOR_BLUE "azul\n" ANSI_COLOR_RESET);
            break;
        default:
            getchar();
            printf(ANSI_COLOR_RED "Opción invalida, intente de nuevo (%d)\n" ANSI_COLOR_RESET, intentosVocal);
            printf("Por favor escoja la letra inicial:\n");
            scanf("%c", &vocal);
            switch (vocal)
            {
            case 'a':
                printf(ANSI_COLOR_BLUE "azul\n" ANSI_COLOR_RESET);
                break;
            case 'A':
                printf(ANSI_COLOR_BLUE "azul\n" ANSI_COLOR_RESET);
                break;
            default:
                getchar();
                intentosVocal++;
                printf(ANSI_COLOR_RED "Opción invalida, intente de nuevo (%d)\n" ANSI_COLOR_RESET, intentosVocal);
                printf("Por favor escoja la letra inicial:\n");
                scanf("%c", &vocal);
                switch (vocal)
                {
                case 'a':
                    printf(ANSI_COLOR_BLUE "azul\n" ANSI_COLOR_RESET);
                    break;
                case 'A':
                    printf(ANSI_COLOR_BLUE "azul\n" ANSI_COLOR_RESET);
                    break;
                default:
                    getchar();
                    intentosVocal++;
                    printf(ANSI_COLOR_RED "Opción invalida, Juego finalizado (%d).\n" ANSI_COLOR_RESET, intentosVocal);
                    break;
                }
                break;
            }
            break;
        }
        break;
    //--------------------Caso 5--------------------
        case 5:
        getchar();
        //Se pregunta la vocal
        printf("Por favor escoja la letra inicial:\n");
        scanf("%c", &vocal);
        switch (vocal)
        {
        case 'e':
            printf(ANSI_COLOR_BLUE "enter\n" ANSI_COLOR_RESET);
            break;
        case 'E':
            printf(ANSI_COLOR_BLUE "enter\n" ANSI_COLOR_RESET);
            break;
        default:
            getchar();
            printf(ANSI_COLOR_RED "Opción invalida, intente de nuevo (%d)\n" ANSI_COLOR_RESET, intentosVocal);
            printf("Por favor escoja la letra inicial:\n");
            scanf("%c", &vocal);
            switch (vocal)
            {
            case 'e':
                printf(ANSI_COLOR_BLUE "enter\n" ANSI_COLOR_RESET);
                break;
            case 'E':
                printf(ANSI_COLOR_BLUE "enter\n" ANSI_COLOR_RESET);
                break;
            default:
                getchar();
                intentosVocal++;
                printf(ANSI_COLOR_RED "Opción invalida, intente de nuevo (%d)\n" ANSI_COLOR_RESET, intentosVocal);
                printf("Por favor escoja la letra inicial:\n");
                scanf("%c", &vocal);
                switch (vocal)
                {
                case 'e':
                    printf(ANSI_COLOR_BLUE "enter\n" ANSI_COLOR_RESET);
                    break;
                case 'E':
                    printf(ANSI_COLOR_BLUE "enter\n" ANSI_COLOR_RESET);
                    break;
                default:
                    getchar();
                    intentosVocal++;
                    printf(ANSI_COLOR_RED "Opción invalida, Juego finalizado (%d).\n" ANSI_COLOR_RESET, intentosVocal);
                    break;
                }
                break;
            }
            break;
        }
        break;
    //--------------------Caso 6--------------------
        case 6:
        getchar();
        //Se pregunta la vocal
        printf("Por favor escoja la letra inicial:\n");
        scanf("%c", &vocal);
        switch (vocal)
        {
        case 'i':
            printf(ANSI_COLOR_BLUE "indice\n" ANSI_COLOR_RESET);
            break;
        case 'I':
            printf(ANSI_COLOR_BLUE "indice\n" ANSI_COLOR_RESET);
            break;
        default:
            getchar();
            printf(ANSI_COLOR_RED "Opción invalida, intente de nuevo (%d)\n" ANSI_COLOR_RESET, intentosVocal);
            printf("Por favor escoja la letra inicial:\n");
            scanf("%c", &vocal);
            switch (vocal)
            {
            case 'i':
                printf(ANSI_COLOR_BLUE "indice\n" ANSI_COLOR_RESET);
                break;
            case 'I':
                printf(ANSI_COLOR_BLUE "indice\n" ANSI_COLOR_RESET);
                break;
            default:
                getchar();
                intentosVocal++;
                printf(ANSI_COLOR_RED "Opción invalida, intente de nuevo (%d)\n" ANSI_COLOR_RESET, intentosVocal);
                printf("Por favor escoja la letra inicial:\n");
                scanf("%c", &vocal);
                switch (vocal)
                {
                case 'i':
                    printf(ANSI_COLOR_BLUE "indice\n" ANSI_COLOR_RESET);
                    break;
                case 'I':
                    printf(ANSI_COLOR_BLUE "indice\n" ANSI_COLOR_RESET);
                    break;
                default:
                    getchar();
                    intentosVocal++;
                    printf(ANSI_COLOR_RED "Opción invalida, Juego finalizado (%d).\n" ANSI_COLOR_RESET, intentosVocal);
                    break;
                }
                break;
            }
            break;
        }
        break;
    //--------------------Caso 7--------------------
        case 7:
        getchar();
        //Se pregunta la vocal
        printf("Por favor escoja la letra inicial:\n");
        scanf("%c", &vocal);
        switch (vocal)
        {
        case 'i':
            printf(ANSI_COLOR_BLUE "indices\n" ANSI_COLOR_RESET);
            break;
        case 'I':
            printf(ANSI_COLOR_BLUE "indices\n" ANSI_COLOR_RESET);
            break;
        default:
            getchar();
            printf(ANSI_COLOR_RED "Opción invalida, intente de nuevo (%d)\n" ANSI_COLOR_RESET, intentosVocal);
            printf("Por favor escoja la letra inicial:\n");
            scanf("%c", &vocal);
            switch (vocal)
            {
            case 'i':
                printf(ANSI_COLOR_BLUE "indices\n" ANSI_COLOR_RESET);
                break;
            case 'I':
                printf(ANSI_COLOR_BLUE "indices\n" ANSI_COLOR_RESET);
                break;
            default:
                getchar();
                intentosVocal++;
                printf(ANSI_COLOR_RED "Opción invalida, intente de nuevo (%d)\n" ANSI_COLOR_RESET, intentosVocal);
                printf("Por favor escoja la letra inicial:\n");
                scanf("%c", &vocal);
                switch (vocal)
                {
                case 'i':
                    printf(ANSI_COLOR_BLUE "indices\n" ANSI_COLOR_RESET);
                    break;
                case 'I':
                    printf(ANSI_COLOR_BLUE "indices\n" ANSI_COLOR_RESET);
                    break;
                default:
                    getchar();
                    intentosVocal++;
                    printf(ANSI_COLOR_RED "Opción invalida, Juego finalizado (%d).\n" ANSI_COLOR_RESET, intentosVocal);
                    break;
                }
                break;
            }
            break;
        }
        break;
        //--------------------Caso 8--------------------
        case 8:
        getchar();
        //Se pregunta la vocal
        printf("Por favor escoja la letra inicial:\n");
        scanf("%c", &vocal);
        switch (vocal)
        {
        case 'e':
            printf(ANSI_COLOR_BLUE "escapada\n" ANSI_COLOR_RESET);
            break;
        case 'E':
            printf(ANSI_COLOR_BLUE "escapada\n" ANSI_COLOR_RESET);
            break;
        default:
            getchar();
            printf(ANSI_COLOR_RED "Opción invalida, intente de nuevo (%d)\n" ANSI_COLOR_RESET, intentosVocal);
            printf("Por favor escoja la letra inicial:\n");
            scanf("%c", &vocal);
            switch (vocal)
            {
            case 'e':
                printf(ANSI_COLOR_BLUE "escapada\n" ANSI_COLOR_RESET);
                break;
            case 'E':
                printf(ANSI_COLOR_BLUE "escapada\n" ANSI_COLOR_RESET);
                break;
            default:
                getchar();
                intentosVocal++;
                printf(ANSI_COLOR_RED "Opción invalida, intente de nuevo (%d)\n" ANSI_COLOR_RESET, intentosVocal);
                printf("Por favor escoja la letra inicial:\n");
                scanf("%c", &vocal);
                switch (vocal)
                {
                case 'e':
                    printf(ANSI_COLOR_BLUE "escapada\n" ANSI_COLOR_RESET);
                    break;
                case 'E':
                    printf(ANSI_COLOR_BLUE "escapada\n" ANSI_COLOR_RESET);
                    break;
                default:
                    getchar();
                    intentosVocal++;
                    printf(ANSI_COLOR_RED "Opción invalida, Juego finalizado (%d).\n" ANSI_COLOR_RESET, intentosVocal);
                    break;
                }
                break;
            }
            break;
        }
        break;
        //--------------------Caso 9--------------------
        case 9:
        getchar();
        //Se pregunta la vocal
        printf("Por favor escoja la letra inicial:\n");
        scanf("%c", &vocal);
        switch (vocal)
        {
        case 'a':
            printf(ANSI_COLOR_BLUE "aberturas\n" ANSI_COLOR_RESET);
            break;
        case 'A':
            printf(ANSI_COLOR_BLUE "aberturas\n" ANSI_COLOR_RESET);
            break;
        default:
            getchar();
            printf(ANSI_COLOR_RED "Opción invalida, intente de nuevo (%d)\n" ANSI_COLOR_RESET, intentosVocal);
            printf("Por favor escoja la letra inicial:\n");
            scanf("%c", &vocal);
            switch (vocal)
            {
            case 'a':
                printf(ANSI_COLOR_BLUE "aberturas\n" ANSI_COLOR_RESET);
                break;
            case 'A':
                printf(ANSI_COLOR_BLUE "aberturas\n" ANSI_COLOR_RESET);
                break;
            default:
                getchar();
                intentosVocal++;
                printf(ANSI_COLOR_RED "Opción invalida, intente de nuevo (%d)\n" ANSI_COLOR_RESET, intentosVocal);
                printf("Por favor escoja la letra inicial:\n");
                scanf("%c", &vocal);
                switch (vocal)
                {
                case 'a':
                    printf(ANSI_COLOR_BLUE "aberturas\n" ANSI_COLOR_RESET);
                    break;
                case 'A':
                    printf(ANSI_COLOR_BLUE "aberturas\n" ANSI_COLOR_RESET);
                    break;
                default:
                    getchar();
                    intentosVocal++;
                    printf(ANSI_COLOR_RED "Opción invalida, Juego finalizado (%d).\n" ANSI_COLOR_RESET, intentosVocal);
                    break;
                }
                break;
            }
            break;
        }
        break;
        //--------------------Caso 10--------------------
        case 10:
        getchar();
        //Se pregunta la vocal
        printf("Por favor escoja la letra inicial:\n");
        scanf("%c", &vocal);
        switch (vocal)
        {
        case 'u':
            printf(ANSI_COLOR_BLUE "utensilios\n" ANSI_COLOR_RESET);
            break;
        case 'U':
            printf(ANSI_COLOR_BLUE "utensilios\n" ANSI_COLOR_RESET);
            break;
        default:
            getchar();
            printf(ANSI_COLOR_RED "Opción invalida, intente de nuevo (%d)\n" ANSI_COLOR_RESET, intentosVocal);
            printf("Por favor escoja la letra inicial:\n");
            scanf("%c", &vocal);
            switch (vocal)
            {
            case 'u':
                printf(ANSI_COLOR_BLUE "utensilios\n" ANSI_COLOR_RESET);
                break;
            case 'U':
                printf(ANSI_COLOR_BLUE "utensilios\n" ANSI_COLOR_RESET);
                break;
            default:
                getchar();
                intentosVocal++;
                printf(ANSI_COLOR_RED "Opción invalida, intente de nuevo (%d)\n" ANSI_COLOR_RESET, intentosVocal);
                printf("Por favor escoja la letra inicial:\n");
                scanf("%c", &vocal);
                switch (vocal)
                {
                case 'u':
                    printf(ANSI_COLOR_BLUE "utensilios\n" ANSI_COLOR_RESET);
                    break;
                case 'U':
                    printf(ANSI_COLOR_BLUE "utensilios\n" ANSI_COLOR_RESET);
                    break;
                default:
                    getchar();
                    intentosVocal++;
                    printf(ANSI_COLOR_RED "Opción invalida, Juego finalizado (%d).\n" ANSI_COLOR_RESET, intentosVocal);
                    break;
                }
                break;
            }
            break;
        }
        break;
    }


    return 0;
}