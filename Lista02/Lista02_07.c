#include <stdio.h> 
#include <string.h> 

char *strcopy(char *str)
{
	char *temp;
	temp=str;
	printf("Copia do texto: %s\n ",temp); 
}

void main()
{
	int *p;
	char *str="teste";
	strcopy(str);
} 
