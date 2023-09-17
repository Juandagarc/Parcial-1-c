//Presentado por Juan David García Arce

#include <stdio.h>

int main () {

    //----------------------------------------------------ENUNCIADO----------------------------------------------------
    // Realizar un programa que SOLAMENTE utilizando switch, if, for, printf, scanf y funciones matematicas muestre un menú
    // de comida con formato de tabla (utilizando \t) con mínimo 7 opciones y permite escoger la cantidad de opciones que el
    // usuario desee y la cantidad de cada platillo para dar el recibo final, adicional debe desglosar toda la factura y dar
    // la opción de dividirla para que cada persona pague una parte; se debe redondear para arriba en caso de que muestre
    // valores inválidos para la moneda colombiana.

    //----------------------------------------------------CODIGO----------------------------------------------------
    printf("+------------------------+-----------+\n");
    printf("|          MENU          |  Precio   |\n");
    printf("+------------------------+-----------+\n");
    printf("| 1. Hamburguesa        | $12000    |\n");
    printf("| 2. Perro              | $10000    |\n");
    printf("| 3. Arepa Burguer      | $14000    |\n");
    printf("| 4. Ensalada           | $8000     |\n");
    printf("| 5. Chuzo mixto        | $10000    |\n");
    printf("| 6. Chuzo de pollo     | $9000     |\n");
    printf("| 7. Chuzo de res       | $9000     |\n");
    printf("+------------------------+-----------+\n\n");

    printf("¿Cuantos platos desea pedir? ");
    int cantidadPlatos, total = 0;
    scanf("%d", &cantidadPlatos);

    for(int i = 0; i < cantidadPlatos; i++) {

            printf("+------------------------+-----------+\n");
            printf("|          MENU          |  Precio   |\n");
            printf("+------------------------+-----------+\n");
            printf("| 1. Hamburguesa        | $12000    |\n");
            printf("| 2. Perro              | $10000    |\n");
            printf("| 3. Arepa Burguer      | $14000    |\n");
            printf("| 4. Ensalada           | $8000     |\n");
            printf("| 5. Chuzo mixto        | $10000    |\n");
            printf("| 6. Chuzo de pollo     | $9000     |\n");
            printf("| 7. Chuzo de res       | $9000     |\n");
            printf("+------------------------+-----------+\n\n");

        printf("Ingrese el numero del plato %d: ", i + 1);
        int plato;
        scanf("%d", &plato);

        printf("Ingrese la cantidad del plato %d: ", i + 1);
        int cantidad;
        scanf("%d", &cantidad);

        switch(plato) {
            case 1:
                printf("Hamburguesa x %d: $%d\n", cantidad, cantidad * 12000);
                total += cantidad * 12000;
                break;
            case 2:
                printf("Perro x %d: $%d\n", cantidad, cantidad * 10000);
                total += cantidad * 10000;
                break;
            case 3:
                printf("Arepa Burguer x %d: $%d\n", cantidad, cantidad * 14000);
                total += cantidad * 14000;
                break;
            case 4:
                printf("Ensalada x %d: $%d\n", cantidad, cantidad * 8000);
                total += cantidad * 8000;
                break;
            case 5:
                printf("Chuzo mixto x %d: $%d\n", cantidad, cantidad * 10000);
                total += cantidad * 10000;
                break;
            case 6:
                printf("Chuzo de pollo x %d: $%d\n", cantidad, cantidad * 9000);
                total += cantidad * 9000;
                break;
            case 7:
                printf("Chuzo de res x %d: $%d\n", cantidad, cantidad * 9000);
                total += cantidad * 9000;
                break;
            default:
                printf("El plato %d no existe\n", plato);
                break;
        }
    }

    printf("El total a pagar es: $%d\n", total);
    printf("¿Cuantas personas van a pagar? ");
    int cantidadPersonas;
    scanf("%d", &cantidadPersonas);

    printf("Cada persona debe pagar: $%d\n", (total / cantidadPersonas));


    return 0;
}