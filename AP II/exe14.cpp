#include <stdio.h>
#include <conio.h>
main(){
	
	int X;
	float Altura, Peso;
	bool AltOk, PesoOk;
	
	for(X=1;X<=10;X++){
		printf("\nJogador %d, digite sua altura: ", X);
		scanf("%f", &Altura);
		
		printf("Digite seu peso: ");
		scanf("%f", &Peso);
		
		if(Peso>=70 && Peso<=80){
	   		 PesoOk=true;
		}
		
		if(Altura>=1.75 && Altura<=1.9){
			 AltOk=true;		
		}
		
		if(PesoOk==true && AltOk==true)
			 printf("\nAceito\n");
		else if(PesoOk==true && AltOk==false)
			 printf("Recusado por altura\n");
		else if(PesoOk==false && AltOk==true)
			 printf("Recusado por peso\n");
		else
			 printf("Totalmente recusado\n");
		
		PesoOk = false;
		AltOk = false;
	}
	getche();
}
 
