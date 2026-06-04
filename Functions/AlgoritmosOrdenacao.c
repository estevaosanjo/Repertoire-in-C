#include <stdio.h>
#include <stdlib.h>

int buscarMaiorNumero(int v[], int tam);
void SelectSort(int array[], int tam);
void BubbleSort(int array[], int tamanho);
void QuickSort(int array[], int tam);
void merge(int lista[], int inicio, int meio, int fim);
void mergeSort(int lista[], int inicio, int fim);
void impressao(int array[], int tam);

int main(){
    int numberDesordanation[]={30, 23, 322, 33, 743, 1, 0, 4905, 86, 342, 15, 987, 123,
                               56, 781, 29, 444, 3, 652, 89, 392, 999, 31, 39, 
                               199, 874, 21, 555, 430, 76, 928, 310, 87, 502,
                               11, 723, 48, 600, 275, 934, 167, 390, 8, 811,
                               221, 470, 59, 150, 703, 42, 980, 266, 514, 18,
                               647, 91, 333, 720, 5, 880, 124, 461, 299, 771
  };
    int tam = sizeof(numberDesordanation)/sizeof(numberDesordanation[0]);
    int opc, op;
    printf("\nLista desordenada: ");
    for(int i = 0; i < tam ; i++){      
    printf(" %d  ", numberDesordanation[i]);
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
      printf("\n 1- Selection Sort || 2- Bubble Sort  || 3- Quick Sort  || 4- Merge Sort\n");
      scanf("%i", &op);
      if(op == 1){
        SelectSort(numberDesordanation, tam);
      } else if(op == 2){
         BubbleSort(numberDesordanation, tam);
      } else if(op == 3){
         QuickSort(numberDesordanation, tam);
         impressao(numberDesordanation, tam);
      } else if(op == 4){
         mergeSort(numberDesordanation, 0, tam-1);
         impressao(numberDesordanation, tam);
      }
      else 
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
          if( array[j] < array[indElem]){
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

void impressao(int array[], int tam){
  printf("\n");
  for(int i = 0; i < tam ; i++){
    printf("| %d ", array[i]);
  }
  printf("\n");
}