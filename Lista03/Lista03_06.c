#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int texto(int *n)
{
  int j,k=0;
  j=*n;	
  char *str=(char*)malloc(j*sizeof(char)); 
  if (str==NULL)
  {
  	puts("Memoria insuficiente!!!");
  	return(0);
  }	
  printf("\nDigite texto: ");
  fflush(stdin);
  fgets(str,j,stdin);
  printf("\nTexto digitado sem vogais:\n");  
  for(k=0;k<j;k++) 
  {
  	if (str[k]!='a' && str[k]!='e' && str[k]!='i' && str[k]!='o' && str[k]!='u' && str[k]!='A' && str[k]!='E' && str[k]!='I' && str[k]!='O' && str[k]!='U') 
	  printf("%c", str[k]);
  }
  free(str);
}

int main()
{    
  int n;
  printf("\n Digite tamanho da String: ");
  scanf("%d",&n);
  texto(&n); 
  return(0);
} 

