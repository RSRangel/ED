#include <stdio.h>
#include <conio.h>

troca(int *n1,int *n2)
{
  printf("Valores com soma na 1a. variavel: \n");
  printf("1a. variavel: %d e 2a. variavel: %d", *n1+*n2,*n2);
}

void main()
{
    int n1=0,n2=0;
    printf("Digite 2 numeros inteiros:\n");
    printf("Digite 1o. numero inteiro:\n");  
    scanf("%d",&n1);
    printf("Digite 2o. numero inteiro:\n");  
    scanf("%d",&n2);      
	troca(&n1,&n2);
}
	
