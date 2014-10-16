#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(void)
{    
  int n=0,k,t=1,xa=0,xe=0,xi=0,xo=0,xu=0;
  char *str;
  str=malloc(100*sizeof(char)); 
  if (str==NULL)
  {
  	puts("Memoria insuficiente!!!");
  	return(0);
  }
  printf("\nDigite texto: ");
  fflush(stdin);
  fgets(str,100,stdin);
  printf("\nQuantidade de vogais do texto:\n");  
  for(k=0;k<strlen(str);k++) 
  {
  	if (str[k]=='a' || str[k]=='A') 
  	   xa++;
  	if (str[k]=='e' || str[k]=='E') 
  	   xe++;
  	if (str[k]=='i' || str[k]=='I') 
  	   xi++;
  	if (str[k]=='o' || str[k]=='O') 
  	   xo++;
  	if (str[k]=='u' || str[k]=='U') 
  	   xu++;		 		 		   	   
  }
  if (xa>0)
    printf("\nQuantidade de vogal A: %d\n",xa);
  if (xe>0)
    printf("\nQuantidade de vogal E: %d\n",xe);
  if (xi>0)
    printf("\nQuantidade de vogal I: %d\n",xi); 
  if (xo>0)
    printf("\nQuantidade de vogal O: %d\n",xo);  
  if (xu>0)
    printf("\nQuantidade de vogal U: %d\n",xu);  				 		  	  
  free(str);
  return(0);
} 

