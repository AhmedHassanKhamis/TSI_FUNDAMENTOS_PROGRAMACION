#include <stdio.h>

int main()
{
    float arista;
    printf("Calcular el volumen de un cubo introduciendo la arista\n");
    printf("Introduce la arista de un cubo:\n");
    scanf("%f", &arista);
    printf("El volumen del cubo es %f", arista * arista * arista);
    return 0;
}
