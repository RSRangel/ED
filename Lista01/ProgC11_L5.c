#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void vetor(int qtd,int n,int *vet)
{
    int i,maior=0,k=0; 
    printf("\nDigite elementos vetor:\n");
    for (i=0;i<qtd;i++)
    {
   	    scanf("%d",&vet[i]); 
    }
    printf("\nMaior elemento e qte no vetor:\n");
    maior=vet[0];
    for (i=0;i<qtd;i++)
    {   
    	if (vet[i]>=maior)
    	{
    		maior=vet[i];
    	}
	}  
    for (i=0;i<qtd;i++)
    {   
    	if (vet[i]==maior)
    	{
    		k++;
    	}
	}   	  
	printf("%d %d",maior,k);
    printf("\nVetor:\n");
    k=0;
    for (i=0;i<qtd;i++)
    {   
        k++;
        printf("%d ",vet[i]);
    	if (k==n)
    	{
    		printf("\n");
    		k=0;
    	}
	}  		
}

int main() 
{
	int qtd, n, *vet;
    printf("Digite qte. elementos vetor:\n");
    scanf("%d",&qtd);  
    printf("Digite qte. elementos por linha:\n");
    scanf("%d",&n);      
    vet=(int *)malloc(qtd*sizeof(int));
    vetor(qtd,n,vet);
    return 0;
}
