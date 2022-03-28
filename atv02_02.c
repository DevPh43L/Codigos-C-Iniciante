/* ATIVIDADE 02 - 02 -
Crie um código que utilize as 4 operações utilizando valores externos. */

#include <stdio.h>
#include <stdlib.h>

int main(){

    float a,b;

    printf("Digite o Valor A: ");
    scanf("%f",&a);
    printf("Digite o Valor B: ");
    scanf("%f",&b);
    printf("A soma de [%.2f] + [%.2f] = %.2f \n", a, b, a+b);
    printf("A subtracao de [%.2f] - [%.2f] = %.2f \n", a, b, a-b);
    printf("A multiplicacao de [%.2f] * [%.2f] = %.2f \n", a, b, a*b);
    printf("A divisao de [%.2f] / [%.2f] = %.2f \n", a, b, a/b);

    system("pause");
}