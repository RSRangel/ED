#include <stdio.h> 
#include <string.h> 
#include <stdlib.h> 

void novovet(char *str,char *s)
{
	int x,y=0;
	int* v;
	char t,k=*s;
    printf("\n Vetor de posicoes letra %c:\n",k); 
	for(x=0;x<strlen(str);x++)
    {  
	   t=str[x];
       if (t==k)
	   {
	   	   y++; 
       }	
	}    
	v=(int*)malloc(y*sizeof(int));
	y=0;  
	for(x=0;x<strlen(str);x++)
    {  
	   t=str[x];
       if (t==k)
	   {
			 v[y]=x;
		     printf("\n %d",v[y]); 
	   	   y++; 
       }	
	}
    printf("\n Quantidade de ocorrencias: %d",y); 
    free(v);
}

void main()
{
	char *str="teste",*s="e";
	novovet(str,s);
} 

