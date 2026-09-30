#include <stdio.h>

int main()
{
    char caracter;
    do
    {
      printf("\n\nIntroduce un caracter en minuscula y te doy su mayuscula\n(si introduces algo que no es mayuscula te volvere a preguntar):");
      scanf(" %c", &caracter);
    } while (122 < caracter || caracter < 97);
    printf("Tu caracter en mayuscula es: %c", caracter - 32);
    
    return 0;
}
