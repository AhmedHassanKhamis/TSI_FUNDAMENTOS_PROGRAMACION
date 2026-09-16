#include <stdio.h>

int main()
{
    int numAristas;
    printf("Bienvenido al dibujador de cuadrados\n");
    printf("Introduce el numero de x que tendran las aristas del cubo:\n");
    scanf("%d", &numAristas);
    for (int i = 1; i <= numAristas; i++)
    {
        for (int j = 0; j < numAristas; j++)
        {
            if ((i > 0 && i < numAristas && (j == 0 || j == numAristas -1)))
            {
                printf("X");
            }else if(i == 1 || i == numAristas)
            {
                printf("X");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    
    return 0;
}
