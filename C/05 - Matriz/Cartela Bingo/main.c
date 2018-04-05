#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int main () {

	int mat[3][3];

	for(int i = 0; i < 3; i++){
		for(int j = 0 ; j < 3; j++){
			mat[i][j] = rand() % 100;
		}
	}

	for(int x = 0; i < 3; i++){
		for(int y = 0 ; j < 3; j++){
			printf("%d", mat[x][y]);
		}
		printf("\n");
	}
	
	return 0;
}
