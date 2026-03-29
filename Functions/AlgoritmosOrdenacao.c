#include <stdio.h>
#include <stdlib.h>

typedef struct{
    char nome;
    int idade;
    int CPF;
} usuario;
 usuario dados;

typedef enum{
    JANEIRO = 1, FEVEREIRO=2, MARÇO=3, ABRIL=4, MAIO=5, JUNHO=6, JULHO=7, AGOSTO=8, SETEMBRO=9, OUTUBRO=10, NOVEMBRO=11, DEZEMBRO=12 
} mes;


int buscarMaiorNumero(int v[], int tam);
int selectionSort(int buscarMaiorNumero, int tam);

int main(){
    int numberDesordanation[]={30,23,322,33,743,1,0,4905,86};
    int numberOrd;
    int tam = sizeof(numberDesordanation)/sizeof(numberDesordanation[0]);

     numberOrd = buscarMaiorNumero(numberDesordanation, tam);

     printf("\nSelection Sort: %d ", selectionSort(numberOrd, tam));

    return 0;
}

int buscarMaiorNumero(int v[], int tam){
    int maioNumber = v[0];
    int maiorIndice;

      for(int i = 0; i < tam ; i++){
         if(v[i]> maioNumber){
            maioNumber = v[i];
            maiorIndice = i;
         }
      }
      return printf("No indice: %i -- o maior numero: %i ", maiorIndice, maioNumber);
};

int selectionSort(int buscarMaiorNumero, int tam){ 

    int novarr[tam];

     for(int i=0; i < tam ; i++){
        novarr[i] = buscarMaiorNumero;
        printf("\n %i- %d ", i+1, novarr[i]);
     }
    return -1;
}