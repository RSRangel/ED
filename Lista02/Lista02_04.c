#include <stdio.h> 
#include <string.h> 

void maxmin(int *a,int *b,int *v)
{
	int temp,x;
	for  (x=0;x<9;++x)
	{
		temp=v[x];
	    if (temp<=*a)
	       *a=temp;
  	    if (temp>=*b)
	       *b=temp;     
	}
    printf("Minimo Maximo: %d %d\n ",*a,*b); 
}

void main()
{
	int a=2,b=3,*c,*d,v[9]={1,2,3,4,5,6,7,8,9};
	c=&a;
	d=&b;
	maxmin(c,d,v);
} 
