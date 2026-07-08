#include <stdio.h>
#include <stdlib.h>
#include <string.h>

//--------- Tabela Hash ---------

void iniciar(int t[], int tam);
int funcaoHash(int chave, int tam);
void inserir(int t[],int valor, int tam);
int busca(int t[], int chave, int tam);
void imprimir(int t[], int tam);


int main(){
    int tam = 0;
    printf("\n\n------- Tabela Hash -------\n\n\n");
    printf("Quantidade de elementos: ");
    scanf("%d", &tam);
    int retorno, valor, opc, tabela[tam];

    iniciar(tabela, tam);

     do{
        printf("\n\n--------------------------------------------------------\n\n");
        printf("\t\n 1- Inserir Elementos\t\n 2- Buscar Elementos\t\n 3- imprimir Tabela\t\n\t0 - Sair\n");
        scanf("%i", &opc);

        switch(opc){
            case 0:
             return printf("\n\nObrigador por utilizar nossos servicos!!\n\n");
            case 1:
             printf("\n\nQual valor deseja inserir? ");
             scanf("%d", &valor);
             inserir(tabela, valor, tam); 
             break;
            case 2:
             printf("\n\nQual valor deseja buscar? ");
             scanf("%d", &valor);
             retorno = busca(tabela, valor, tam);
             if(retorno != -1)
               printf("\n\nValor encontrado, na posicao: %d \n\n", retorno);
             else
              printf("\n\nValor nao encontrado!");
             break;
            case 3:
             imprimir(tabela, tam);
             break;
            default: printf("Opcao invalida!!");
        }
     } while(opc != 0);
}

void iniciar(int t[], int tam){
   int i;
    for(i = 0; i< tam ; i++)
     t[i] = 0;
}

int funcaoHash(int chave, int tam){
    return chave % tam;
}


void inserir(int t[],int valor, int tam){
    int indice = funcaoHash(valor, tam);
    while(t[indice] != 0){
      indice = funcaoHash(indice + 1, tam);
    }
     t[indice] = valor;
}

int busca(int t[], int chave, int tam){
   
    int busca = funcaoHash(chave, tam);
    while(t[busca] != 0){
        if(t[busca] == chave)
          return busca;
        else 
          busca = funcaoHash(busca+1, tam);
         
    }
    return 0;
}


void imprimir(int t[], int tam){
   int i;
   for(i = 0; i<tam; i++)
    printf("\n%d = %d\n", i, t[i]);
}


