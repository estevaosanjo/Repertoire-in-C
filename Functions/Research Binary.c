#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void numbersAleatory(int numberRdm[], int tam);
void SelectSort(int array[], int tam);
void QuickSort(int array[], int tam);
void impressao(int array[], int tam);
int ResearchBinary(int n[], int tam, int valor);
int BubbleSort(int array[], int tamanho);
void iniciarHash(int t[], int tam);
int funcaoHash(int chave, int tam);
void inserirHash(int t[],int valor);
int buscarHash(int t[], int chave);
void imprimirHash(int t[], int tam);

int main(){

  srand(time(NULL));

 int numeros[15];  
 int tam = sizeof(numeros)/sizeof(numeros[0]);
 int opc, valorAleatorio, opcaobsc;
   

  printf("Acerte um numero aletorio (1 - 1000): ");
  scanf("%d", &valorAleatorio);

  //Geração de números aleatórios, uma certa quantidade, entre 1 e 1000
  numbersAleatory(numeros, tam);
   
  
  //Escolha entre algoritmos de ordenação, aumente o tamanho do array, e será possivel ver a diferença de tempo de execução
    printf("\n Ordenar a lista: \n");
    printf(" 1- Selection | 2 - Bubble Sort | 3 - Quick Sort ");
    scanf("%i", &opc);
      
    switch(opc){
      case 1: 
        SelectSort(numeros, tam); impressao(numeros, tam); break;
      case 2:
        BubbleSort(numeros, tam); impressao(numeros, tam); break;
      case 3:
        QuickSort(numeros, tam); impressao(numeros, tam); break;
      }

  //Escolha qual pode onde fazer a busca, hash ou binária
  iniciarHash(numeros, tam);
  inserirHash(numeros, numbersAleatory);
  funcaoHash(numeros, tam);
  
  printf("Escolha 1 - Hash | 2 - Busca Binária ");
  scanf("%i", &opcaobsc);
    if(opcaobsc == 1)
    printf("\n\nNumero: %d", buscarHash(numeros, tam)); 
    else if(opcaobsc == 2)//A busca binária - busca o valor 120, em uma geração de números aleatórios, caso não encontre retorna -1
    printf("\n\nNumero: %d", ResearchBinary(numeros, tam, valorAleatorio));
    else
     printf("Opcao invalida");

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
    printf("| %d ", array[i]);
  }
  printf("\n");
}



void iniciarHash(int t[], int tam){
   int i;
    for(i = 0; i< tam ; i++)
     t[i] = 0;
}


int funcaoHash(int chave, int tam){
    return chave % tam;
}


void inserirHash(int t[],int valor){
    int indice = funcaoHash(valor);
    while(t[indice] != 0){
      indice = funcaoHash(indice + 1);
    }
     t[indice] = valor;
}

int buscarHash(int t[], int chave){
   
    int busca = funcaoHash(chave);
    while(t[busca] != 0){
        if(t[busca] == chave)
          return t[busca];
        else 
          busca = funcaoHash(busca+1);
         
    }
    return 0;
}


void imprimir(int t[], int tam){
   int i;
   for(i = 0; i<tam; i++)
    printf("\n%d = %d\n", i, t[i]);
}
