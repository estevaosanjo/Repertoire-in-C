#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

// Algoritmo de ordenação Merge Sort

void merge(int lista[], int inicio, int meio, int fim){
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

void mergeSort(int lista[], int inicio, int fim){
    if(inicio < fim){
     int meio =(inicio + fim)/2 ;

     mergeSort(lista, inicio, meio);
     mergeSort(lista, meio+1, fim);
     merge(lista, inicio, meio, fim);
    }
}


void imprimirMS(int lista[], int tam){
  int k;
  for(k = 0; k < tam; k++)
    printf("%d ", lista[k]);
  printf("\n");
}


void preencherLista(int lista[], int tam){
  int i;
  int max = 100;
  int min = 1;
  for(i = 0; i< tam; i++)
   lista[i] = rand() % (max - min + 1) + min;
}

int main(){
    srand(time(NULL));
    int tam = 50;
    int lista[tam];
    
    preencherLista(lista, tam);
    mergeSort(lista, 0, tam-1);
    imprimirMS(lista, tam);

}
