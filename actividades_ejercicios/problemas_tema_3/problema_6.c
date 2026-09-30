#include <stdio.h>

int main(int argc, char const *argv[])
{
    int num=0;
    do
    {  
        printf("introduce un numero y te doy su tabla de multiplicar:\n");
        scanf("%d", &num);
    } while (num > 9 || num < 1);
    
    for (int i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n",i,num, i * num);
    }
    return 0;
}
