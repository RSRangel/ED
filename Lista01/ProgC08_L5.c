#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void vetor(int qtd,int *vet)
{
    int i,maior=0,n=0; 
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
    		n++;
    	}
	}   	  
	printf("%d %d",maior,n);	
}

int main() 
{
	int qtd, *vet;
    printf("Digite qte. elementos vetor:\n");
    scanf("%d",&qtd);  
    vet=(int *)malloc(qtd*sizeof(int));
    vetor(qtd,vet);
    return 0;
}
