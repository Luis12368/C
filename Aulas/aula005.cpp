#include <stdio.h>
#include <stdlib.h>

int main()
{
int num, maior, cont;	
maior = 0;
for(cont = 1; cont <= 15; cont++)
{
	printf ("Digite um número: ");
    scanf("%d",&num);
    if(num > maior){
    	maior =  num;
	}

}
  printf("o maior numero = %d\n", maior);

}
