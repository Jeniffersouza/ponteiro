#include <stdio.h>

void calcula_quadrado(int l, float *area, float *perimetro)
{
    *area = l*l;
    *perimetro = l*4;

}

int main ()
{
    int l;
	float area1, perimetro1;

    l=2;
    
	calcula_quadrado(l,&area1,&perimetro1);
	printf(" o resultado da area e  %f",area1);
    printf(" o resultado e %f",perimetro1);

}