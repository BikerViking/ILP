#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void saudacao()
{
    printf("Boa tarde\n");
}

int soma(int x, int y){
    int res = x + y;
    return res;

}

int imc(double peso, double altura){
    if(peso * altura >= 100){
        return 1;
    }

}

double precoPorQuantidade(double kg, int qtd)
{
    double total = kg * qtd;
    return total;
}

int dobro(int x)
{
  return x * 2;
}


double hipotenusa(double a, double b){
    return sqrt((pow(a,2)+pow(b,2)));
}
int main()
{
    int a,b;
    saudacao();
    printf("Informe o valor de a: \n");
    scanf("%d",&a);
    printf("Informe o valor de b: \n");
    scanf("%d",&b);


    printf("%f",hipotenusa(a,b));

   /* saudacao();
    saudacao();
    int resultado = soma(3,5);
    resultado *= 2 ;
    printf("%d\n",resultado);
    printf("%d\n",soma(1,1));
    printf("%d\n",soma(154,1));
    double total = precoPorQuantidade(4.0,2);
    printf("%f",total);
*/


    return 0;
}
