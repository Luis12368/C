#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#define NUMERO_DE_TENTATIVAS 3

int main(void){
	setlocale(LC_ALL, "Portuguese");
	printf("************************************\n");
	printf("* Bem-vindo ao Jogo da Adivinha��o *\n");
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
	printf("Qual � o seu chute?\n");
	scanf("%d" , &chute);
	printf("\n");
	if(chute < 0){
		printf("Voc� n�o pode chutar n�meros negativos\n");
		printf("\n");		
	}
	printf("Seu %d� chute foi %d\n", tentativas, chute);
	printf("\n");
	int acertou =  chute ==  numerosecreto;
	int maior =  chute > numerosecreto;
	if(acertou){
		printf("Parab�ns voc� acertou\n");
		break;
	}else if(maior) {
		printf("Seu chute foi maior que o n�mero secreto!\n");
		printf("\n");
		}
	else{
		printf("Seu chute foi menor que o n�mero secreto!\n");
		printf("\n");}
		
   tentativas++;
}
printf("\n");
printf("Voc� fez %f pontos\n", pontos);
printf("\n");
printf("Fim de jogo");
}


