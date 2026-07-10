#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "tableHash.h"

//--------- Tabela Hash ---------

void iniciarHs(int t[], int tam);
int funcHash(int chave, int tam);
void inserirHs(int t[],int valor, int tam);
int buscaHs(int t[], int chave, int tam);
void imprimirHs(int t[], int tam);


void startHash(){
    int tam = 0;
    printf("\n\n------- Tabela Hash -------\n\n\n");
    printf("Quantidade de elementos: ");
    scanf("%d", &tam);
    int retorno, valor, opc, tabela[tam];

    iniciarHs(tabela, tam);

     do{
        printf("\n\n--------------------------------------------------------\n\n");
        printf("\t\n 1- Inserir Elementos\t\n 2- Buscar Elementos\t\n 3- imprimir Tabela\t\n\t0 - Sair\n");
        scanf("%i", &opc);

        switch(opc){
            case 0:
              printf("\n\nObrigador por utilizar nossos servicos!!\n\n");
              return;
            case 1:
              printf("\n\nQual valor deseja inserir? ");
              scanf("%d", &valor);
              inserirHs(tabela, valor, tam); 
              break;
            case 2:
              printf("\n\nQual valor deseja buscar? ");
              scanf("%d", &valor);
              retorno = buscaHs(tabela, valor, tam);
                if(retorno != -1)
                  printf("\n\nValor encontrado, na posicao: %d \n\n", retorno);
                else
                  printf("\n\nValor nao encontrado!");
              break;
            case 3:
              imprimirHs(tabela, tam);
              break;
            default: printf("Opcao invalida!!");
        }
     } while(opc != 0);
}

void iniciarHs(int t[], int tam){
   int i;
    for(i = 0; i< tam ; i++)
     t[i] = 0;
}

int funcHash(int chave, int tam){
    return chave % tam;
}


void inserirHs(int t[],int valor, int tam){
    int indice = funcHash(valor, tam);
    while(t[indice] != 0){
      indice = funcHash(indice + 1, tam);
    }
     t[indice] = valor;
}

int buscaHs(int t[], int chave, int tam){
   
    int busca = funcHash(chave, tam);
    while(t[busca] != 0){
        if(t[busca] == chave)
          return busca;
        else 
          busca = funcHash(busca+1, tam);
         
    }
    return 0;
}


void imprimirHs(int t[], int tam){
   int i;
   for(i = 0; i<tam; i++)
    printf("\n%d = %d\n", i, t[i]);
}


