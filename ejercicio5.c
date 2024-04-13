#include <stdio.h>
int main(int argc, char const *argv[])
{
    /*Descuento del 15%*/
    float precioOriginal;
    float descuento;
    float precioFinal;

    printf("Ingrese el precio del producto \n");
    scanf("%f", &precioOriginal);
    descuento = precioOriginal * 0.15;
    precioFinal = precioOriginal - descuento;
    printf("El precio original del producto es: %.2f\n", precioOriginal);
    printf("El descuento equivale a: %.2f\n", descuento);
    printf("El precio final del producto es: %.2f\n", precioFinal);

    return 0;
}