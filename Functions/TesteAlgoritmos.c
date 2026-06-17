#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

// Grafos

/*
typedef struct{
    int id;
    char nome[40];
} No;


No *funcaoD(No * registro){
   int tam = strlen(registro->nome); 
   registro->id = tam * tam;
};


No * funcao(No * registro){
    printf("Digite seu nome: ");
    fgets(registro->nome, 40, stdin);
        
    if(strlen(registro->nome) != 0){
            funcaoD(registro);
    }   else{
            printf("Função não encontrada");
        }
};

void criarCad(No * registro){
int tamanho = 3;
  for(int i = 0 ; i < tamanho; i++){
    funcao(&registro[i]);
  }
}

void imprimirCads(No * registro){
 for(int i = 0; i < 3 ; i++){
    printf("\tNome: %s Id: %d\n", registro[i].nome, registro[i].id);
 }
}

int main(){

    No *registro = calloc(4, sizeof(*registro));
    if(registro == NULL){
        printf("Erro ao alocar memoria\n");
        return 1;
    }

    criarCad(registro);
    imprimirCads(registro);

    free(registro);
return 0;
}



typedef struct {
    char nome[40];
    int idade;

} Funcionario;

void Aniversario(Funcionario * niver){
    niver->idade++;
}
    Funcionario funcionario1 ={"Joao", 31};
    Funcionario funcionario2 ={"Carla", 33};

    printf("Nome: %s idade: %i", funcionario1.nome, funcionario1.idade);

    Aniversario(&funcionario1);
    printf("Nome: %s idade: %i", funcionario1.nome, funcionario1.idade);
    

int main(){

    return 0;
}
*/