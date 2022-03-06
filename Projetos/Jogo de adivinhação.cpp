#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main(void){
	setlocale(LC_ALL, "Portuguese");
	printf("************************************\n");
	printf("* Bem-vindo ao Jogo da Adivinhação *\n");
	printf("************************************\n");
	
	int numero_secreto, chute;
	numero_secreto = 5;
	printf("Qual é  o seu chute?: ");
	scanf("%d",&chute);
	printf("Seu chute foi %d!\n", chute);
	int acertou = chute == numero_secreto;
	if(acertou){
		printf("Parabéns! você acertou!\n");
		printf("Jogue de novo, você é um bom jogador :)\n");
	}else{
		printf("Você errou :(\n");
		printf("Mas não desanime, tente de novo!\n");
		if(chute > numero_secreto){
			printf("Seu número foi maior que o número secreto!\n");
		}
		if(chute < numero_secreto){
			printf("Seu número foi menor que o número secreto!\n");
		}
	}


}
