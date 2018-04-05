#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,denominador = 1;
    double s = 0;
    scanf("%d",&n);

    for(i = 1;i <= n; i++)
    {
        s += i/denominador;
        denominador+=2;
    }
    printf("Valor de S: %d",s);
    return 0;
}
