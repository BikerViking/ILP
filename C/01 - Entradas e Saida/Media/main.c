#include <stdio.h>
#include <stdlib.h>

int main()
{
	float nota1 = 0, nota2 = 0, nota3 = 0, media = 0;

	printf(".:: BOLETIM ONLINE ::.\n");
	printf("Informe as notas:\t");
	scanf("%f", &nota1);

	printf("\nInforme sua segunda nota:\t");
	scanf("%f", &nota2);

	printf("Informe sua terceira nota:\t");
	scanf("%f", &nota3);

	media = (nota1 + nota2 + nota3) / 3;

	printf("\n============================\n")
	printf("MEDIA:\t %.2f",media);

    return 0;
}
