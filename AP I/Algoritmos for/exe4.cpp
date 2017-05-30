#include <stdio.h>
#include <conio.h>
main ()
{
	int x, valor;
	
	for (x=1; x<=9; x++)
	{
		valor=x%2;
		if (valor==1)
		printf ("\n%d", x);
	}
getche ();
}
