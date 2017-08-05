#include <stdio.h>
#include <conio.h>
main(){
	
	float Altura, PesoIdeal;
	int Sexo;
	
	do{
		do{
			printf("Informe seu sexo \n[1] Feminino [2] Masculino \n ");
			scanf("%d", &Sexo);
		}while(Sexo<1 || Sexo>2);
		printf("\nInforme sua altura: (Exemplo: 1.83) \n");
		scanf("%f", &Altura);
		if(Altura==0)
			break;
		if(Sexo==1){
			PesoIdeal=(62.1*Altura)-44.7;
			printf("\nSeu peso ideal e: %.2f Kgs \n", PesoIdeal);
		}
		else{
			PesoIdeal=(72.7*Altura)-58;
			printf("\nSeu peso ideal e: %.2f Kgs \n", PesoIdeal);
		}
	}while(Altura!=0);
	getche();
}
