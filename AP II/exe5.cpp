#include <stdio.h>
#include <conio.h>
main(){
	
	int Opcao, Pessoas, Dias, Total=0;
	
	printf("Quantas pessas ficarao hospedadas? \n");
	scanf("%d", &Pessoas);
	printf("Quantos dias? \n");
	scanf("%d", &Dias);
	printf("\t\nSelecione uma opcao de quarto:  \n1- Suite - R$180,00; \n2- Quarto de luxo - R$150,00; \n3- Quarto conjugato - R$130,00; \n4- Quarto standard - R$100,00; \n");
	scanf("%d", &Opcao);
	while(Opcao <1 || Opcao>4){
		printf("\nDigite uma opcao valida! \n");
		printf("\t\nSelecione uma opcao de quarto:  \n1- Suite - R$180,00; \n2- Quarto de luxo - R$150,00; \n3- Quarto conjugato - R$130,00; \n4- Quarto standard - R$100,00; \n");
		scanf("%d", &Opcao);
	}
	if(Opcao==1){
		Total=(180.00*Dias)*Pessoas;
		printf("\nVoce gastara um total de R$%d ", Total);
	}
	else if(Opcao==2){
		Total=(150.00*Dias)*Pessoas;
		printf("\nVoce gastara um total de R$%d,00 ", Total);
	}
	else if(Opcao==3){
		Total=(130.00*Dias)*Pessoas;
		printf("\nVoce gastara um total de R$%d,00 ", Total);
	}
	else if(Opcao==4){
		Total=(100.00*Dias)*Pessoas;
		printf("\nVoce gastara um total de R$%d,00 ", Total);
	}
getche();
}
