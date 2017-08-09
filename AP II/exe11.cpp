#include <stdio.h>
#include <conio.h>
main(){
	
	float Morango, Maca, ValorMaca, ValorMorango, Kilos, ValorTotal;
	
	printf("Quantos kgs de morango voce vai comprar? ");
	scanf("%f", &Morango);
	printf("\nQuantos kgs de maca voce vai comprar? ");
	scanf("%f", &Maca);
	if(Maca<5)
		ValorMaca=3;
	else
		ValorMaca=2;
	
	if(Morango<5)
		ValorMorango=5;
	else
		ValorMorango=4;
		
	Kilos=Maca+Morango;
	ValorTotal=(Maca*ValorMaca)+(Morango*ValorMorango);
	
	if(Kilos>8 || ValorTotal>35)
		ValorTotal-=ValorTotal/100*20;
	
	printf("\nValor da compra: %.2f", ValorTotal);
	getche();
}
