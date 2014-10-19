#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{    
  int linha=6,coluna=6,k,n,m,p=0;
  float *str,**matriz,tot=0.0;  
  str=malloc(36*sizeof(float*)); 
  matriz=malloc(linha*sizeof(float*));
  for(n=0;n<linha;n++) 
  {
   	matriz[n]=malloc(coluna*sizeof(float*));
  }   
  if (str==NULL && matriz==NULL)
  {
  	puts("Memoria insuficiente!!!");
  	return(0);
  } 
  for(m=0;m<36;m++) 
  {
   	printf("\n Digite elemento %do. de 36: ",m+1);
	scanf("%f",&str[m]);
  }  
  for(n=0;n<linha;n++) 
  {
 	  for(m=0;m<coluna;m++) 
   	  {
		matriz[n][m]=str[p];
		p++;	  	
   	  }
  }  	
  printf("\n Matriz e soma elementos de cada linha: \n ");  
  for(n=0;n<linha;n++) 
  {
 	  for(m=0;m<coluna;m++) 
   	  {
		printf("%.2f  ",matriz[n][m]);
		tot=tot+matriz[n][m];
   	  }
	  printf("    %.2f",tot); 
	  tot=0.0;  	  
   	  printf("\n");
  }  	
  free(str);
  free(matriz);    
} 

