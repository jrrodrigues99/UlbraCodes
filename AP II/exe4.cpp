#include <stdio.h>
#include <conio.h>
main(){
	
	int  x;
	float n1, n2, n3, media;
	
	for(x=1;x<=10;x++){
		printf("Aluno %d, digite sua primeira nota: \n", x);
		scanf("%f", &n1);
		printf("A sua segunda nota: \n");
		scanf("%f", &n2);
		printf("A sua terceira e ultima nota: \n");
		scanf("%f", &n3);
		media=(n1+n2+n3)/3;
		if (media>=7)
			printf("\nAPROVADO, sua nota foi: %.2f \n ", media);
		else
			printf("\nREPROVADO, sua nota foi: %.2f \n ", media);
	}
	getche();
}
