/* ATIVIDADE 02.01 -
Desenvolva um programa que utilize a função utilizando scanf */

#include <stdio.h>
#include <stdlib.h>

int main (){

    char a[50];

    printf("Digite alguma coisa: ");
    scanf("%s",a);
    printf("A palavra digitada foi: %s \n",a);


    system("pause");
}