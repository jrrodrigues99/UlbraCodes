#include <stdio.h>
#include <conio.h>
main(){
       int Vet[30], i;
       int cont=0;
       
       for(i=0; i<30; i++){
                printf("\nVetor [%d]: ", i);
                scanf("%f", &Vet[i]);
                }
                printf("\nPosicoes dos numeros positivos: ");
                for(i=0; i<30; i++)
                         if(Vet[i]>0){
                                      cont++;
                                      printf("\n%d", i);
                                      }
                                      printf("\nTotal de numeros positivos no vetor: %d", cont);
      getche();
      } 

