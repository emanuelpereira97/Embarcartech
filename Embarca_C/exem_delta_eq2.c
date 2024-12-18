//importando as bibliotecas input/output e math
#include <stdio.h>
#include <math.h>

int main(){
    //criando as variaveis correspondentes aos coeficientes do delta
    double a, b, c, delta;
    //solicitando ao usuario que as variaveis sejam digitadas
    printf("Digite os coeficientes da equação do segundo grau (a, b, c): ");
    //lendo, formatando e armazenando os valores digitados
    scanf("%lf %lf %lf", &a, &b, &c);
    //calculo do delta da eq do segundo grau
    delta = pow(b, 2) -4*a*c;
    //imprimindo resultado, formatado para duas casas decimais
    printf("O valor de delta e: %.2lf\n",delta);

    return 0;
}