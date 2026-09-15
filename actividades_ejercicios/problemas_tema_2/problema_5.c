#include <stdio.h>
#include <math.h>

int main()
{
    float puntoX1,puntoX2,puntoY1,puntoY2;
    float distancia;
    printf("Calculador de distancia entre dos puntos.\n");
    printf("Introduce la cordenada x del punto 1:\n");
    scanf("%f", &puntoX1);
    printf("Introduce la cordenada y del punto 1:\n");
    scanf("%f", &puntoY1);
    printf("Introduce la cordenada x del punto 2:\n");
    scanf("%f", &puntoX2);
    printf("Introduce la cordenada y del punto 2:\n");
    scanf("%f", &puntoY2);
    distancia = sqrt((puntoX2 - puntoX1) * (puntoX2 - puntoX1) + (puntoY2 - puntoY1) * (puntoY2 - puntoY1));
    // esto esta mal tengo que hacerlo con squareRoot(sqrt)
    printf("La distancia entre ambos puntos es de (%f)", distancia);
    return 0;
}

