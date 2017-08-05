#include <stdio.h>
#include <conio.h>
main(){
	
	int numero, contNegativos=0, contPositivos=0;
	
	do{
		printf("Digite um numero: ");
		scanf("%d", &numero);
		if(numero<0)
			contNegativos++;
		else 
			contPositivos+=numero;
	}while(numero!=0);
	printf("\nQuantidade de numeros negativos: %d \nSoma dos numeros positivos: %d", contNegativos, contPositivos);
getche();
}
