#include <stdio.h>

int main()
{
    int numX,numY;
    
    printf("Introduce el tamanio en X:\n");
    scanf("%d", &numX);
    printf("Introduce el tamanio en Y:\n");
    scanf("%d", &numY);
    for (int i = 1; i <= numY; i++)
    {
        for (int j = 1; j <= numX; j++)
        {
            if (i == 1 || i == numY)
            {
                printf("X");    
            }else if(i != 1 && i != numY && j == 1 || j == numX)
            {
                printf("X");
            }else
            {
                printf(" ");
            }
                       
        }
        printf("\n");
    }
    return 0;
}
