#include <stdio.h>
#include <conio.h>
main ()
{
	int x, idade, acumul=0;
	
	for (x=1; x<=8; x++)
	{
		printf("\nInforme a sua idade: ");
		scanf("%d", &idade);
		acumul=acumul+idade/8;
		
	}
	
	printf("\nIdade media do grupo: %d", acumul);
getche();
}
