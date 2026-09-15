#include <stdio.h>

int main()
{
    int num;
    // asi se crean los string (en realidad lo que por debajo el sistema es cambiar el valor al que apunta la variable dinamicamente)
    char *dia;
    printf("Introduce un numero entre el 1 y 7 y te digo el dia de la semana:\n");
    scanf("%d", &num);
    if (num == 1)
        dia = "Lunes";
    if (num == 2)
        dia = "Martes";
    if (num == 3)
        dia = "Miercoles";
    if (num == 4)
        dia = "Jueves";
    if (num == 5)
        dia = "Viernes";
    if (num == 6)
        dia = "Sabado";
    if (num == 7)
        dia = "Domingo";
    if (num > 7 || num < 1)
        dia = "Eres tonto";
    printf("Tu dia de la semana es: %s", dia);
    return 0;
}
