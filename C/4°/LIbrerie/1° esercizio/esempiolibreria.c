/*Audisio mattia*/

#include <stdio.h>
#include <stdlib.h>
#include "mialibreria.h"

int somma(int *,int);

int main(){
	int vet[5],lung,tot,i;
	
	printf("Quanti numeri vuoi inserire? ");
	scanf("%d",&lung);
	for(i=0;i<lung;i++){
		printf("Inserisci il %d numero: ",i+1);
		scanf("%d",&vet[i]);
	}
	tot=somma(vet,lung);
	printf("Il totale e' %d\n",tot);
return 0;
}

int somma(int *vet1,int lunghezza){
	int i,som=0;
	for(i=0;i<lunghezza;i++){
		som=som+vet1[i];
	}
return som;
}
