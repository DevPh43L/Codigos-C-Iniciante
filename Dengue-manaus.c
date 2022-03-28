/*03 - Escreva um programa em C para o Ministério da Saúde que o auxilie nas
informações sobre a dengue em Manaus. Esse programa deve receber os dados sobre
o número de casos suspeitos, o número de casos confirmados e o número de
 mortes, apresentando a tela.*/

 #include <stdio.h>
 #include <stdlib.h>

 int main(){

   int n_casos,n_susp,n_mortes;

   printf("Digite o numero de casos Suspeitos de Dengue: \n");
   scanf("%d", &n_susp);
   printf("Digite o numero de casos Confirmados de Dengue: \n");
   scanf("%d", &n_casos);
   printf("Digite o numero de Mortes por Dengue: \n");
   scanf("%d", &n_mortes);

   printf("|---------------------------------------------------|\n");
   printf("|Numero Suspeitos de Dengue: %d         ------------|\n", n_susp);
   printf("|Numero Confirmados de Dengue: %d       ------------|\n", n_casos);
   printf("|Numero Mortes de Dengue: %d            ------------|\n", n_mortes);
   printf("|---------------------------------------------------|\n");

   system("pause");
 }
