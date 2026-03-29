#include <stdio.h>
#include <stdlib.h>
#include <time.h>


void numbersAleatory(int numberRdm[], int tam);
int ResearchBinary(int n[], int tam, int valor);



int main(){

  srand(time(NULL));

 int numeros[10];  
 int tam = sizeof(numeros)/sizeof(numeros[0]);


  numbersAleatory(numeros, tam);
  printf("\nNumero: %d", ResearchBinary(numeros, tam, 37));


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
