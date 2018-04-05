#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x,y;

    printf("Informe valor para eixo X: ");
    scanf("%d",&x);
    printf("Informe valor para eixo Y: ");
    scanf("%d",&y);

    if(x > 0 && y > 0)
    {
        printf("Quadrante 1");
    }else if(x < 0 && y > 0)
    {
        printf("Quadrante 2");
    }else if(x < 0 && y < 0)
    {
        printf("Quadrante 3");
    }else if(x > 0 && y < 0)
    {
        printf("Quadrante 4");
    }else
    {
        printf("ponto 0");
    }

    return 0;
}
