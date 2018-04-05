#include <stdio.h>
#include <stdlib.h>

int main () {
	
	int i = 3;
	
	while(i < 3){

		printf("%d, ",i);
		i++;
	}

	printf("\nFora do Loop\n");

	i = 3;

	do{
		printf("%d, ", i);
		i++;
	} while (i < 3);

	printf("\nFora do Loop2");

	return 0;
}
