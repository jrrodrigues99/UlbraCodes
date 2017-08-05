#include <stdio.h>
#include <conio.h>
main(){
	
	int idade;
	
	do{
		printf("Digite a sua idade: ");
		scanf("%d", &idade);
		if(idade<0 || idade>100)
			printf("\nDigite uma idade valida! ");
		}while(idade<0 || idade>100);
		if(idade>=18 && idade<=60)
			printf("\nVoto obrigatorio. ");
		else 
			printf("\nVoto nao obrigatorio. ");
getche();
}
