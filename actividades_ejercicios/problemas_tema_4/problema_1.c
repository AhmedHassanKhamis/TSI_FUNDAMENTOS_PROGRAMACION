#include <stdio.h>

char siguienteLetra(char n){
    char resultado;
    resultado = n + 1;
    return resultado;
}

int main()
{
    char letra;
    printf("Introduce una letra y te doy la siguiente:\n");
    scanf(" %c", &letra);
    printf("La siguiente letra es: %c", siguienteLetra(letra));
    return 0;
}

