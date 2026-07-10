#ifndef SORTINGALGORITHM_H
#define SORTINGALGORITHM_H

int buscarMaiorNumero(int v[], int tam);
void SelectSort(int array[], int tam);
void BubbleSort(int array[], int tamanho);
void QuickSort(int array[], int tam);
void merge(int lista[], int inicio, int meio, int fim);
void mergeSort(int lista[], int inicio, int fim);
void impressaoSort(int array[], int tam);

void startSorting(); //start

#endif