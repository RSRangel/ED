#include <stdio.h>
#include <conio.h>

calculo(int *n1,int *n2,int *n3)
{
  int t1,t2,t3,temp;
  t1=*n1;t2=*n2;t3=*n3;
  if ((t3>t2) && (t3>t1) && (t2<t1))
  {
  	t2=*n1;
  	t1=*n2;
  }
  if ((t2>t1) && (t3>t1) && (t2>t3))
  {
  	t2=*n3;
  	t3=*n2;
  }  
  if ((t2>t3) && (t2<t1) && (t3<t1))
  {
  	t1=*n3;
  	t2=*n2;
  	t3=*n1;
  }    
  printf("Numeros ordenados: %d %d %d", t1,t2,t3);
}

void main()
{
    int n1=0,n2=0,n3=0;
    printf("Digite 3 numeros inteiros:\n");
    printf("Digite 1o. numero inteiro:\n");  
    scanf("%d",&n1);
    printf("Digite 2o. numero inteiro:\n");  
    scanf("%d",&n2);   
    printf("Digite 3o. numero inteiro:\n");  
    scanf("%d",&n3);      	   
	calculo(&n1,&n2,&n3);
}
