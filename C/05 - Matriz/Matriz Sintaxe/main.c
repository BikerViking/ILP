#include <stdio.h>
#include <stdlib.h>

int main() {

	int vet[5] = {0,10,50,20,30};
	int mat[2][5];

	for(int i = 0; i < 2; i++){
		for(int j = 0; j < 5; j++){
			scanf("%d",&mat[i][j]);
		}
	}

	for(int x = 0; x < 2; x++) {
		for (int y = 0; y < 5; y++) {
			printf(mat[x][y]);
		}
	}

	for(int z = 0; z < 5; z++) {
		printf("%d\n", vet[z]);
	}

	return 0;
}
