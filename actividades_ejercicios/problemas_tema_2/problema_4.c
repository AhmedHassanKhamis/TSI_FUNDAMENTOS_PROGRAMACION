#include <stdio.h>

int main()
{
    int segundos_usuario,segundos,horas,minutos,auxiliar;
    printf("Bienvenido al transformador de segundos en horas,minutos, y segundos:\n");
    printf("Introduce una cantidad de segundos:\n");
    scanf("%d", &segundos_usuario);
    horas = segundos_usuario / 3600;
    auxiliar = segundos_usuario % 3600;
    minutos = auxiliar / 60;
    auxiliar = minutos % 60;
    segundos = auxiliar;
    printf("horas: %d\n", horas);
    printf("minutos: %d\n", minutos);
    printf("segundos:%d\n", segundos);
    return 0;
}
