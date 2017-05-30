#include <stdio.h>
#include <conio.h>
main()
{
	int valores, x, numero, quadrado, cubo;
	
	printf("\nQuantos valores devem ser lidos: ");
	scanf("%d", &valores);
	
	for (x=1; x<=valores; x++){
		printf("\nDigite o numero: ");
		scanf("%d", &numero);
		
		if(numero>0){
			printf("\nEste numero e positivo!");
		}
		else{
			printf("\nEste numero e negativo!");
		}
		if(numero%2==0){
			printf("\nEste numero e par!");
		}
		else{
			printf("\nEste numero e impar!");
		}
		quadrado=numero*numero;
		cubo=numero*numero*numero;
		printf("\nO quadrado do valor e %d \nO cubo do valor e %d", quadrado, cubo);
	}
	getche();
}

