#include <stdio.h>

int main()
{
    float metros, centimetros;
    printf("El convertidor de metros a centimetros\n");
    printf("Introdude una distancia en metros:\n");
    scanf("%f", &metros);
    centimetros = metros * 100;
    printf("La distancia introducida en centimetros es: %f\n", centimetros);
    return 0;
}
