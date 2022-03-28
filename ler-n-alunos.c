/* 01 - Escreva um programa que leia o número de alunos e de alunas de uma sala.
 Como saída, o programa deve apresentar o número de alunos e
 em seguida o de alunas. */

#include <stdio.h>
#include <stdlib.h>

int main(){

int n1, n2;

printf("digite o numero de alunos na sala de aula: \n");
scanf("%d", &n1);
printf("Digite o numero de alunas na sala de aula: \n");
scanf("%d", &n2);

printf("TOTAL ESTUDANTES: %d \n", n1+n2);
printf("TOTAL DE ALUNOS: %d \n", n1);
printf("TOTAL DE ALUNAS: %d \n", n2);

system("pause");
}
