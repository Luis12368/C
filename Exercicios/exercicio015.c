/* Este programa vai ler dados inteiros e ira armazenalos em uma
matriz 3x4, e em seguida ira mostrar quantidade de numeros impares e
pares armazenados na matriz */

#include <stdio.h>
int main(){

int mat[3][4],lin, col,contpar=0,contimpar=0;
printf ("\nDigite valor para os elementos da matriz\n\n");
for ( lin=0; lin<3; lin++ )
for ( col=0; col<4; col++ )
{
printf ("\nElemento[%d][%d] = ", lin, col);
scanf ("%d", &mat[lin][col]);
}
printf("\n\n********* Saida de Dados ********* \n\n");
for ( lin=0; lin<3; lin++ )
for ( col=0; col<4; col++ )
{
if (mat[lin][col] % 2==0)
contpar++;
else
contimpar++;
}
printf ("\nPares: %d ",contpar);
printf ("\nImpares: %d ",contimpar);
}
