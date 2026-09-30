#include <stdio.h>

int main()
{
    float base, altura;
    printf("Bienvenido al calculador de areas de triangulo!\n");
    printf("Introduce la base del triangulo:\n");
    scanf("%f", &base);
    printf("Introduce la altura del triangulo:\n");
    scanf("%f", &altura);
    printf("El area del triangulo es:\n%f", base * altura);
    return 0;
}
