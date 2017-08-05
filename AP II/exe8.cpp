#include <stdio.h>
#include <conio.h>
main(){
	
	int X, Sexo;
	float Altura=0, MenorAltura=9999, MaiorAltura=0, AlturaF, SomaAlturaF, ContF, MediaAlturaF;
	
	for(X=1;X<=10;X++){
		printf("Digite [1] para Masculino e [2] para Feminino. ");
		scanf("%d", &Sexo);
		while(Sexo<1 || Sexo>2){
			printf("\nDigite uma opcao valida! ");
			printf("Digite [1] para Masculino e [2] para Feminino. ");
			scanf("%d", &Sexo);
		}
		printf("\nDigite a sua altura: ");
		scanf("%f", &Altura);
		if(Altura>MaiorAltura)
			MaiorAltura=Altura;
		if(Altura<MenorAltura)
			MenorAltura=Altura;
		if(Sexo==2){
			AlturaF+=Altura;
			ContF++;
		}
		MediaAlturaF=AlturaF/ContF;
	}
	printf("\nA maior altura e: %.2f", MaiorAltura);
	printf("\nA menor altura e: %.2f", MenorAltura);
	printf("\nA media da altura das mulheres e: %.2f", MediaAlturaF);
	getche();
}

