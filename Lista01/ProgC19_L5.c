#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() 
{
	int *a;
	int b,vet[]={1,2,3,4,5},x;
    printf("Vetor Original:\n");
    for (x=0;x<=4;x++)
    {
    	printf("%d ",vet[x]);
    }
    printf("\nVetor com dobro do valor:\n");
    for (x=0;x<=4;x++)
    { 
        a=&vet[x];
        b=*a*2;
    	printf("%d ",b);
    }    
    return 0;
}
