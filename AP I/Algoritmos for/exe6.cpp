#include <stdio.h>
#include <conio.h>
main ()
{
	int x, num;
	
	printf ("Digite um valor para que eu te mostre seus primeiros numeros inteiros: ");
	scanf ("%d", &num);
	for (x=1; x<=num; x++)
	{
		printf ("\n%d", x);
	}
getche ();
}

