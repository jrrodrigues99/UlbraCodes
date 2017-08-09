#include <stdio.h>
#include <conio.h>
main(){
	
	int Numero, X, SomaImpares;
	
	for(X=0;X<100;X++){
		printf("Digite um numero: \n");
		scanf("%d", &Numero);
		
		if(Numero==0){
			break;
		}
		
		if(Numero<0){
			SomaImpares+=Numero;
		}
	}
	
	printf("\nSoma dos valores impares: %d", SomaImpares);
	getche();
}		
