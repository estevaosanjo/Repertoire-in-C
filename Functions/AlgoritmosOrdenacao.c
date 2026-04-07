#include <stdio.h>
#include <stdlib.h>

int buscarMaiorNumero(int v[], int tam);
void SelectSort(int array[], int tam);
void BubbleSort(int array[], int tamanho);

int main(){
    int numberDesordanation[]={30,23,322,33,743,1,0,4905,86};
    int tam = sizeof(numberDesordanation)/sizeof(numberDesordanation[0]);
    int opc, op;
    printf("\nLista desordenada: ");
    for(int i = 0; i < tam ; i++){      
    printf(" %d", numberDesordanation[i]);
    }

    printf("O que deseja? \n");
    printf("1- Buscar maior numero \n");
    printf("2- Ordenar a lista \n");
    scanf("%i", &opc);
    switch(opc){
    case 1: 
       buscarMaiorNumero(numberDesordanation,tam);
       break;
    case 2:
      printf("\n 1- Selection Sort | or | 2- Bubble Sort \n");
      scanf("%i", &op);
      if(op == 1){
         SelectSort(numberDesordanation, tam);
      } else
        BubbleSort(numberDesordanation, tam);
      break;

    default: printf("\nOpção inválida!\n");
    return 0;
    }
}

int buscarMaiorNumero( int v[], int tam){

    int maioNumber = v[0];
    
      for(int i = 0; i < tam ; i++){
         if(v[i]> maioNumber){
            maioNumber = v[i];
         }
      }
       return maioNumber;
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

void BubbleSort(int array[], int tamanho){

     int aux;
     for(int i = 0; i < tamanho; i++){
      for(int j = i+1 ; j < tamanho; j++){
          
          if(array[i] > array[j]){
               aux = array[i];
               array[i] = array[j];
               array[j] = aux;
          }
     }
       printf(" %d ", array[i]);
    }     
}
