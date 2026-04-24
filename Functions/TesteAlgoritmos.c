#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/*
void SelectSort(int array[], int tam);
int sumWithRecursion(int nmrs[], int tam);
void showTheList(int lista[], int tam);

int main(){


    int array[] = {10, 30, 45};
    int tam = sizeof(array)/sizeof(array[0]);

   //SelectSort(array, tam);
    showTheList(array, tam);

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

int sumWithRecursion(int nmrs[], int tam){
    if(tam == 0){
        return nmrs[0];
    } else {
        return nmrs[tam] + sumWithRecursion(nmrs, tam - 1);
    }
}

void showTheList(int lista[], int tam){
    if(tam == 0){
        return;
    }

    showTheList(lista, tam-1);   // desce até o início
    printf("%d ", lista[tam-1]); // imprime na volta
}


typedef struct{
  int nm1;
  char oprd;
  int nm2;
  int res;
} calculadora;
calculadora mostrar[20];

int main(){

 int j =1;

    for(int k =0 ; k < 3 ; k++){
        printf("Digite n: ");
        scanf(" %i",&mostrar[k].nm1);
        printf("Digite n: ");
        scanf(" %i",&mostrar[k].nm2);
        printf("Digite opr: ");
        scanf(" %c", &mostrar[k].oprd);
        mostrar[k].res = mostrar[k].nm1 + mostrar[k].nm2;
        printf("\n");
    }
    for(int i = 0 ; i < 3 ; i++){
        printf("\n| %d - Calculo: %d %c %d: %d", j, mostrar[i].nm1, mostrar[i].oprd, mostrar[i].nm2, mostrar[i].res);
        j++;
    }
    
    
 return 0;
}


*/
/*
int SearchNumber(int p[], int *m, int *mr, int tam){
    
    int i ;
      *m = p[0];
      *mr = p[0];
       
      for( i = 1; i < tam ; i++){
         if(p[i] > *m){
            *m = p[i];
         }
         if(p[i] < *mr){
            *mr = p[i];
         }
      }
       

  return  printf("Maior N: %d\t Menor N: %d\n", *m, *mr);
}

int main(){
    
    int a[]= {240, 34, 20, 30, 223, 10, 1};
    int maior, menor;
    int tamanho;
    
    //printf(" %d ", *p);
    scanf("%d", &tamanho);
    SearchNumber(a, &maior, &menor, tamanho);

    return 0;
}

 #include <stdio.h>

int main(){
    int a = 70;
    int b = 5;
    int res;
    
    res = a % b;

    printf("%d", res);

    return 0;
}
*/ 

// Quick Sort and Merge Sort
#include <stdio.h>
#include <stdlib.h>
#include <string.h>



void quicksort(int lista[], int tam){
    
    int i, k = 0;
    int pivo = lista[0];
    int maioresDireita[tam];
    int menoresEsquerda[tam];
    
        for (int j = 0; j < tam; j++) {
            if (lista[j] > pivo) {
                maioresDireita[k++] = lista[j];
            } else if (lista[j] < pivo) {
                menoresEsquerda[i++] = lista[j];
            }
        }
}

int main(){
    int lista[]={10, 2, 302, 32, 4, 231, 31, 17, 23, 47, 78};
    int tam = sizeof(lista)/sizeof(lista[0]);

    quicksort(lista, tam);


    printf("Lista:");
    for(int j = 0; j< tam ; j++){
        printf(" %d", lista[j]);
    }
    printf("\nTamanho: %d\n", tam);
    return 0;
}
// Tabela Hash and Grafos
