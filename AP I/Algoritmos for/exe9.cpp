#include <stdio.h>
#include <conio.h>
main ()
{
	int x, cont;
	float valor;
	
	printf("Digite 10 valores, te mostrarei quantos destes sao negativos: ");
	for (x=1; x<=10; x++)
	{
		printf("\nDigite um valor: ");
		scanf("%f", &valor);
		if (valor<0)
		cont++;
	}
	printf("\nUm total de %d numeros negativos", cont);
	getche ();
}

