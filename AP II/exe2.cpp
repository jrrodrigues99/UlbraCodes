#include <stdio.h>
#include <conio.h>
main(){
	
	float macas, result;
	
	printf("Quantas macas foram compradas? ");
	scanf("%f", &macas);
	
	if(macas<12)
		result=macas*0.30;
	else if(macas>=12)
		result=macas*0.25;
	printf("\nVoce gastou: R$%.2f", result);
getche();
}

