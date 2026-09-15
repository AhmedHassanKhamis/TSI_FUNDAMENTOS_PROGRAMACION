#include <stdio.h>

// version un poco mas larga
// int main()
// {
//     int num,resultado = 1;5
//     do{
//         printf("Introduce un numero:\n");
//         scanf("%d", &num);
//         if (num > 0)
//         {
//             for (int i = num; i >= 1; i--)
//             {
//                 resultado*=i;
//             }
//             printf("El factorial de %d es: %d\n",num, resultado);
//         }
//         resultado = 1; 
//     }while (num > 0);
//     return 0;
// }

// version optimizada aunque lo dudo
int main()
{
    // a partir del 16 ya no funciona(no cabe el resultado en int) y se tendría que usar un long
    int num = 0,resultado = 1;
    while (num >= 0){
        printf("Introduce un numero:\n");
        scanf("%d", &num);
        if (num > 0)
        {
            for (int i = num; i >= 1; i--)
            {
                resultado*=i;
            }
            printf("El factorial de %d es: %d\n",num, resultado);
        }
        resultado = 1; 
    }
    return 0;
}