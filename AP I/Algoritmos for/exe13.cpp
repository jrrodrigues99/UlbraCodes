#include <stdio.h>
#include <conio.h>
main()
{
	int x, cod, MAIORcod;
	float altura, MAIORaltura;
	
	for (x=1; x<=10; x++){
		printf("\nDigite seu codigo numerico: ");
		scanf("%d", &cod);
		printf("\nDigite a sua altura: ");
		scanf("%f", &altura);
		
		
		if(altura>MAIORaltura)
		{
			MAIORaltura=altura;
			MAIORcod=cod;
		}
	}
	printf("\nO aluno mais alto e o %d, medindo %.2f de altura", MAIORcod, MAIORaltura);
	getche();
}
