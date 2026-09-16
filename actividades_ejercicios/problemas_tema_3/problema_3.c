#include <stdio.h>

int main()
{
    
    int numero,esnegativo;
    printf("programa que introduces un numero entero y te dice su valor absoluto\n");
    printf("Introduce el numero:\n");
    scanf("%d", &numero);
    if (numero < 0)
    {
        printf("El valor absoluto de tu numero es: %d", numero * -1);
    }else{
        printf("El valor absoluto de tu numero es: %d", numero);
    }
    return 0;
}
