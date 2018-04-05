#include <stdio.h>
#include <stdlib.h>

int main() {

	int n = 0, i = 0, ant = 0, prx = 1, aux = 0;
	
	printf("Informe um valor");
	scanf("%d",&n);
	
	printf("%d",prx);

	for(i=0;i<n;i++) {

		aux = ant+prx;
		ant = prx;
		prx = aux;

		printf("%d",aux);
	}

	return 0;
}
