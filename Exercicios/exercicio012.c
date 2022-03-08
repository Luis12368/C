#include <stdio.h>
int main(){
float salbruto, salliquido, imposto, totalbruto=0, totalliquido=0, totalimposto=0;
int cont;
for(cont = 1; cont <=3; cont++){
	printf("\nInsira o sallario bruto:\n");
	scanf("%f", &salbruto);
	if(salbruto >  999){
		imposto = salbruto*0.10;
	}else{
		if(salbruto > 1999){
			imposto = salbruto*0.15;
		}else{
			if(salbruto > 9999.00){
				imposto = salbruto*0.20;
				
			}else{
				if(salbruto > 99999.00){
					imposto = salbruto*0.25;
				}else{
					if(salbruto > 99999.01){
						imposto = salbruto*0.30;
					
					}
					
				}
			}
		}
		


     }
     salliquido = salbruto - imposto;
     
   printf("\nSalario liquido = %2.f\n", salliquido);
   totalbruto =  totalbruto + salbruto;
   totalliquido = totalliquido + salliquido;
   totalimposto = totalimposto + imposto;
   


}
printf ("\nTotal salario bruto : %.2f \n",totalbruto);
printf ("\nTotal salario liquido : %.2f \n",totalliquido);
printf ("\nTotal Imposto: %.2f \n",totalimposto);

	
}
