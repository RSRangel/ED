#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 

void novovet(int *n)
{
	int x,j,*vet,k=0,s=0;
	x=*n;
	vet=(int*)malloc(x*sizeof(int));
    printf("\n Digite elementos do vetor:\n"); 
	for(j=0;j<x;j++)
    {  
       printf(" %do.elemento do vetor: ",j+1);     
	   scanf("\n %d",&k);
	   if ((k)>=0)
	   {
    	  *(vet+j)=k;
	   	  s++;
	   }
	   else 
	      break;	
	}   
    printf("\n Vetor: \n"); 	 
	for(j=0;j<s;j++)
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

