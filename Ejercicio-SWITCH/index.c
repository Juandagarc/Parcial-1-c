//Presentado por: Juan David García Arce

#include <stdio.h>
#include <stdlib.h>

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
            printf("Opción invalida, intente de nuevo (%d)\n", intentos);
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
                    printf("Opción invalida, intente de nuevo (%d)\n", intentos);
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
                            printf("Opción invalida, Juego finalizado (%d).\n", intentos);
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
            printf("azul\n");
            break;
        case 'A':
            printf("azul\n");
            break;
        default:
            getchar();
            printf("Opción invalida, intente de nuevo (%d)\n", intentosVocal);
            printf("Por favor escoja la letra inicial:\n");
            scanf("%c", &vocal);
            switch (vocal)
            {
            case 'a':
                printf("azul\n");
                break;
            case 'A':
                printf("azul\n");
                break;
            default:
                getchar();
                intentosVocal++;
                printf("Opción invalida, intente de nuevo (%d)\n", intentosVocal);
                printf("Por favor escoja la letra inicial:\n");
                scanf("%c", &vocal);
                switch (vocal)
                {
                case 'a':
                    printf("azul\n");
                    break;
                case 'A':
                    printf("azul\n");
                    break;
                default:
                    getchar();
                    intentosVocal++;
                    printf("Opción invalida, Juego finalizado (%d).\n", intentosVocal);
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
            printf("enter\n");
            break;
        case 'E':
            printf("enter\n");
            break;
        default:
            getchar();
            printf("Opción invalida, intente de nuevo (%d)\n", intentosVocal);
            printf("Por favor escoja la letra inicial:\n");
            scanf("%c", &vocal);
            switch (vocal)
            {
            case 'e':
                printf("enter\n");
                break;
            case 'E':
                printf("enter\n");
                break;
            default:
                getchar();
                intentosVocal++;
                printf("Opción invalida, intente de nuevo (%d)\n", intentosVocal);
                printf("Por favor escoja la letra inicial:\n");
                scanf("%c", &vocal);
                switch (vocal)
                {
                case 'e':
                    printf("enter\n");
                    break;
                case 'E':
                    printf("enter\n");
                    break;
                default:
                    getchar();
                    intentosVocal++;
                    printf("Opción invalida, Juego finalizado (%d).\n", intentosVocal);
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
            printf("indice\n");
            break;
        case 'I':
            printf("indice\n");
            break;
        default:
            getchar();
            printf("Opción invalida, intente de nuevo (%d)\n", intentosVocal);
            printf("Por favor escoja la letra inicial:\n");
            scanf("%c", &vocal);
            switch (vocal)
            {
            case 'i':
                printf("indice\n");
                break;
            case 'I':
                printf("indice\n");
                break;
            default:
                getchar();
                intentosVocal++;
                printf("Opción invalida, intente de nuevo (%d)\n", intentosVocal);
                printf("Por favor escoja la letra inicial:\n");
                scanf("%c", &vocal);
                switch (vocal)
                {
                case 'i':
                    printf("indice\n");
                    break;
                case 'I':
                    printf("indice\n");
                    break;
                default:
                    getchar();
                    intentosVocal++;
                    printf("Opción invalida, Juego finalizado (%d).\n", intentosVocal);
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
            printf("indices\n");
            break;
        case 'I':
            printf("indices\n");
            break;
        default:
            getchar();
            printf("Opción invalida, intente de nuevo (%d)\n", intentosVocal);
            printf("Por favor escoja la letra inicial:\n");
            scanf("%c", &vocal);
            switch (vocal)
            {
            case 'i':
                printf("indices\n");
                break;
            case 'I':
                printf("indices\n");
                break;
            default:
                getchar();
                intentosVocal++;
                printf("Opción invalida, intente de nuevo (%d)\n", intentosVocal);
                printf("Por favor escoja la letra inicial:\n");
                scanf("%c", &vocal);
                switch (vocal)
                {
                case 'i':
                    printf("indices\n");
                    break;
                case 'I':
                    printf("indices\n");
                    break;
                default:
                    getchar();
                    intentosVocal++;
                    printf("Opción invalida, Juego finalizado (%d).\n", intentosVocal);
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
            printf("escapada\n");
            break;
        case 'E':
            printf("escapada\n");
            break;
        default:
            getchar();
            printf("Opción invalida, intente de nuevo (%d)\n", intentosVocal);
            printf("Por favor escoja la letra inicial:\n");
            scanf("%c", &vocal);
            switch (vocal)
            {
            case 'e':
                printf("escapada\n");
                break;
            case 'E':
                printf("escapada\n");
                break;
            default:
                getchar();
                intentosVocal++;
                printf("Opción invalida, intente de nuevo (%d)\n", intentosVocal);
                printf("Por favor escoja la letra inicial:\n");
                scanf("%c", &vocal);
                switch (vocal)
                {
                case 'e':
                    printf("escapada\n");
                    break;
                case 'E':
                    printf("escapada\n");
                    break;
                default:
                    getchar();
                    intentosVocal++;
                    printf("Opción invalida, Juego finalizado (%d).\n", intentosVocal);
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
            printf("aberturas\n");
            break;
        case 'A':
            printf("aberturas\n");
            break;
        default:
            getchar();
            printf("Opción invalida, intente de nuevo (%d)\n", intentosVocal);
            printf("Por favor escoja la letra inicial:\n");
            scanf("%c", &vocal);
            switch (vocal)
            {
            case 'a':
                printf("aberturas\n");
                break;
            case 'A':
                printf("aberturas\n");
                break;
            default:
                getchar();
                intentosVocal++;
                printf("Opción invalida, intente de nuevo (%d)\n", intentosVocal);
                printf("Por favor escoja la letra inicial:\n");
                scanf("%c", &vocal);
                switch (vocal)
                {
                case 'a':
                    printf("aberturas\n");
                    break;
                case 'A':
                    printf("aberturas\n");
                    break;
                default:
                    getchar();
                    intentosVocal++;
                    printf("Opción invalida, Juego finalizado (%d).\n", intentosVocal);
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
            printf("utensilios\n");
            break;
        case 'U':
            printf("utensilios\n");
            break;
        default:
            getchar();
            printf("Opción invalida, intente de nuevo (%d)\n", intentosVocal);
            printf("Por favor escoja la letra inicial:\n");
            scanf("%c", &vocal);
            switch (vocal)
            {
            case 'u':
                printf("utensilios\n");
                break;
            case 'U':
                printf("utensilios\n");
                break;
            default:
                getchar();
                intentosVocal++;
                printf("Opción invalida, intente de nuevo (%d)\n", intentosVocal);
                printf("Por favor escoja la letra inicial:\n");
                scanf("%c", &vocal);
                switch (vocal)
                {
                case 'u':
                    printf("utensilios\n");
                    break;
                case 'U':
                    printf("utensilios\n");
                    break;
                default:
                    getchar();
                    intentosVocal++;
                    printf("Opción invalida, Juego finalizado (%d).\n", intentosVocal);
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