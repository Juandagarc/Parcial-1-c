//Presentado por: Juan David García Arce

#include <stdio.h>
#include <stdlib.h>

int main (){
    //----------------------------------------------------ENUNCIADO----------------------------------------------------

    // Realizar un programa que SOLAMENTE utilizando if, printf y scanf y realizando máximo 7 preguntas de si o no pueda adivinar en qué animal de una
    // lista de 10 animales está pensando el usuario () sin preguntar directamente si es ese animal. 


    //----------------------------------------------------VARIABLES----------------------------------------------------

    //Se definen los animales.
    // - perro				-  pez
    // - gato				-  gallina
    // - caballo			-  pulpo
    // - vaca				-  cangrejo
    // - cerdo			    -  aguila

    //Si es de consumo en colombia (no cuenta la comida del mar):
    int comida = 0;
    //Si es un animal crustaceo o tiene tentaculos:
    int crustaceo = 0;
    //Si tiene pinzas o pelaje:
    int pinzas = 0;
    //Si es cuadrúpedo o posee plumas:
    int cuadrupedo = 0;
    //Si es acuático:
    int acuatico = 0;
    //Si posee manchas o "posee nueve vidas":
    int manchas = 0;
    //Si es comúnmente denominado "el mejor amigo del hombre" o puede volar grandes distancias:
    int amigo = 0;

    //----------------------------------------------------CODIGO----------------------------------------------------


    //Se Muestra la lista de animales
    printf("Lista de animales:\n");
    printf("- perro\t\t-pez\n");
    printf("- gato\t\t-gallina\n");
    printf("- caballo\t-pulpo\n");
    printf("- vaca\t\t-cangrejo\n");
    printf("- cerdo\t\t-aguila\n");

    //Se realiza la primera pregunta
    printf("¿Su animal se consume en colombia (no cuenta la comida del mar) o posee tentaculos?\n");
    printf("1. Si\n");
    printf("2. No\n");
    scanf("%d", &comida);

    //Se realiza la segunda pregunta
    printf("¿Su es un animal crustaceo o posee plumas?\n");
    printf("1. Si\n");
    printf("2. No\n");
    scanf("%d", &crustaceo);
    //Se realiza la tercera pregunta
    printf("¿Su animal tiene pinzas o pelaje?\n");
    printf("1. Si\n");
    printf("2. No\n");
    scanf("%d", &pinzas);

    //Se realiza la cuarta pregunta
    printf("¿Su animal es cuadrúpedo?\n");
    printf("1. Si\n");
    printf("2. No\n");
    scanf("%d", &cuadrupedo);

    //Se realiza la quintaa pregunta
    printf("¿Su animal es acuático?\n");
    printf("1. Si\n");
    printf("2. No\n");
    scanf("%d", &acuatico);

    //Se realiza la sexta pregunta
    printf("¿Su animal posee manchas (no cuentan: Perros, gatos, caballos, peces y cerdos) o 'posee nueve vidas'?\n");
    printf("1. Si\n");
    printf("2. No\n");
    scanf("%d", &manchas);

    //Se realiza la septima pregunta
    printf("¿Su animal es comúnmente denominado 'el mejor amigo del hombre' o puede volar grandes distancias?\n");
    printf("1. Si\n");
    printf("2. No\n");
    scanf("%d", &amigo);

    //Se realiza la comparacion de las respuestas con los animales

    //Si es un perro

    if (comida == 2 && pinzas == 1 && cuadrupedo == 1 && acuatico == 2 && manchas == 2 && amigo == 1){
        printf("Su animal es un perro\n");
    }

    //Si es un gato

    else if (comida == 2 && pinzas == 1 && cuadrupedo == 1 && acuatico == 2 && manchas == 1 && amigo == 2){
        printf("Su animal es un gato\n");
    }

    //Si es un caballo

    else if (comida == 2 && pinzas == 1 && cuadrupedo == 1 && acuatico == 2 && manchas == 2 && amigo == 2){
        printf("Su animal es un caballo\n");
    }

    //Si es una vaca

    else if (comida == 1 && pinzas == 1 && cuadrupedo == 1 && acuatico == 2 && manchas == 1 && amigo == 2){
        printf("Su animal es una vaca\n");
    }

    //Si es un cerdo

    else if (comida == 1 && pinzas == 2 && cuadrupedo == 1 && acuatico == 2 && manchas == 2 && amigo == 2){
        printf("Su animal es un cerdo\n");
    }

    //Si es un pez

    else if (comida == 2 && pinzas == 2 && cuadrupedo == 2 && acuatico == 1 && manchas == 2 && amigo == 2){
        printf("Su animal es un pez\n");
    }

    //Si es una gallina

    else if (comida == 1 && pinzas == 2 && cuadrupedo == 2 && acuatico == 2 && manchas == 2 && amigo == 2 && crustaceo == 1){
        printf("Su animal es una gallina\n");
    }

    //Si es un pulpo

    else if (comida == 1 && pinzas == 2 && cuadrupedo == 2 && acuatico == 1 && manchas == 2 && amigo == 2){
        printf("Su animal es un pulpo\n");
    }

    //Si es un cangrejo

    else if (comida == 2 && pinzas == 1 && cuadrupedo == 2 && acuatico == 1 && manchas == 2 && amigo == 2 && crustaceo == 1){
        printf("Su animal es un cangrejo\n");
    }

    //Si es un aguila

    else if (comida == 2 && pinzas == 2 && cuadrupedo == 2 && acuatico == 2 && manchas == 2 && amigo == 1 && crustaceo == 1){
        printf("Su animal es un aguila\n");
    }

    //Si no es ninguno de los anteriores

    else{
        printf("No se ha encontrado su animal\n");
    }


    return 0;
}