#include <stdio.h>

int main()
{
    int numAristasY;
    printf("Bienvenido al dibujador de triangulo rectangulo\n");
    printf("Introduce el numero de largo que tendran las aristas del cubo:\n");
    scanf("%d", &numAristasY);
    for (int i = 1; i <= numAristasY; i++)
    {
        for (int j = 0; j < i; j++)
        {
           printf("X");
        }
        printf("\n");
    }
    
    return 0;
}
