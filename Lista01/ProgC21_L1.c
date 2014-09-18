#include <stdio.h>
#include <string.h>
#include <stdlib.h>

busca(char msg1[256],char msg2[256]) 
{ 
    int a,b,n=0,valor=0,tot=0;
    char *y,c,d;
	for (a=0; a<strlen(msg2); a++)
    {
        y=&msg2[a];
        c=*y;
		for (b=n; b<strlen(msg1); b++)
		{
	        y=&msg1[b];
    	    d=*y;
    	    n++;
    	    printf ("\n%c %c",c,d);
			if (c==d)
			{
				tot++;
				a++;
		        y=&msg2[a];
         	    c=*y;
			}
			if (tot==strlen(msg2))
			{
				valor=1;
			}
		}
	}
		if (valor==1)
  		   printf ("\nTexto %s localizado",msg2);
  		else
  		   printf ("\nTexto %s nao localizado",msg2);		     
    return(0);
}

int main() 
{
	char msg1[256],msg2[256];
	printf("\nDigite um texto:\n");
    fflush(stdin);
    gets(msg1);
	printf("\nDigite texto de busca:\n");
    fflush(stdin);
    gets(msg2);    
    busca(msg1,msg2);
    return 1;
}

