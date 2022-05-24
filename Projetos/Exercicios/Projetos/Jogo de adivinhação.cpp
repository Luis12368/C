#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define NUMERO_DE_TENTATIVAS 3

int main(void){
	setlocale(LC_ALL, "Portuguese");
	printf("************************************\n");
	printf("* Bem-vindo ao Jogo da Adivinhação *\n");
	printf("************************************\n");
	int numerosecreto;
	double pontos;	
	int tentativas = 1;
	int chute;
	int pontosperdidos;
	
	while(1){
	pontos = 1000;
	numerosecreto = 42;		
	pontosperdidos = (chute -  numerosecreto) / 2;
	pontos = pontos - pontosperdidos;
	printf("Qual é o seu chute?\n");
	scanf("%d" , &chute);
	printf("\n");
	if(chute < 0){
		printf("Você não pode chutar números negativos\n");
		printf("\n");		
	}
	printf("Seu %dº chute foi %d\n", tentativas, chute);
	printf("\n");
	int acertou =  chute ==  numerosecreto;
	int maior =  chute > numerosecreto;
	if(acertou){
		printf("Parabéns você acertou\n");
		break;
	}else if(maior) {
		printf("Seu chute foi maior que o número secreto!\n");
		printf("\n");
		}
	else{
		printf("Seu chute foi menor que o número secreto!\n");
		printf("\n");}
		
   tentativas++;
}
printf("\n");
printf("Você fez %f pontos\n", pontos);
printf("\n");
printf("Fim de jogo");
}


