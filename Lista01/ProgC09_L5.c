#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void vetor(int qtd,int *vet1,int *vet2,int *vet3)
{
	int i;
    printf("\nDigite elementos 1o. vetor:\n");
    for (i=0;i<qtd;i++)
    {
   	    scanf("%d",&vet1[i]); 
    }
    printf("\nDigite elementos 2o. vetor:\n");
    for (i=0;i<qtd;i++)
    {
   	    scanf("%d",&vet2[i]); 
    }    
    printf("\nVetor resultante da soma dos 2 vetores:\n");
    for (i=0;i<qtd;i++)
    {   
        vet3[i]=vet1[i]+vet2[i];
        printf("%d ",vet3[i]);
	}    
}

void main() 
{
    int i,qtd,*vet1,*vet2,*vet3;   
    printf("Digite qte. elementos vetores:\n");
    scanf("%d",&qtd);  
    vet1=(int *)malloc(qtd*sizeof(int));
    vet2=(int *)malloc(qtd*sizeof(int));
    vet3=(int *)malloc(qtd*sizeof(int));	
	vetor(qtd,vet1,vet2,vet3);    
}
