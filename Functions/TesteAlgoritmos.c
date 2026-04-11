#include <stdio.h>
#include <stdlib.h>

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
*/
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