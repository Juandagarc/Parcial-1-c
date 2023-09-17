#include <stdio.h>
#include <stdlib.h>  // Para system("clear")
#include <unistd.h>  // Para usleep

int main() {
    int numRebotes;

    printf("¿Cuántas veces desea que rebote la pelota? ");
    scanf("%d", &numRebotes);

    for(int j = 0; j < numRebotes; j++) {

        for (int i = 0; i < 3; i++) {
            system("clear");  // Limpia la pantalla (funciona en sistemas UNIX/Linux, usa "cls" en Windows)

            // Imprime la parte superior de la pelota
            printf("╔═══╗\n");

            if ( i == 0){
                printf("║   ║\n");
                printf("║ ☺ ║\n");
            }

            if ( i == 1){
                printf("║ ☺ ║\n");
                printf("║   ║\n");
            }

            if ( i == 2){
                printf("║   ║\n");
                printf("║ ☺ ║\n");
            }
            printf("╚═══╝\n");

            // Espera un momento antes de borrar la pantalla y continuar
            usleep(500000);  // Espera 0.5 segundos (usa #include <unistd.h> para usar usleep)
        }
    }
    return 0;
}
