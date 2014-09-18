#include <stdio.h>
#include <conio.h>

calculo(int *n1,int *n2)
{
  int maior,menor;
  maior=*n1;menor=*n2;
  if (*n2>*n1)
  {
  	maior=*n2;
  	menor=*n1;
  }
  printf("Maior valor: %d e Menor valor: %d", maior,menor);
}

void main()
{
    int n1=0,n2=0;
    printf("Digite 2 numeros inteiros:\n");
    printf("Digite 1o. numero inteiro:\n");  
    scanf("%d",&n1);
    printf("Digite 2o. numero inteiro:\n");  
    scanf("%d",&n2);      
	calculo(&n1,&n2);
}
