#include <stdio.h>
#include <conio.h>
main ()
{
	int x, num;
	
	printf ("Digite quantas vezes voce quer que eu escreva a palavra PROGRAMACAO: ");
	scanf ("%d", &num);
	for (x=1; x<=num; x++)
	{
		printf ("\nPROGRAMACAO", num);
	}
getche ();
}
