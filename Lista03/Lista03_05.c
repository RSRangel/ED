#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

typedef struct 
{
   char nome;
   int matricula;
   int ano_nasc;  
} ficha_de_aluno;

int main(void)
{    
  int n,j;
  printf("\n Digite quantidade de alunos: ");
  scanf("%d",&n); 
  ficha_de_aluno *aluno;  
  aluno=(ficha_de_aluno*)malloc(n*sizeof(ficha_de_aluno)); 
  if (aluno==NULL)
  {
  	puts("Memoria insuficiente!!!");
  	return(0);
  }
  printf("\nCadastro de alunos:");
  for(j=0;j<n;j++) 
  {
 	  printf("\nNome do aluno: ");
 	  fflush(stdin);
      fgets(&aluno[j].nome,10,stdin);
      printf("\nMatricula: ");
	  scanf("%d", &aluno[j].matricula);
      printf("\nAno de Nascimento: ");
	  scanf("%d", &aluno[j].ano_nasc);
  }
  printf("\n.............Arquivo de alunos\n");
  printf("\nNome       Matricula      Ano Nascimento\n");  
  for(j=0;j<n;j++) 
  {
	  printf("%c", aluno[j].nome);
	  printf("             %d", aluno[j].matricula);
	  printf("               %d\n", aluno[j].ano_nasc);  	
  }
  free(aluno);
  return(0);
} 
