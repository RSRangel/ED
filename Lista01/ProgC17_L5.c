#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() 
{
	int x,a;
	float vet[]={1.1,2.3,3.4,2.56,5.78};
    printf("Vetor Original:\n");
    for (x=0;x<=4;x++)
    {
    	printf("%.2f ",vet[x]);
    }
    printf("\nEnderecos dos elementos do Vetor:\n");
    for (x=0;x<=4;x++)
    { 
        a=&vet[x];
    	printf("%d ",a);
    }    
    return 0;
}
