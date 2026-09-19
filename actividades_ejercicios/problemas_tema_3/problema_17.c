#include <stdio.h>

int main()
{
    int num=0,inverso=0,digito=0;
    printf("Introduce un numero y te doy el inverso del mismo:\n");
    scanf("%d", &num);
    while (num > 0)
    {
        digito= num % 10;
        inverso = inverso * 10 + digito;
        num = num / 10;
    }
    printf("Tu numero inverso es: %d", inverso);
    return 0;
}
