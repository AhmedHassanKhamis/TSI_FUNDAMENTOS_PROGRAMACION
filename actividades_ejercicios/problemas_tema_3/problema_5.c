#include <stdio.h>

int main()
{
    printf("Programa que imprime los caracteres ascii del 32 al 255");
    for (int i = 32; i <= 255; i++)
    {
        printf("%c\n", i);
    }
    return 0;
}
