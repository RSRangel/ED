#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 

void novovet(int *n)
{
	int x,j,*vet;
	x=*n;
	vet=(int*)malloc(x*sizeof(int));
    printf("\n Digite elementos do vetor:\n"); 
	for(j=0;j<x;j++)
    {  
       printf(" %do.elemento do vetor: ",j+1);     
	   scanf("\n %d",vet+j);
	}   
    printf("\n Vetor: \n"); 	 
	for(j=0;j<x;j++)
    {  
	     printf(" %d ",*(vet+j)); 
	}
    free(vet);
}

void main()
{
	int n;
    printf("\n Quantidade de itens do vetor: ");
	scanf("%d",&n); 
	novovet(&n);
} 

