#include <stdio.h>
#include <conio.h>
main ()
{
	int x, cont1=0, cont2=0;
	float valor;
	
	printf("Digite 10 valores, te mostrarei quantos destes estao no intervalo [10,20]: ");
	for (x=1; x<=10; x++)
	{
		printf("\nDigite um valor: ");
		scanf("%f", &valor);
		if ((valor>10 && valor<20))
		cont1++;
		else
		cont2++;
	}
	printf("\n%d estao no intervalo [10,20]", cont1);
	printf("\n%d estao fora do intervalo [10,20]", cont2);
	getche ();
}
