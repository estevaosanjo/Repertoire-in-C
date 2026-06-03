#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void numbersAleatory(int numberRdm[], int tam);
void functionOrdenation(int numeros[], int tam);
void clearscreen(){ system("cls"); }

void SelectSort(int array[], int tam);
void QuickSort(int array[], int tam);
int BubbleSort(int array[], int tamanho);
void merge(int lista[], int inicio, int meio, int fim);
void mergeSort(int lista[], int inicio, int fim);

void impressao(int array[], int tam);
int ResearchBinary(int n[], int tam, int valor);

int main(){

  srand(time(NULL));


 int numeros[30];  
 int tam = sizeof(numeros)/sizeof(numeros[0]);
 int valorAleatorio, opcao;
   
  do{
    system("cls");
    printf("\nAcerte um numero aletorio (1 - 1000): ");
    scanf("%d", &valorAleatorio);
    system("cls");
    
    numbersAleatory(numeros, tam);

    functionOrdenation(numeros, tam);

      //A busca binária - busca o valor 120, em uma geração de números aleatórios, caso não encontre retorna -1
      if(valorAleatorio == ResearchBinary(numeros, tam, valorAleatorio)){
        printf("\nParabens, voce acertou!! O numero: %d está na lista.\n", ResearchBinary(numeros, tam, valorAleatorio));
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

void functionOrdenation(int numeros[], int tam){
  //Geração de números aleatórios, uma certa quantidade, entre 1 e 1000
  int opc;
  
  //Escolha entre algoritmos de ordenação, aumente o tamanho do array, e será possivel ver a diferença de tempo de execução
    printf("\n\n\t Escolha um algoritmo para ordenar os numeros gerados: \n");
    printf("1- Selection Sort \n2- Bubble Sort \n3- Quick Sort  \n4- Merge Sort  \n|| R: ");
    scanf("%i", &opc);
      
    switch(opc){
      case 1: 
        SelectSort(numeros, tam); impressao(numeros, tam); break;
      case 2:
        BubbleSort(numeros, tam); impressao(numeros, tam); break;
      case 3:
        QuickSort(numeros, tam); impressao(numeros, tam); break;
      case 4:
        mergeSort(numeros,0, tam-1); impressao(numeros, tam); break;
      }

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
    printf("\nValores gerados: \n");
    for (int i = 0; i < tam; i++){
        numberRdm[i] = rand() % (max - min + 1) + min;
        printf("%d - ", numberRdm[i]);
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
    }     
     return -1;
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
    printf("%d - ", array[i]);
  }
  printf("\n");
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
