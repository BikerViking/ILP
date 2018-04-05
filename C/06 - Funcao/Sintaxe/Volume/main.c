#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define PI 3.141592
double volumeCilindro(double raio, double altura){
 double volume = PI * pow(raio,2) * altura;
 return volume;
}
int main()
{
    double r,h;
    scanf("%f",&r);
    scanf("%f",&h);
    printf("%.f",volumeCilindro(r,h));
    return 0;
}
