#include<stdio.h>
#include<conio.h>

main()
{
	int x, carnes;
	float valor, total;
	
	printf("Quantos carnes voce ainda tem a pagar? ");
	scanf("%d", &carnes);
	
	for (x=1; x<=carnes; x++){
		printf("\nQual o valor do carne %d?", x);
		scanf("%f", &valor);
		total=valor*carnes;
	}
	printf("\nAinda restam pagar R$%.2f", total);
	getche();
}


