#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

int main()
{
    setlocale(LC_ALL,"portuguese");
    int i,nota, resultado = 0, menor = 10, maior =0;

    for(i = 1; i <= 6; i++)
    {
        scanf("%d",&nota);
        resultado += nota;
        if(nota >= maior)
        {
            maior = nota;
        }else if(nota <= menor)
        {
            menor = nota;
        }

    }
    printf("O resultado final é: %d", resultado-(maior+menor));
    printf("\nmaior é : %d e menor é: %d",maior,menor);

    return 0;
}
