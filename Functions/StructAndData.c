#include <stdio.h>
#include <stdlib.h>
#include <string.h>
// --- struct with struct ---
typedef struct{
    int id;
} cadastro;

typedef struct{
    int cpf;
    char nome[30];
    int idade;
    cadastro lerid;
} pessoa;



 
int main()
{
 int n;
  printf("Tamanho do array: \n");
  scanf("%d", &n);
  int *p = (int*)malloc(n*sizeof(int));
  
  for(int i = 0; i< n ; i++){
      p[i]= i+1;
  }
  for(int i = 0; i< n ; i++){
      printf(" %d", p[i]);
  }
  free(p);

 pessoa p;

 return 0;
}

