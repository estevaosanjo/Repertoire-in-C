#include <stdio.h>

void numbersAleatory(){

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

int main(){

 int numeros[] = {2, 5, 6, 7, 8, 12, 15, 16, 22, 34, 38, 45, 57};  
 int tam = sizeof(numeros)/sizeof(numeros[0]);

  printf("Numero: %d", ResearchBinary(numeros, tam, 38));

}