#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "binarySearch.h"


void numbersAleatory(int numberRdm[], int TAM_LISTA);
void functionOrdenation(int numeros[], int TAM_LISTA);
static void clearscreen(){ system("cls"); }

void SelectSrt(int array[], int TAM_LISTA);
void QuickSrt(int array[], int TAM_LISTA);
void BubbleSrt(int array[], int tamanho);
void mergeSrt(int lista[], int inicio, int meio, int fim);
void mrgSort(int lista[], int inicio, int fim);

void impressao(int array[], int TAM_LISTA);
int ResearchBinary(int n[], int tam_LISTA, int valor);

void startSearchBi(){

  srand(time(NULL));


 int numeros[30];  
 int TAM_LISTA = sizeof(numeros)/sizeof(numeros[0]);
 int valorAleatorio, opcao;
   
  do{
    system("cls");
    printf("\nAcerte um numero aletorio (1 - 1000): ");
    scanf("%d", &valorAleatorio);
    system("cls");
    
    numbersAleatory(numeros, TAM_LISTA);

    functionOrdenation(numeros, TAM_LISTA);

      //A busca binária - busca o valor 120, em uma geração de números aleatórios, caso não encontre retorna -1
      if(valorAleatorio == ResearchBinary(numeros, TAM_LISTA, valorAleatorio)){
        printf("\nParabens, voce acertou!! O numero: %d está na lista.\n", ResearchBinary(numeros, TAM_LISTA, valorAleatorio));
        opcao = 0;
      } else{
          printf("\nVoce errou! Quer tentar novamente?\n\n");
          printf(" 0- Nao || 1 - Sim | R: ");
          scanf("%i", &opcao);
          system("cls");
        }

  } while(opcao != 0); 
  
  printf("\n\nObrigador por utilizar nossos servicos!!\n\n");
}

void functionOrdenation(int numeros[], int TAM_LISTA){
  //Geração de números aleatórios, uma certa quantidade, entre 1 e 1000
  int opc;
  
  //Escolha entre algoritmos de ordenação, aumente o tamanho do array, e será possivel ver a diferença de tempo de execução
    printf("\n\n\t Escolha um algoritmo para ordenar os numeros gerados: \n");
    printf("1- Selection Sort \n2- Bubble Sort \n3- Quick Sort  \n4- Merge Sort  \n|| R: ");
    scanf("%i", &opc);
      
    switch(opc){
      case 1: 
        SelectSrt(numeros, TAM_LISTA); impressao(numeros, TAM_LISTA); break;
      case 2:
        BubbleSrt(numeros, TAM_LISTA); impressao(numeros, TAM_LISTA); break;
      case 3:
        QuickSrt(numeros, TAM_LISTA); impressao(numeros, TAM_LISTA); break;
      case 4:
        mrgSort(numeros,0, TAM_LISTA-1); impressao(numeros, TAM_LISTA); break;
      }

}

int ResearchBinary(int n[], int tam_LISTA, int valor){
    int inicio = 0;
    int fim = tam_LISTA-1;
    
    while (inicio <= fim)
    {
      int meio = (inicio + fim)/2;

         if(n[meio] == valor){
           return meio;
         } else if(n[meio] < valor) {
            inicio = meio +1;
         } else
             fim = meio -1 ;
    }
    return -1;
}

void numbersAleatory(int numberRdm[], int TAM_LISTA){
    int max = 1000;
    int min = 1;
    printf("\nValores gerados: \n");
    for (int i = 0; i < TAM_LISTA; i++){
        numberRdm[i] = rand() % (max - min + 1) + min;
        printf("%d - ", numberRdm[i]);
    }
}

void SelectSrt(int array[], int TAM_LISTA){
    int aux;
    int i,j;

     for(i =0; i < TAM_LISTA ; i++){

       int indElem = i;
      for(j = i + 1 ; j < TAM_LISTA ; j++){
          if( array[j] < array[indElem]){
              indElem = j;
          }
      }
       if(indElem != i){
          aux = array[i];
          array[i] = array[indElem];
          array[indElem] = aux;
       }
     }
    
}

void BubbleSrt(int array[], int tamanho){
     int aux;
     for(int i = 0; i < tamanho; i++){

      for(int j = i+1 ; j < tamanho; j++){
          
          if(array[i] > array[j]){
               aux = array[i];
               array[i] = array[j];
               array[j] = aux;
          }
     }
    }     
     return;
}

void QuickSrt(int array[], int TAM_LISTA){
   
  int i = 0;
  int k = 0;
  int pivo = array[0];

  int menoresEsquerda[TAM_LISTA];
  int maioresDireita[TAM_LISTA];
     
    if(TAM_LISTA <= 1){
      return;
    } else {
        for(int j = 1; j < TAM_LISTA; j++){
          if(array[j] >= pivo){
            maioresDireita[k++] = array[j];
          } else{
            menoresEsquerda[i++] = array[j];
            }
        }
          QuickSrt(menoresEsquerda, i);
          QuickSrt(maioresDireita, k);
          
            int indice = 0;
            for(int j = 0; j < i ; j++){
              array[indice++] = menoresEsquerda[j];
            }
              array[indice++] = pivo;

            for(int j = 0; j < k ; j++){
              array[indice++] = maioresDireita[j];
            }  
          
      }
}

void impressao(int array[], int TAM_LISTA){
  printf("\n");
  for(int i = 0; i < TAM_LISTA ; i++){
    printf("%d - ", array[i]);
  }
  printf("\n");
}


void mergeSrt(int lista[], int inicio, int meio, int fim){
 int i, j, k, n1 = meio - inicio + 1;
 int n2 = fim - meio;

 int *esquerda = malloc(n1* sizeof(int));
 int *direita = malloc(n2* sizeof(int));

 for( i=0; i < n1 ; i++)
    esquerda[i] = lista[inicio+i];
 for( j=0 ; j< n2 ; j++)
    direita[j] = lista[meio+1+j];
  
  i =0, j =0, k = inicio;
   while(i < n1 && j <n2){
    if(esquerda[i] <= direita[j])
      lista[k++] =esquerda[i++];
    else
      lista[k++]=direita[j++];
   }
  
   while(i<n1)
    lista[k++]=esquerda[i++];
   while(j<n2)
    lista[k++]= direita[j++];

 free(esquerda);
 free(direita);
}
void mrgSort(int lista[], int inicio, int fim){
    if(inicio < fim){
     int meio =(inicio + fim)/2 ;

     mrgSort(lista, inicio, meio);
     mrgSort(lista, meio+1, fim);
     mergeSrt(lista, inicio, meio, fim);
    }
}
