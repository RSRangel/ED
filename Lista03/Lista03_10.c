#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int  loc_vet(int *vet,int linha)
{
    int n,p,f=0;
    printf("\n Digite numero para pesquisa de multiplos: ");
    scanf("%d",&p);
    printf("\n Multiplos:\n",p);	    
    for(n=0;n<linha;n++) 
    {
   	  	if (vet[n]%p==0)
  	  	{
  	  		f=1;
        	printf(" [%d]",vet[n]);  	  		
  	  	}
    } 
    if (f==0) 
       printf("\n Numero %d sem multiplos no vetor",p);		            
	return(0);
}

int main()
{    
  int n,linha,*vet;
  printf("\n Digite numero de posicoes do vetor: ");
  scanf("%d",&linha);
  vet=malloc(linha*sizeof(int*));
  for(n=0;n<linha;n++) 
  {
    	printf("\n Digite elemento [%d]: ",n+1);
  		scanf("%d",&vet[n]);  	  	
  } 
  printf("\n Vetor [%d] elementos: \n\n",linha);  
  for(n=0;n<linha;n++) 
  {
    	printf("[%d] ",vet[n]);
  }         
  loc_vet(vet,linha);
  free(vet);
  return(0);
} 

