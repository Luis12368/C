#include <stdio.h>
int main(){
	int cadastrado, ativo, logado;
	char opcao;
	
	cadastrado = ativo = logado = 0;
	
	printf("Deseja cadastrar a sua conta? S/N \n");
	scanf("%c", &opcao);
	
	 if(opcao == 'S'){
		cadastrado = 1;
		printf("Conta cadastrada\n");
	}
	
    printf("Deseja ativar a sua conta? S/N \n");
    scanf(" %c", &opcao);
    
     if(opcao == 'S'){
    	ativo = 1;
    	printf("Conta ativada");
    	
	}
	
    printf("Deseja logar na sua conta? S/N \n");
    scanf(" %c", &opcao);
    
     if(opcao == 'S'){
    	logado = 1;
    	printf("Conta logada\n");
    	
	}
	 
    if((cadastrado == 1) && (ativo == 1) && (cadastrado == 1)){
    	printf("\nSeja bem vindo\n");
    	
	}else{
		printf("Algo deu errado\n");
	}
    
	

}
