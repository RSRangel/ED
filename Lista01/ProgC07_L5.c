#include <stdio.h>
#include <stdlib.h>
#include <math.h>

float calculo(float *a,int *b,float *c)
{
  float r=*a,s=0.0;
  int t=0;
  t=(int)r;	
  s=r-t;	  
  printf("Numero digitado: %.2f Parte Inteira: %d Parte Fracionaria: %.2f", r,t,s);
}

void main()
{
    float a=0.0,c=0.0;
    int b=0;
    printf("Digite um numero real:\n");
    scanf("%f",&a);
	calculo(&a,&b,&c);
}
	
