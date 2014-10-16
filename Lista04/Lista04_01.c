#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct 
{
   char nome[40];
   float qthoras;
   float salh;
   float saltotal;   
   char depto[3];
   int matric;  
} registros;

int main(void)
{    
  int n=0,j,t=1;
  float max=0;
  char *emp;
  registros *registro;  
  registro=malloc(50*sizeof(registros)); 
  if (registro==NULL)
  {
  	puts("Memoria insuficiente!!!");
  	return(0);
  }
  printf("\nCadastro de funcionarios (Matricula=0 encerra):");
  do 
  {
	  printf("\nMatricula: ");
	  scanf("%d", &registro[n].matric);
	  if ((registro[n].matric)==0)
	  {
	  	t=0;
	  	break;
	  }
 	  printf("Nome: ");
      scanf("%s",&registro[n].nome);
 	  printf("Departamento: ");
      scanf("%s",&registro[n].depto);      
      printf("Horas trabalhadas: ");
	  scanf("%f", &registro[n].qthoras);
      printf("Salario Hora: ");
	  scanf("%f", &registro[n].salh);
 	  (registro[n].saltotal)=(registro[n].qthoras)*(registro[n].salh);
	  n++; 	  
  }
  while (t==1);
  printf("\n...................Arquivo de funcionarios\n");
  printf("\nNome       Depto      Salario Hora Qte Horas Salario Total\n");  
  for(j=0;j<n;j++) 
  {
	  printf("\n%s", registro[j].nome);
	  printf("       %s        ", registro[j].depto);	  
	  printf("             %.2f", registro[j].salh);
	  printf("         %.2f", registro[j].qthoras);
	  printf("      %.2f", registro[j].saltotal);
	  if ((registro[j].saltotal)>max)
	  {
    	emp=registro[j].nome;
        max=registro[j].saltotal;
      }
  }
  printf("\nMaior Salario: %s %.2f",emp,max);  
  free(registro);
  return(0);
} 
