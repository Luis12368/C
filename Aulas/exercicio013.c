#include <stdio.h>

int main()

{

float vet[20],soma=0,media; int posicao;

for (posicao=0;posicao<20;posicao++)

{

scanf ("%f",&vet[posicao]);

soma=soma+vet[posicao];

}

media=soma/20;

printf ("numeros maiores que media %.2f \n",media);

for (posicao=0;posicao<20;posicao++)

{

if (vet[posicao] >= media)

printf ("%.2f \n",vet[posicao]);

}

}
