#include<stdio.h>
#include<conio.h>

main()
{
	int x;
	float peso, mediaPESO, maisPESADO, resultado=0, acima;

	for(x=1; x<=20; x++)
	{
		printf("Pessoa %d, digite o seu peso: ", x);
		scanf("%f", &peso);
		
		if(peso >= 60)
		{
			acima++;
			resultado=resultado+peso;	
		}
		else{
			if(peso>maisPESADO)
				maisPESADO=peso;
		}
	}
	if(acima>0){
		mediaPESO=resultado/acima;
	}
	printf("A media das pessoas que pesam mais de 60kg e de: %.2f", mediaPESO);
	printf("\nAqui esta o mais pesado abaixo de 60kg: %.2f", maisPESADO);
	getche();
}


