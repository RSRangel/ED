#include <stdio.h>
#include <string.h>
#include <stdlib.h>

vetor(int vet[],int a)
{
	int *y,x,b,*c;
    for (x=0;x<=4;x++)
    {
        c=&vet[x];
        b=*c;
    	printf("%d ",b);
    }
    printf("\nVetor Modificado:\n");
    fflush(stdin);
    for (x=0;x<=4;x++)
    {
        vet[x]=10;
        c=&vet[x];        
        b=*c;
    	printf("%d ",b);
    }    
}

int main() 
{
	int vet[]={1,2,3,4,5},a=10;
    vetor(vet,a);
    return 0;
}

