#include <conio.h>
#include <stdio.h>
main(){
	
	int n1, n2, Opcao, Result;
	
	printf("Digite um numero: ");
	scanf("%d", &n1);
	printf("\nDigite um segundo numero: ");
	scanf("%d", &n2);
	printf("\nVoce deseja: \n1- Somar; \n2- Subtrair; \n3Multiplicar; \n4- Dividir; \n");
	scanf("%d", &Opcao);
	while(Opcao<1 || Opcao>4){
		printf("\nDigite uma opcao valida! ");
		printf("\nVoce deseja: \n1: Somar; \n2: Subtrair; \n3: Multiplicar; \n4: Dividir; ");
		scanf("%d", &Opcao);
	}
	if(Opcao==1){
		Result=n1+n2;
		printf("\nVoce escolheu SOMA, o resultado e: %d", Result);
	}
	else if(Opcao==2){
		Result=n1-n2;
		printf("\nVoce escolheu SUBTRACAO, o resultado e: %d", Result);
	}
	else if(Opcao==3){
		Result=n1*n2;
		printf("\nVoce escolheu MULTIPLICACAO, o resultado e: %d", Result);
	}
	else if(Opcao==4){
		Result=n1/n2;
		printf("\nVoce escolheu DIVISAO, o resultado e: %d", Result);
	}
	getche();
}

