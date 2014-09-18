#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() 
{
	int x,y,a;
	float vet[3][3]={1.1,2.3,3.4,4.6,7.8,2.8,5.6,8.9,1};
    printf("Vetor Original:\n");
    for (x=0;x<=2;x++)
    {
    	for (y=0;y<=2;y++)
    {
    	printf("%.2f ",vet[x][y]);
    }
		
    }
    printf("\nEnderecos dos elementos do Vetor:\n");
    for (x=0;x<=2;x++)
    {
    	for (y=0;y<=2;y++)
    {
    	a=&vet[x][y];
    	printf("%d ",a);
    }
		
    }
    return 0;
}
