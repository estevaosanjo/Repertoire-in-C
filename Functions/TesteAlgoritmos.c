#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Algoritmo de ordenação Merge Sort
void mergeSort(int lista[], int tam){
  int i = 0;
   if(tam <= 1){
     return;
   } else{
     
   }
}

int main(){
    int lista[]={10, 2, 302, 32, 4, 231, 31, 17, 23, 47, 78,9, 3423};
    int tam = sizeof(lista)/sizeof(lista[0]);
     
    mergeSort(lista, tam);

    return;


}


// --------- Structs with Structs -----------
/*
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
    int id;
} cadastro;

typedef struct{
    int cpf;
    char nome[30];
    int idade;
    cadastro lerid;
} pessoa;



 
int main()
{
 int n;
  printf("Tamanho do array: \n");
  scanf("%d", &n);
  int *p = (int*)malloc(n*sizeof(int));
  
  for(int i = 0; i< n ; i++){
      p[i]= i+1;
  }
  for(int i = 0; i< n ; i++){
      printf(" %d", p[i]);
  }
  free(p);

 pessoa p;
 scanf("%d ",p.lerid);

 return 0;
}
 */


// Grafos