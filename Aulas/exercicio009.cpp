#include <stdio.h>

int main(){

	
float nota1, nota2, nota3, media;
int cont;

for(cont=1; cont<=40;cont++){
	printf("Digite a nota 1 do aluno: ");
    scanf("%f", &nota1);
    printf("Digite a nota 2 do aluno: ");
    scanf("%f", &nota2);
    printf("Digite a nota 3 do aluno: ");
    scanf("%f", &nota3);
    
    media = (nota1+nota2+nota3)/3;
    if(media >= 7){
    	printf("Aluno aprovado com media = %2.f",media);
    	
	}
    else{
    	printf("Aluno reprovado com a média = %2.f\n", media);
		
	}
    
    
    
   
}
return 0;
}




//int main(){
	
//int num, cont;

//printf("Digite um número: ");

//scanf(" %d", &num);
             
//for(cont = 1; cont<=20; cont = cont + 1){//aqui ele coloca um valor para variavel e dps as vezes repetidas,
//	printf("\n Numero = %d", num);
//}	

	
	
//}

//int main(){
//int num, maior, cont;

//maior = 0;

//for(cont = 1; cont <=15; cont++){
	//printf("Digite um numero inteiro:\n");
	
	//scanf("%d", &num);
	//if(num > maior){
		//maior = num;
    //}
//}

//printf("O maior dos numeros lidos = %d\n", maior);
//}
