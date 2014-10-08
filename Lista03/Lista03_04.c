#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 

void novovet(int *n)
{
	int x,j,*vet,par=0,impar=0;
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
		 if (*(vet+j)%2==0)
		    par++;
		 else
		    impar++;		 
	}
	printf("\n Qte. pares: %d Qte. impares: %d ",par,impar);     	
    free(vet);
}

void main()
{
	int n;
    printf("\n Quantidade de itens do vetor: ");
	scanf("%d",&n); 
	novovet(&n);
} 

