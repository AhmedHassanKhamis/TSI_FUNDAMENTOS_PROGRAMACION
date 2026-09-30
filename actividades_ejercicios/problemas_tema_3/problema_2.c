#include <stdio.h>

int main(int argc, char const *argv[])
{
    printf("programa que si Introduces dos numeros  te dice si es divisor!");
    int num1, num2; 
    printf("Introduce dividendo:\n");
    scanf("%d", &num1);    
    printf("Introduce divisor:\n");
    scanf("%d", &num2);
    
    // if (num1 % num2 == 0)? printf("Es divisor"): printf("No es divisor");
    if (num1 % num2 == 0)
        printf("Es divisor");
    else    
        printf("No es divisor");
    
    return 0;
}
