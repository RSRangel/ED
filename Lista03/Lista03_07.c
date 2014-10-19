#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

int  loc_matriz(int **matriz,char *cidade,int linha,int coluna)
{
    int n,c1,c2,m,f=0;
    char c1,c2;    
    printf("\n Digite cidades para verificar distancia: ");
    scanf("%c %c",&c1,&c2);
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
  int n,m,k,qte,**matriz;
  char *cidade;
  printf("\n Digite quantidade de cidades: ");
  scanf("%d",&qte);
  matriz=malloc(qte*sizeof(int*));
  cidade=malloc(qte*sizeof(char*));
  for(n=0;n<qte;n++) 
  {
   	printf("\n Digite nome da %da. cidade: ",n+1);
	scanf("%c",&cidade[n]);  	   	  		
  }     
  for(n=0;n<qte;n++) 
  {
  	matriz[n]=malloc(qte*sizeof(int));
  } 
  for(n=0;n<qte;n++) 
  {
  	  for(m=0;m<qte;m++) 
  	  {
  	  	if (n!=m)
  	  	{
	    	printf("\n Digite distancia entre cidade [%d] [%d]: ",n+1,m+1);
	  		scanf("%d",&matriz[n][m]);  	   	  		
  	  	}
  	  	else
  	  	{
 	  		matriz[n][m]=0;   	  		
  	  	}
  	  }
  } 
  printf("\n Matriz de distancias entre %d cidades: \n\n",qte);  
  for(n=0;n<qte;n++) 
  {
  	  for(m=0;m<qte;m++) 
  	  {
    	printf("[%d] ",matriz[n][m]);
  	  }
    	printf("\n");  	  
  }         
  loc_matriz(matriz,qte,qte);
  free(matriz);
  free(cidade);  
  return(0);
} 

