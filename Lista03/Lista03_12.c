#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int  trans_matriz(int **matriz,int linha,int coluna)
{
    int n,*p,m;
    printf("\n Matriz Transposta [%d] [%d]: \n\n",coluna,linha);  
    for(n=0;n<coluna;n++) 
    {
  	  for(m=0;m<linha;m++) 
  	  {
    	printf("[%d] ",matriz[m][n]);
  	  }
    	printf("\n");  	  
    }             
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
  trans_matriz(matriz,linha,coluna);
  free(matriz);
  return(0);
} 

