//02 - Escreva um programa em C que apresente a tabuada do número 3.

#include <stdio.h>
#include <stdlib.h>

int main() {

  for (int i=1;i<=10;i++){
    printf("[3] x [%d] = [%d]\n",i,i*3 );
  }

  system("pause");
}
