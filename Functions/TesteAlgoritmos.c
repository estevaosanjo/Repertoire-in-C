#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Algoritmo de ordenação Merge Sort

void merge(int lista[], int inicio, int meio, int fim){
 int i, j, k;
 int n1 = inicio - meio + 1;
 int n2 = fim - meio;

 int *esquerda = malloc(n1* sizeof(int));
 int *direita = mallox(n2* sizeof(int));

  for( i=0; i < n1 ; i++)
    esquerda[i] = lista[inicio+i];
  for( j=0 ; j< n2 ; j++)
    direita[j] = lista[meio+1+j];
    




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

int main(){
    int lista[]={10, 2, 302, 32, 4, 231, 31, 17, 23, 47, 78,9, 3423};
    int tam = sizeof(lista)/sizeof(lista[0]);
    mergeSort(lista, 0, tam-1);

}

// Grafos
 