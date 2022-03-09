/* Este programa ira ler uma matriz 4x4 e ira gerar uma nova matriz 
em que as linhas são as colunas da matriz 1, e as colunas são as linhas da matriz 1.*/
#include <stdio.h>


int main()

{

int mato[4][4],matg[4][4],lin,col;

printf ("\n Digite a matriz original \n");

for (lin=0;lin<4;lin++)

for (col=0;col<4;col++)

{

scanf ("%d",&mato[lin][col]);

matg[col][lin]=mato[lin][col];

}

printf ("\n Matriz gerada \n");

for (lin=0;lin<4;lin++)

{

for (col=0;col<4;col++)

printf ("%d ",matg[lin][col]);

printf ("\n");

}

}
