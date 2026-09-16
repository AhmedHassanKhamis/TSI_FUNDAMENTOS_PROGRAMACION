#include <stdio.h>

int main()
{
    int numAristasX,numAristasY;
    printf("Bienvenido al dibujador de rectangulos/cuadrados\n");
    printf("Introduce el numero de ancho que tendran las aristas del cubo:\n");
    scanf("%d", &numAristasX);
    printf("Introduce el numero de largo que tendran las aristas del cubo:\n");
    scanf("%d", &numAristasY);
    for (int i = 1; i <= numAristasY; i++)
    {
        for (int j = 0; j < numAristasX; j++)
        {
           printf("X");
        }
        printf("\n");
    }
    
    return 0;
}
