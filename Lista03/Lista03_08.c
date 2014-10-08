#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int  loc_matriz(int **matriz,int linha,int coluna)
{
    int n,p,m,f=0;
    printf("\n Digite numero a ser localizado: ");
    scanf("%d",&p);
    for(n=0;n<linha;n++) 
    {
  	  for(m=0;m<coluna;m++) 
  	  {
  	  	if (matriz[n][m]==p)
  	  	{
  	  		f=1;
        	printf(" Numero %d Posicao Matriz [%d][%d]",p,n+1,m+1);  	  		
  	  	}
  	  }
    } 
    if (f==0) 
       printf("\n Numero %d nao localizado",p);		            
	return(0);
}

int main()
{    
  int n,m,k,linha,coluna,**matriz;
  printf("\n Digite numero de linhas: ");
  scanf("%d",&linha);
  printf("\n Digite numero de colunas: ");
  scanf("%d",&coluna);  
  matriz=malloc(linha*sizeof(int*));
  for(n=0;n<linha;n++) 
  {
  	matriz[n]=malloc(coluna*sizeof(int));
  } 
  for(n=0;n<linha;n++) 
  {
  	  for(m=0;m<coluna;m++) 
  	  {
    	printf("\n Digite elemento [%d] [%d]: ",n+1,m+1);
  		scanf("%d",&matriz[n][m]);  	  	
  	  }
  } 
  printf("\n Matriz [%d] [%d]: \n\n",linha,coluna);  
  for(n=0;n<linha;n++) 
  {
  	  for(m=0;m<coluna;m++) 
  	  {
    	printf("[%d] ",matriz[n][m]);
  	  }
    	printf("\n");  	  
  }         
  loc_matriz(matriz,linha,coluna);
  free(matriz);
  return(0);
} 

