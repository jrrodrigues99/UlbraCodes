#include <stdio.h>
#include <conio.h>
main(){
	
	int VetorA[10], i, x;
	bool achou;
	
	for (i=0; i<10; i++){
		printf("Digite um valor para posicao %i:  ", i);
		scanf("%d", &VetorA[i]);
	}
	
	printf("Digite o valor para X: ");
	scanf("%d", &x);
	
	for (i=0; i<10; i++)
		if(VetorA[i] == x)
			achou=true;
			
	if (achou == true)
		printf("Achei");
	else
		printf("Nao achei");
getche();
}
