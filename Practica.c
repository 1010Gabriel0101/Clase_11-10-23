#include <stdio.h>
#include <stdlib.h>

int main() {
    int *string;
    int i, tam, opcion, j, temp;
    printf("Introduce cuántos elementos tendrá el arreglo: ");
    scanf("%d", &tam);
    string = malloc(tam * sizeof(int)); 

    for (i = 0; i < tam; i++) {
        printf("Ingresa el valor: ");
        scanf("%d", &string[i]);
    }

    printf("Selecciona cómo quieres ordenarlo:\n");
    printf("1. De Mayor a Menor\n");
    printf("2. De Menor a Mayor\n");
    printf("3. Salir\n");
    scanf("%d", &opcion);

    switch (opcion) { 
        case 1:
            for (i = 0; i < tam - 1; i++) {
                for (j = 0; j < tam - i - 1; j++) {
                    if (string[j] < string[j + 1]) {
                        temp = string[j];
                        string[j] = string[j + 1];
                        string[j + 1] = temp;
                    }
                }
            }
            break; 
        case 2: 
            for (i = 0; i < tam - 1; i++) {
                for (j = 0; j < tam - i - 1; j++) {
                    if (string[j] > string[j + 1]) {
                        temp = string[j];
                        string[j] = string[j + 1];
                        string[j + 1] = temp;
                    }
                }
            }
            break; 
        default: 
            printf("Opción Inválida\n");
    }

    printf("Arreglo ordenado: ");
    for (i = 0; i < tam; i++) {
        printf("%d ", string[i]);
    }
    printf("\n");

    free(string); 

    return 0;
}
