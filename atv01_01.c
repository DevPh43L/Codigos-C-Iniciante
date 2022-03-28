/* 01- Escreva um programa que imprima seu nome, data de nascimento, RA, Curso */

#include <stdio.h>
#include <stdlib.h>

int main() {

char nome[30];
char curso[30];
int ra=0,data=0;

printf("digita seu nome: ");
gets(nome);

printf("\ndigite seu curso: ");
gets(curso);

printf("\ndigita sua data de nascimento: ");
scanf("%d",&data);

printf("\ndigita seu RA: ");
scanf("%d",&ra);

printf("\nSeu nome: %s \nseu curso: %s \nsua data de nascimento: %d \nseu RA: %d \n", nome,curso,data,ra);

system("pause");
}
