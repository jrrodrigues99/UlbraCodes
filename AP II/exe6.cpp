#include <stdio.h>
#include <conio.h>
main(){
	
	float Altura, Media, Contador, Acumulador;
	int Opcao;
	
	do{
		printf("Digite a sua altura: ");
		scanf("%f", &Altura);
		Contador++;
		Acumulador=Acumulador+Altura;
		printf("\nVoce deseja continuar calculando? \nDigite [1] para sim ou [2] para nao \n");
		scanf("%d", &Opcao);
		while(Opcao<1 || Opcao>2){
			printf("\nDigite uma opcao valida! ");
			printf("\nVoce deseja continuar calculando? \nDigite [1] para sim ou [2] para nao ");
			scanf("%d", &Opcao);
		}
	}while(Opcao==1);
	Media=Acumulador/Contador;
	printf("\nA media da altura e de : %.2f ", Media);
	getche();
}

