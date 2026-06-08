#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Grafos

typedef struct{
   char nome[20];
   int idade;
} Pessoa;

int main(){
  Pessoa pessoa[] = {
    {"Estevao", 20},
    {"Joao", 18},
    {"Gabriela", 25}
  };
  int QTD_pessoa = sizeof(pessoa)/sizeof(Pessoa);
   for(int i = 0; i< QTD_pessoa; i++){
     printf("\tNome: %s || Idade: %i\n", pessoa[i].nome, pessoa[i].idade);
   }
   return 0;
}