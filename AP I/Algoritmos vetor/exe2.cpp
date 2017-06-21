#include <stdio.h>
#include <conio.h>
main(){
	
	int Vetor[20], ContPar, i;
	
	for (i=0; i<20; i++){
		printf("Digite um valor para o vetor %d: ", i);
		scanf("%d", &Vetor[i]);
	}
	
	for (i=0; i<20; i++)
		if (Vetor[i]%2==0)
			ContPar++;
			
	printf("\nQuantidade de numeros pares %d: ", ContPar);
getche();
}
