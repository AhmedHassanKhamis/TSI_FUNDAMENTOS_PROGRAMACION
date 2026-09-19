#include <stdio.h>

int main()
{
    int veces,numero,suma=0,ninguno=1;
    printf("--------------------\n");
    printf("Introduce cuantas veces te solicito numeros, \
tu introduces dichos numeros \
y yo te digo si son la suma de los anteriores\n");
    printf("--------------------\n");
    printf("Introduce cuantas veces te pido un numero:\n");
    scanf("%d", &veces);
    for (int i = 0; i < veces; i++)
    {
        printf("Introduce un numero:\n");
        scanf("%d", &numero);
        if (numero == suma)
        {
            printf("El numero %d es la suma de todos los anteriores\n", numero);
            ninguno = 0;
        }
        suma += numero;
    }
    if (ninguno == 1)
    {
        printf("Ninguno fue la suma de los anteriores numeros");
    }
    
    return 0;
}
