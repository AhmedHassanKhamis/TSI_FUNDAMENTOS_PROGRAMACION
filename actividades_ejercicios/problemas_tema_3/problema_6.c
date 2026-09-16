#include <stdio.h>

int main()
{
    printf("Programa que imprime la tabla de multiplicar del numero introducido por teclado\n");
    int numero;
    do
    {
        printf("Introduce un numero del 1 al 9:\n");
        scanf("%d", &numero);
    } while (numero < 0 || numero > 9);
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", i, numero, i * numero);
    }
    
    return 0;
}
