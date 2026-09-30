#include <stdio.h>

int main()
{
    int alto=0;
    printf("Introduce la altura del triangulo rectangulo:\n");
    scanf("%d", &alto);

    for (int i = alto; i >= 1; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("X");
        }
        printf("\n");
    }
    return 0;
}
