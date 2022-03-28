/*ATIVIDADE 01.03 -  
Apresente um código utilizando a variável float */

#include <stdio.h>
#include <stdlib.h>

int main (){

    float num;
    printf("Digite um numero real: ");
    scanf("%f", &num);

    printf("O numero digitado foi: %.3f \n",num);

    system("pause");
}