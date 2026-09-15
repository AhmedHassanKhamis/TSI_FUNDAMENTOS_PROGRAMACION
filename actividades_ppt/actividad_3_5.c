#include <stdio.h>

int main()
{
    int num,resultado;
    do{
        printf("Introduce un numero:\n");
        scanf("%d", &num);
        for (int i = num; i >= 1; i--)
        {
            resultado*=i;
        }   
        printf("El factorial de %d es: %d\n",num, resultado);
    }while (num > 0);
    return 0;
}
