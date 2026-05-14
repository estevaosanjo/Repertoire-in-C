#include <stdio.h>
#include <stdlib.h>

int buscarMaiorNumero(int v[], int tam);
void SelectSort(int array[], int tam);
void BubbleSort(int array[], int tamanho);
void QuickSort(int array[], int tam);
void impressao(int array[], int tam);

int main(){
    int numberDesordanation[]={30,23,322,33,743,1,0,4905,86};
    int tam = sizeof(numberDesordanation)/sizeof(numberDesordanation[0]);
    int opc, op;
    printf("\nLista desordenada: ");
    for(int i = 0; i < tam ; i++){      
    printf(" %d", numberDesordanation[i]);
    }
    printf("\n");

    printf("\nO que deseja? \n");
    printf("1- Buscar maior numero \n");
    printf("2- Ordenar a lista \n");
    scanf("%i", &opc);
    switch(opc){
    case 1: 
       printf(" %d", buscarMaiorNumero(numberDesordanation,tam));
       break;
    case 2:
      printf("\n 1- Selection Sort || 2- Bubble Sort  || 3- Quick Sort\n");
      scanf("%i", &op);
      if(op == 1){
         SelectSort(numberDesordanation, tam);
      } else if(op == 2){
        BubbleSort(numberDesordanation, tam);
      } else if(op == 3){
         QuickSort(numberDesordanation, tam);
         impressao(numberDesordanation, tam);
      } else 
        printf("Opção Inválida!");
      break;

    default: printf("\nOpção inválida!\n");
    return 0;
    }
}

int buscarMaiorNumero( int v[], int tam){

    int maioNumber = v[0];
    
      for(int i = 0; i < tam ; i++){
         if(v[i] > maioNumber){
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


void QuickSort(int array[], int tam){
   
  int i = 0;
  int k = 0;
  int pivo = array[0];

  int menoresEsquerda[tam];
  int maioresDireita[tam];
     
    if(tam <= 1){
      return;
    } else {
        for(int j = 1; j < tam; j++){
          if(array[j] >= pivo){
            maioresDireita[k++] = array[j];
          } else{
            menoresEsquerda[i++] = array[j];
            }
        }
          QuickSort(menoresEsquerda, i);
          QuickSort(maioresDireita, k);
          
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

void impressao(int array[], int tam){
  printf("\n");
  for(int i = 0; i < tam ; i++){
    printf("| %d ", array[i]);
  }
  printf("\n");
}