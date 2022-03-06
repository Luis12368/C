#include <stdio.h>
int main(){
int nota1, nota2, nota3, media, cont;
cont = 1;
while(cont <= 40){
	printf("\nInsira a  primeria nota:\n");
    scanf("%d", &nota1);
    printf("Insira a  segunda  nota:\n");
    scanf("%d", &nota2);
    printf("Insira a terceira  nota:\n");
    scanf("%d", &nota3);
    media = (nota1+nota2+nota3)/3;
    if(media >= 7){
	
    	printf("Parabens você foi aprovado com a media= %d\n",media);
    }
    else{
    	printf("Você foi reprovado com a media = %d\n",media);
    
	}
    
	cont++;
	
}



}
