#include <stdio.h>
#include <conio.h>
main(){
	
	int Vetor[10], x, i;
	
	for (i=0; i<10; i++){
		printf("Digite um valor para posicao %i:  ", i);
		scanf("%d", &Vetor[i]);
	}
	
	printf("\nDigite um valor para X: ");
	scanf("%d", &x);
	
	printf("Os valores iguais a %d sao iguais nas posicoes: \n", x);
	for (i=0; i<10; i++){
		if (Vetor[i]==x)
			printf("%d\n", i);
		}
getche();
}
