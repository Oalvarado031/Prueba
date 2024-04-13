//Leer dos numeros, mostrar el primer número elevado a la 4 potencia y el segundo número elevado al cuadrado.

#include <stdio.h>
#include <math.h>

int main(){
    float primer_numero, segundo_numero;

    printf("\nEscribe el primer numero: ");
    scanf("%f", &primer_numero);
    printf("Escribe el segundo numero: ");
    scanf("%f", &segundo_numero);

    printf("\nEl primer numero elevado a la 4 potencia es: %.f\n",pow(primer_numero,4));
    printf("El segundo numero elevado al cuadrado es: %.f\n", pow(primer_numero,2));

    return 0;
}

