#include <stdio.h>
#include <string.h>
#include <stdlib.h>

vetor(int vet[])
{
	int *a;
	int b,x;
    printf("Vetor Original:\n");
    fflush(stdin);
    for (x=0;x<=4;x++)
    {
        a=&vet[x];
        b=*a;
    	printf("%d ",b);
    }
}

int main() 
{
	int vet[]={10,2,3,4,43};
    vetor(vet);
    return 0;
}

