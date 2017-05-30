#include <stdio.h>
#include <conio.h>
main()
{
	int x, num, idade, Mnota=0, MAIORnota=0;
	float nota, MAIORidade=0, MAISvelho=0;

	printf("\nDigite um numero para fazermos as repeticoes: ");
	scanf("%d", &num);
	
	for(x=1; x<=num; x++)
	{
		printf("\nAluno %d digite sua idade: ", x);
		scanf("%d", &idade);
		
		printf("Agora digite a sua nota: ");
		scanf("%f", &nota);	
		
		if(nota>MAIORnota){
			Mnota=nota;
			MAIORnota=idade;
		}
		if(idade>MAISvelho){
			MAISvelho=idade;
			MAIORidade=nota;
		}
	}
	printf("\nA maior nota foi do aluno que tem %d anos", MAIORnota);
	printf("\nA nota do aluno mais velho foi: %.1f", MAIORidade);
	getche();
}

