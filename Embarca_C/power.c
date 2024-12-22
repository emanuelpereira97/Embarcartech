#include <stdio.h>
#include <math.h>

int main()
{
    int a,b,pot = 1;

    printf("Digite o primeiro numero: ");
    scanf("%d",&a);
    printf("Digite o segundo numero: ");
    scanf("%d",&b);

    for (int i=1; i<= b; i++)
    {
        pot = pot * a; 
        
    printf("Iteracao %d: %d\n", i, pot);
    }
    printf("Resultado final: %d^%d = %d\n", a, b, pot);
    return 0;
}