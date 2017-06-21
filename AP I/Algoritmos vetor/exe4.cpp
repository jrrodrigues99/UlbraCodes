#include <stdio.h>
#include <conio.h>
main(){
	
	int Vetor[10], Soma=0, i;
	
	for(i=0; i<10; i++){
		printf("Digite um valor para posicao %i:  ", i);
		scanf("%d", &Vetor[i]);
		
		if(Vetor[i]<=0) 
			break;
		
		if(Vetor[i]>5)
			Soma=Soma+Vetor[i];
		}
		
	printf("\nSoma dos valores maiores que 5 e de: %d", Soma);
getche();
}
