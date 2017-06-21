#include <stdio.h>
#include <conio.h>
main(){
	
	int Vetor1[10], Vetor2[10], VetorX[10], i;
	
	for(i=0; i<10; i++){
		printf("Digite um valor para o VETOR 1 na posicao %i:  ", i);
		scanf("%d", &Vetor1[i]);
	}
	
	for(i=0; i<10; i++){
		printf("Digite um valor para o VETOR 2 na posicao %i:  ", i);
		scanf("%d", &Vetor2[i]);
	}
	
	for (i=0; i<10; i++){
		VetorX[i]=Vetor1[i]*Vetor2[i];
	}
	
	for (i=0; i<10; i++){
		printf("= %d\n", VetorX[i]);
	}
getche();
}
