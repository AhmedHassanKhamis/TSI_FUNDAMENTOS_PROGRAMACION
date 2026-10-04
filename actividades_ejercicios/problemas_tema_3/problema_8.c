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

// #include <stdio.h>

// int main()
// {
//     int numAristasX,numAristasY;
//     printf("Bienvenido al dibujador de rectangulos/cuadrados\n");
//     printf("Introduce el numero de ancho que tendran las aristas del cubo:\n");
//     scanf("%d", &numAristasX);
//     printf("Introduce el numero de largo que tendran las aristas del cubo:\n");
//     scanf("%d", &numAristasY);
//     for (int i = 1; i <= numAristasY; i++)
//     {
//         for (int j = 0; j < numAristasX; j++)
//         {
//             if ((i > 0 && i < numAristasY && (j == 0 || j == numAristasX -1)))
//             {
//                 printf("X");
//             }else if(i == 1 || i == numAristasY)
//             {
//                 printf("X");
//             }else{
//                 printf(" ");
//             }
//         }
//         printf("\n");
//     }
    
//     return 0;
// }
