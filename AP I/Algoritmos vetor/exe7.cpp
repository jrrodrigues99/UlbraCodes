#include <stdio.h>
#include <conio.h>
main(){
	
	int VetorPar[10], VetorImpar[10], i, Valor, ContPar = 0, ContImpar = 0;
	
	do{
		
		printf("Digite um valor: ");
		scanf("%d", &Valor);		
		
		if(Valor%2 == 0){
			VetorPar[ContPar] = Valor;
			ContPar++;
			printf("\nContPar esta em: %i\n", ContPar);
		}
		
		else{
			VetorImpar[ContImpar] = Valor;
			ContImpar++;
			printf("\nContImpar esta em: %i\n", ContImpar);
		}
		
	} while (Valor != 0 && ContImpar < 10 && ContPar < 10);
	
	
	printf("Numeros pares digitados: \n");
	
	for(i = 0; i < ContPar; i++)
		printf("%d\n", VetorPar[i]);
	
	printf("\n");
	
	printf("Numeros impares digitados: \n");
	
	for(i = 0; i < ContImpar; i++)
		printf("%i\n", VetorImpar[i]);
		
getche();
}
