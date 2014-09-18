#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() 
{
	int x,a;
	int vet[]={10,2,3,4,43};
    printf("Vetor Original:\n");
    fflush(stdin);
    for (x=0;x<=4;x++)
    {
    	printf("%d ",vet[x]);
    }
    printf("\nEnderecos pares dos elementos do Vetor:\n");
    for (x=0;x<=4;x++)
    { 
        a=&vet[x];
        if (a%2==0)
        	printf("%d ",a);
    }    
    return 0;
}

