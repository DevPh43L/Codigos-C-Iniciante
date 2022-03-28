/*ATIVIDADE 01.04 -  
Apresente um código que apresente um caracter e uma frase de "Boa noite"*/

#include <stdio.h>
#include <stdlib.h>

int main(){

    char a;
    printf("digite uma letra: ");
    scanf("%c",&a);
    printf("Boa noite %c !! \n",a);

    system("pause");
    return 0;
}
