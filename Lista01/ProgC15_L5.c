#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() 
{
	int a,b;
	int *c,*d;
    printf("Digite 1o. numero inteiro:\n");
    scanf("%d",&a);
    c=&a;
    printf("Digite 2o. numero inteiro:\n");
    scanf("%d",&b);
	d=&b;    
    printf("\nEnderecos numeros %d e %d : %d e %d\n",a,b,c,d);
    if (c>d)
    { 
    	printf("Maior endereco: %d ",c);
    }    
    else
    {
     	printf("Maior endereco: %d ",d);  	
    }
    return 0;
}
