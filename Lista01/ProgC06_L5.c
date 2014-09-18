#include <stdio.h>
#include <conio.h>
#include <math.h>

float raizes(float *a,float *b,float *c,float *x1,float *x2)
{
  float r=*a,s=*b,t=*c,x=*x1,y=*x2;
  if (((s*s)-(4*r*t))<0)
  {
     printf("Raizes imaginarias!");
     return 0;
  }
  x=((-1*s)+sqrt((s*s)-(4*r*t))/(2*r));	
  y=((-1*s)-sqrt((s*s)-(4*r*t))/(2*r));	  
  printf("Raizes: \n");
  printf("1a. raiz: %.2f e 2a. raiz: %.2f", x,y);
}

void main()
{
    float a=0.0,b=0.0,c=0.0,x1=0.0,x2=0.0;
    printf("Digite 3 constantes da eq 2o. grau:\n");
    printf("Digite 1a. constante:\n");  
    scanf("%f",&a);
    printf("Digite 2a. constante:\n");  
    scanf("%f",&b);
    printf("Digite 3a. constante:\n");  
    scanf("%f",&c);	    
	raizes(&a,&b,&c,&x1,&x2);
}
	
