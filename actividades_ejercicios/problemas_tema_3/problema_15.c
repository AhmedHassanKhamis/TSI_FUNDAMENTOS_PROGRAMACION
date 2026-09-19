#include <stdio.h>

int main()
{
    int num1,num2,num3;
    printf("Introduce un numero:");
    scanf("%d", &num1);
    printf("Introduce un numero:");
    scanf("%d", &num2);
    printf("Introduce un numero:");
    scanf("%d", &num3);

    if(num1 == num2 + num3 )
        printf("%d es igual a la suma de %d + %d\n", num1, num2, num3);
    
    if(num2 == num1 + num3 )
        printf("%d es igual a la suma de %d + %d\n", num2, num1, num3);
    
    if(num3 == num1 + num2 )
        printf("%d es igual a la suma de %d + %d\n", num3, num1, num2);

    return 0;
}
