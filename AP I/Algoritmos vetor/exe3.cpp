#include <stdio.h>
#include <conio.h>
main(){
	
	int Vetor[30], MenorNum, Cont, i;
	
	for (i=0; i<30; i++){
		printf("Digite um valor para a posicao %d do vetor: ", i);
		scanf("%d", &Vetor[i]);
		
		if (Vetor[i] < MenorNum || i==0)
			MenorNum=Vetor[i];
		}
		
	printf("\nMenor valor do vetor: %d", MenorNum);
getche();
}

