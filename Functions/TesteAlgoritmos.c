#include <stdio.h>
#include <stdlib.h>


void SelectSort(int array[], int tam);

int main(){


    int array[] = {10, 30, 45, 5, 7};
    int tam = sizeof(array)/sizeof(array[0]);

   SelectSort(array, tam);

    return 0;
}

void SelectSort(int array[], int tam){
    int aux;
    int i,j;

     for(i =0; i < tam ; i++){

       int indElem = i;
      for(j = i + 1 ; j < tam ; j++){
          if( array[j] > array[indElem]){
              indElem = j;
          }
      }
       if(indElem != i){
          aux = array[i];
          array[i] = array[indElem];
          array[indElem] = aux;
       }
      printf(" %d ", array[i]);
     }
    
}