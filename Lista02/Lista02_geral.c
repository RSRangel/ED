#include <stdio.h> 
#include <string.h> 

void troca(int *a,int *b)
{int *temp,x;
x=*a;
a=b;
*b=x;
	printf("a b: %d %d\n ",a,b); 
}

void trocaf(float *a,float *b)
{float temp;
temp=*a;
*a=*b;
*b=temp;
	printf("f1 f2: %.2f %.2f \n ",*a,*b); 
}

void main()
{
	int x,*p,a=2,b=3,*c,*d,v[99];
		char *e, *f,g,h;
		int z = 100, *q, **pp;
		float x1=3.25,x2=7.56,*k,*l;
	x=100;
	p=&x;
	printf("Valor de p: %d\n ",*p); 
	c=&a;
	d=&b;
	k=&x1;
	l=&x2;
	troca(c,d);
	trocaf(k,l);

e = "abacate";
f = "uva";
if (e < f)
printf ("\n%s vem antes de %s no dicionário\n", e, f);
else
printf ("\n%s vem depois de %s no dicionário\n", e, f);
for  (x=0;x<99;++x)
{v[x]=98-x;
	printf(" %d ",v[x]); 
}
	printf("\n "); 
for  (x=0;x<99;++x)
{
v[x]=v[v[x]];
	printf(" %d ",v[x]); 
	
}
q = &z;
pp = &q;
printf("\nValor de pp: %d\n", **pp);

} 
