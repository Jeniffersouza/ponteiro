#include <stdio.h>

void swap(int *a, int *b)
{
    long tmp = *a;
    *a = *b;
    *b = tmp;
}



int main ()
{
    int valor1, valor2;
	
    valor1 = 2;
    valor2 = 2;
	
    swap(&valor1,&valor2);
	printf(" o resultado e %d",valor1);
    printf(" o resultado e %d",valor2);

}