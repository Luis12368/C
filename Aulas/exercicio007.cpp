#include <stdio.h>

int main(){

float salario, salario_reajustado, maior_salario, reajuste;
int cont;
printf("Digite o valor do reajuste: ");
scanf("%f", &reajuste);

maior_salario = 0;

for(cont = 1; cont <= 50; cont++){
	printf("\nInforme o salario do funcionario: ");
	scanf("%f", &salario);
	salario_reajustado = salario +( salario * reajuste/100);
	printf("O salario reajustado sera = %2.f\n",salario_reajustado);
	if(salario_reajustado > maior_salario){
		maior_salario = salario_reajustado;
	}
	
printf("O maior salario sera = %2.f\n",maior_salario);
}




}
