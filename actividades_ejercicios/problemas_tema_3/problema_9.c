#include <stdio.h>

int main()
{
    int numX,numY;
    
    printf("Introduce el tamanio en X:\n");
    scanf("%d", &numX);
    printf("Introduce el tamanio en Y:\n");
    scanf("%d", &numY);
    for (int i = 0; i < numY; i++)
    {
        for (int j = 0; j < numX; j++)
        {
            printf("X");
        }
        printf("\n");
    }
    return 0;
}
