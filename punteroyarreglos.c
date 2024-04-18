#include <stdio.h>

int main() {
    int arr[5] = {10, 20, 30, 40, 50}; // Declaración e inicialización de un arreglo de enteros

    // Uso del nombre del arreglo como un puntero
    printf("El primer elemento del arreglo es: %d\n", *arr); // Imprime el primer elemento del arreglo

    // Acceso a los elementos del arreglo mediante punteros
    printf("Los elementos del arreglo son: ");
    for (int i = 0; i < 5; i++) {
        printf("%d ", *(arr + i)); // Imprime cada elemento del arreglo
    }
    printf("\n");

    return 0;
}
