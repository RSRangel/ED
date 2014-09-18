#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void vetor(int *a,float *b,char *c)
{
    int i=*a;
	float j=*b;
	char k=*c; 
    printf("\nInteiro, Real e Caracter: %d %.2f %c\n",i,j,k);
    i=*a+1;
    j=*b+1;
    k=*c+20;
    printf("\nInteiro, Real e Caracter: %d %.2f %c\n",i,j,k);    
}

int main() 
{
	int a;
	float b;
	char c;
    printf("Digite numero inteiro:\n");
    scanf("%d",&a);  
    printf("Digite numero real:\n");
    scanf("%f",&b);      
    printf("Digite caracter:\n");
    scanf("%s",&c);     
    vetor(&a,&b,&c);
    return 0;
}
