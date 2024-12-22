#include <stdio.h>

int main()
{
    int a,b, pot = 1;

    printf("Digite o primeiro numero: ");
    scanf("%d",&a);
    printf("Digite o segundo numero: ");
    scanf("%d",&b);

    for (int i=1; i<= b; i++)
    {
        pot = pot * a;
    }

    printf("&d",a);
}