#include <stdio.h>

int esDigito(char caracter){
    if (caracter >= 48 && caracter <= 57)
        return 1;
    else
        return 0;  
}

int main()
{
    char caracter;
    printf("Introduce un numero y te digo si es un digito:\n");
    scanf(" %c", &caracter);
    printf("1- es digitio\n2- no es digito\nTu resultado: %d", esDigito(caracter));
    return 0;
}
