#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void numbersAleatory(int numberRdm[], int tam);
int ResearchBinary(int n[], int tam, int valor);
int BubbleSort(int array[], int tamanho);


int main(){

  srand(time(NULL));

 int numeros[10];  
 int tam = sizeof(numeros)/sizeof(numeros[0]);


  numbersAleatory(numeros, tam);
  printf("\n\n");
  BubbleSort(numeros, tam);

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