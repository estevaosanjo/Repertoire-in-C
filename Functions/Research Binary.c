#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void numbersAleatory(int numberRdm[], int tam);
int ResearchBinary(int n[], int tam, int valor);
int BubbleSort(int array[], int tamanho);
void SelectSort(int array[], int tam);


int main(){

  srand(time(NULL));

 int numeros[10];  
 int tam = sizeof(numeros)/sizeof(numeros[0]);
 int opc;

  //Geração de números aleatórios, 10 numeros, entre 1 e 1000
  numbersAleatory(numeros, tam);
   
  
  //Escolha entre algoritmos de ordenação, aumente o tamanho do array, e será possivel ver a diferença de tempo de execução
    printf(" Ordenar a lista: \n");
    printf(" 1- Selection | 2 - Bubble Sort  ");
    scanf("%i", &opc);
      switch(opc){
      case 1: 
        SelectSort(numeros, tam);
        break;
      case 2:
          BubbleSort(numeros, tam);
        break;
      }


  //A busca binária - busca o valor 120, em uma geração de números aleatórios, caso não encontre retorna -1
  printf("\n\nNumero: %d", ResearchBinary(numeros, tam, 120));


}


int ResearchBinary(int n[], int tam, int valor){
    int inicio = 0;
    int fim = tam-1;
    
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

void numbersAleatory(int numberRdm[], int tam){
    int max = 1000;
    int min = 1;

    for (int i = 0; i < tam; i++){
        numberRdm[i] = rand() % (max - min + 1) + min;
        printf(" | %d", numberRdm[i]);
    }
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

int BubbleSort(int array[], int tamanho){

     int aux;
     for(int i = 0; i < tamanho; i++){

      for(int j = i+1 ; j < tamanho; j++){
          
          if(array[i] > array[j]){
               aux = array[i];
               array[i] = array[j];
               array[j] = aux;
          }
     }
       printf("| %d ", array[i]);
    }     
     return -1;
}