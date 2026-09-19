#include <stdio.h>

int main()
{
    char caracter;
    printf("Introduce un caracter y te lo transformo ('*' para parar el programa)\n");
    do
    {
        caracter = 0;
        printf("Introduce un caracter:\n");
        scanf(" %c", &caracter);
        if (97 <= caracter && caracter <= 122)
        {
            printf("Tu caracter en mayuscula es: %c\n", caracter - 32);
        }else if (65 <= caracter && caracter <= 89)
        {
            printf("Tu caracter en minuscula es: %c\n", caracter + 32);
        }else if (48 <= caracter && caracter <= 57)
        {
            printf("Tu caracter numerico se transforma en: %c\n", caracter + 80);
        }
    
    } while (caracter != '*');

    return 0;
}
