#include <stdio.h>

char minusculaMayuscula(char caracter){
    char resultado;
    if (caracter >= 65  && caracter <= 90)
    {
        resultado = caracter + 32; 
    }else if (caracter >=97 && caracter <= 127 )
    {
        resultado = caracter - 32;
    }else
    {
        resultado = '*';
    }
    return resultado;    
}


int main()
{
    char caracter;
    printf("Introduce una letra y te devuelvo su mayuscula o minuscula:\n");
    scanf(" %c", &caracter);
    printf("\nTu letra en min/max es: %c", minusculaMayuscula(caracter));
    return 0;
}
