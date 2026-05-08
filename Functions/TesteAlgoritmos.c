#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define TAM 31

/*
// Algoritmo de ordenação Merge Sort
void mergeSort(int lista[], int tam){
  int i = 0;
   if(tam <= 1){
     return;
   } else{
     
   }
}

int main(){
    int lista[]={10, 2, 302, 32, 4, 231, 31, 17, 23, 47, 78,9, 3423};
    int tam = sizeof(lista)/sizeof(lista[0]);
     
    mergeSort(lista, tam);

    return;


}

// Tabela Hash and Grafos




// Estudo Ponteiros..

int Hash(int lista[],int tamanho){
     
    lista[tamanho] = lista[tamanho-1];

    int valor = lista[tamanho-1];
    int funcao;
    int resultado;

    funcao = tamanho % valor;

    resultado = funcao;

    return resultado;
}

int main(){
    int a = 200;
    int *p;
    p = &a;
    


    printf("\nEnd. A: %p ", &a);
    printf("\nEnd. apontado P: %p", p);
    printf("\nEnd. P: %p ", &p);
    printf("\nValor em P: %i ", *p);
    printf("\nValor em A: %i ", a);



    int lista[] = {20,230,342,23};
    int tamanho = sizeof(lista)/sizeof(lista[0]);

    printf("\n\nPosicao a ser inserido: %d",Hash(lista, tamanho));



    return 0;
}
*/ 

void iniciar(int t[]){
   int i;
    for(i = 0; i< TAM ; i++)
     t[i] = 0;
}


int funcaoHash(int chave){
    return chave % TAM;
}


void inserir(int t[],int valor){
    int indice = funcaoHash(valor);
    while(t[indice] != 0){
      indice = funcaoHash(indice + 1);
    }
     t[indice] = valor;
}

int busca(int t[], int chave){
   
    int busca = funcaoHash(chave);
    while(t[busca] != 0){
        if(t[busca] == chave)
          return t[busca];
        else 
          busca = funcaoHash(busca+1);
         
    }
    return 0;
}


void imprimir(int t[]){
   int i;
   for(i = 0; i<TAM; i++)
    printf("\n%d = %d\n", i, t[i]);
}



int main(){
    int retorno, valor, opc, tabela[TAM];

    iniciar(tabela);

     do{
        printf(" 0- Sair \t  1- Inserir \t  2- Buscar  \t  3- imprimir\n");
        scanf("%i", &opc);

        switch(opc){
            case 1:
             printf("Qual valor deseja inserir? ");
             scanf("%d", &valor);
             inserir(tabela, valor); 
             break;
            case 2:
             printf("Qual valor deseja buscar? ");
             scanf("%d", &valor);
             retorno = busca(tabela, valor);
             if(retorno != 0)
               printf("Valor encontrado, %d\n", retorno);
             else
              printf("Valor não encontrado!");
             break;
            case 3:
             imprimir(tabela);
             break;
            default: printf("Opção invalida!!");
        }
     } while(opc != 0);
    //char a[] = {"sssa"};
    //strlen(a);
    //printf("Array: %s", a);

}