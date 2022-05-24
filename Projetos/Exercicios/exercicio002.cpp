#include <stdio.h>
int main(){
int numero;
//printf("Entre com um numero inteiro:\n");//é composto pela string que traz o formato de leitura, com %d, %f ou %c entre aspas.
//scanf("%d", &numero);//armazena o valor recebido, sendo o nome dessa variável precedido de &.
//printf("O valor informado foi %d.\n", numero);
char ch1, ch2;
printf("Entre com duas letras:\n");
getc (ch1);
getc (ch2);
printf("As letras inseridas foram %c e %c.\n", ch1, ch2);
}

