#include <stdio.h>
#include <conio.h>
main(){
	
	int Opcao, X, NumeroVendas=0;
	float Valor, TotalVendas=0, MaiorVenda=0, MediaVendas; 
	
	for(X=0;X<200;X++){
		printf("Digite o valor da venda: ");
		scanf("%f", &Valor);
		
		NumeroVendas++;
		TotalVendas=TotalVendas+Valor;
		
		if(Valor>MaiorVenda){
			MaiorVenda=Valor;
		}
		
		MediaVendas=TotalVendas/NumeroVendas;
		
		printf("\nDeseja continuar? [1] SIM | [2] NAO ");
		scanf("%d", &Opcao);
		
		if(Opcao==2)
			break;
	}

	printf("Total de vendas feitas: %d \n", NumeroVendas);
	printf("Valor total das vendas: %.2f\n", TotalVendas);
	printf("Valor medio das vendas: %.2f\n", MediaVendas);
	printf("Maior venda: %.2f\n", MaiorVenda);
	
	getche();
}

