#include <stdio.h>
#include <math.h>

float perimetro(float radio){
    float resultado;
    resultado = 2 * M_PI * radio;
    return resultado;
}

int main()
{
    float radio; 
    do
    {
        printf("Introduce el radio de la circunferencia y te doy su perimetro:\n");
        scanf("%f", &radio);
    } while (radio < 0);
    printf("\nTu perimetro es: %f", perimetro(radio));
    return 0;
}
