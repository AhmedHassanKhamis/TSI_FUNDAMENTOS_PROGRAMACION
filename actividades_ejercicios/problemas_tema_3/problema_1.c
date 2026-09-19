#include <stdio.h>

int main()
{
    char caracter;
    printf("Introduce un caracter y te digo si es digito, letra minuscula, mayuscula u otro tipo de caracter:\n");    
    scanf("%c", &caracter);
    
    if ('a' <= caracter || caracter <= 'z')
    {
        printf("tu caracter es de tipo: letra minuscula");
    }
    else if ('A' <= caracter || caracter <= 'Z')
    {
        printf("tu caracter es de tipo: letra mayuscula");
    }else if ('0' <= caracter || caracter <= '9')
    {
        printf("tu caracter es de tipo: numero");
    }
    else
    {
        printf("tu caracter es de tipo: otro caracter");
    }
    return 0;
}
