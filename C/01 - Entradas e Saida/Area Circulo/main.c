// Declaração de Bibliotecas.
#include <stdio.h>
#include <stdlib.h>
#include <math.h>

// Definição de uma constante.
#define PI 3.141592

int main()
{
    float p = PI, a = 0, raio = 0;

    scanf("%f", &raio);
	
	// pow(base, expoente) é uma função de math que eleva um número pelo outro.	
    a = p*(pow(raio,2));
    
	printf("%e",a);

    return 0;
}
