#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
int main()
{
    /*
    2. Crie um programa que possua um vetor com 4 posi��es
    pronto para receber notas de 3 avalia��es.
    Armazene na �ltma posi��o do vetor a m�dia aritim�tica das
    avali��es, depois informe qual avalia��o  teve a menor nota
    E qual avalia��o teve a maior nota.
    */
    float notas[4],aux,menor,maior;
    int i,j;
    for(i = 0; i < 4; i++){
        notas[i] = rand() % 100;
    }

    menor = notas[0];
    maior = notas[0];

    for(i = 0; i < 4; i++){
       notas[3] += (notas[i] / 3);
    }

    for(i = 0; i < 4; i++){
            if(notas[i] > maior) maior = notas[i];
            if(notas[i] < menor) menor = notas[i];

    }

    for(i = 0; i < 4; i++){
       printf("%.2f, ",notas[i]);
    }
    printf("\nmaior %.2f ",maior);
    printf("\nmenor %.2f\n ",menor);
    printf("\nmedia %.2f\n ",notas[3]);
    return 0;
}
