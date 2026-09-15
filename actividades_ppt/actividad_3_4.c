#include <stdio.h>

int main()
{
    int numero;
    printf("Intoduce un numero y te digo los numeros que hay entre ese y el 1:\n");
    scanf("%d", &numero);
    printf("-----------------\n");
    for(int i=1; i<=numero;i++){
        printf("%d\n", i);
    }
    return 0;
}
