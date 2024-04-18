#include <stdio.h>

// Funcion para intercambiar los valores de dos variables usando punteros
void swap(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int a = 5;
    int b = 10;

    printf("Antes del intercambio:\n");
    printf("a = %d, b = %d\n", a, b);

    // Llamada a la función swap con los punteros de 'a' y 'b'
    swap(&a, &b);

    printf("Después del intercambio:\n");
    printf("a = %d, b = %d\n", a, b);

    return 0;
}
