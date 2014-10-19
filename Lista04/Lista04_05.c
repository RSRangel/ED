#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{    
  int *str,**matriz,linha=2,coluna=2,k,n,m,p;
  str=malloc(40*sizeof(int)); 
  for(k=0;k<5;k++) 
  {
   matriz=malloc(linha*sizeof(int*));
   for(n=0;n<linha;n++) 
   {
    	matriz[n]=malloc(coluna*sizeof(int));
   }   
   if (str==NULL && matriz==NULL)
   {
	  	puts("Memoria insuficiente!!!");
	  	return(0);
   } 
      for(n=0;n<linha;n++) 
      {
    	  for(m=0;m<coluna;m++) 
    	  {
        	printf("\n Digite elemento %da. matriz [%d] [%d]: ",k+1,n+1,m+1);
    		scanf("%d",&matriz[n][m]);
			p=p+matriz[n][m];	  	
    	  }
      }  	
  str[k]=p;
  p=0;
  free(matriz);  	
  }  
  printf("\n Numeros area alocada (soma elementos matriz): \n ");  
  for(n=0;n<5;n++) 
  {
    	printf(" %d",str[n]);
  } 
  free(str);
} 

