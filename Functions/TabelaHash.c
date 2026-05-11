#include <stdio.h>
#include <stdlib.h>
#include <string.h>


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



int main(){
    int tam = 0;
    printf("Tamanho da tabela: ");
    scanf("%d", &tam);
    int retorno, valor, opc, tabela[tam];

    iniciar(tabela, tam);

     do{
        printf(" 0- Sair \t  1- Inserir \t  2- Buscar  \t  3- imprimir\n");
        scanf("%i", &opc);

        switch(opc){
            case 1:
             printf("Qual valor deseja inserir? ");
             scanf("%d", &valor);
             inserir(tabela, valor, tam); 
             break;
            case 2:
             printf("Qual valor deseja buscar? ");
             scanf("%d", &valor);
             retorno = busca(tabela, valor, tam);
             if(retorno != 0)
               printf("Valor encontrado, na posicao: %d \n", retorno);
             else
              printf("Valor não encontrado!");
             break;
            case 3:
             imprimir(tabela, tam);
             break;
            default: printf("Opção invalida!!");
        }
     } while(opc != 0);
    //char a[] = {"sssa"};
    //strlen(a);
    //printf("Array: %s", a);

}