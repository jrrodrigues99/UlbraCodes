#include <stdio.h>
#include <conio.h>
main ()
{
	int x, tab, num;
	
	printf ("Neste algoritmo vamos fazer a tabuada do numero que voce digitar: ");
	scanf("%d", &num);
	for (x=1; x<=10; x++)
	{
		tab=x*num;
		printf ("\n\n%d", tab);
	}
	getche ();
}
