/*Leer el nombre de una persona e imprimir: Hola nombrePersona*/

#include<stdio.h>

int main(int argc, char const *argv[])
{
    char nom[30];
    char ape[30];
    printf("dime tu nombre");
    scanf ("%s", nom);
    printf("dime tu apellido");
    scanf ("%s", ape);
    printf("Hola %s %s",nom ,ape);
    return 0;
}
