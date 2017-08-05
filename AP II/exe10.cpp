#include <stdio.h>
#include <conio.h>
main(){
	
	float n1, n2, n3, n4, Media;
	int X;
	
	for(X=1;X<=10;X++){
		printf("Aluno %d, insira sua primeira nota: ", X);
		scanf("%f", &n1);
		printf("Aluno %d, insira sua segunda nota: ", X);
		scanf("%f", &n2);
		printf("Aluno %d, insira sua terceira nota: ", X);
		scanf("%f", &n3);
		printf("Aluno %d, insira sua quarta nota: ", X);
		scanf("%f", &n4);
		Media=n1+(n2*2)+(n3*3)+n4;
		if(Media>=9)
			printf("\nConceito: A \n");
		else if(Media>=7.5 && Media<9)
			printf("\nConceito: B \n");
		else if(Media>=6 && Media>7.5)
			printf("\nConceito: C \n");
		else if(Media<6)
			printf("\nConceito: D \n");
	}
	getche();
}
