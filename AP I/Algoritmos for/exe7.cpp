#include <stdio.h>
#include <conio.h>
main ()
{
	int x, tab;
	
	printf ("Neste algoritmo vamos fazer a tabuada do 8: ");
	
	for (x=1; x<=10; x++)
	{
		tab=x*8;
		printf ("\n\n%d", tab);
	}
	getche ();
}

