#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main () {

	int i = 0, j = 0, aux = 0, vet[10];

	for(i = 0; i < 10; i++){
		vet[i] = rand() % 100;
	}

	for(i = 0; i < 10; i++){
		printf("%d, ", vet[i]);
	}

	printf("\n");

	for(i = 0; i < 10; i++){
		for(j = i+1; j < 10; j++ ){
			if(vet[i] > vet[j]){
			    aux = vet[i];
			    vet[i] = vet[j];
			    vet[j] = aux;
			}
		}
	}

	for(i = 0; i < 10; i++){
		printf("%d, ", vet[i]);
	}

	return 0;
}
