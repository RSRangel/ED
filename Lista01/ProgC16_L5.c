#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() 
{
	int a,b,e,f;
	int *c,*d;
    printf("Digite 1o. numero inteiro:\n");
    scanf("%d",&a);
    c=&a;
    e=*c;
    printf("Digite 2o. numero inteiro:\n");
    scanf("%d",&b);
	d=&b;
	f=*d;    
    printf("\nEnderecos numeros %d e %d : %d e %d\n",a,b,c,d);
    if (c>d)
    { 
    	printf("Maior endereco e numero: %d %d",c,e);
    }    
    else
    {
     	printf("Maior endereco e numero: %d %d",d,f);  	
    }
    return 0;
}
