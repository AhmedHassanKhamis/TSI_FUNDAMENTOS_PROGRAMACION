#include <stdio.h>

int main()
{
    // ESTE EJERCICIO ES MEJOR HACERLO CON 3 BUCLES FOR, YO LO HICE CON 2 POR EMPEÑO EN SACAR UN IF QUE CUMPLA
    int numAristasY;
    printf("Bienvenido al dibujador de triangulo isosceles\n");
    printf("Introduce el numero de largo que tendran las altura  del triangulo:\n");
    scanf("%d", &numAristasY);
    for (int i = numAristasY-1; i >= 0; i--)
    {
        for (int j = 1; j < numAristasY*2 ; j++)
        {
            if(j > i && j < numAristasY*2 - i){
                printf("x");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
