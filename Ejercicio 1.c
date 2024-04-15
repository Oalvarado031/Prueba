#include <stdio.h>

// Función para calcular el cubo de un número
int cubo(int num) {
    return num * num * num;
}

int main() {
    int numero;

    // Solicitar al usuario que ingrese un número
    printf("Ingresa un numero: ");
    scanf("%d", &numero);

    // Calcular y mostrar el cubo del número
    printf("El cubo de %d es %d\n", numero, cubo(numero));

    return 0;
}
