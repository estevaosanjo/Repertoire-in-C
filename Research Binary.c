

#include <stdio.h>
#include <stdlib.h>

 void valoresaleatorios(int v[], int tam){
     
     
      for (int i = 0; i < tam ; i++){
        int valor = 2;
        v[i] = valor * i;
       }
       for (int i = 0; i < tam; i++){
           printf("\nO valor: %i", v[i]);
       }
 }
 
 int maiornumero(int v[], int tam, int i)
{
    if (tam==0)
     return v[i];
      else{
          if(v[tam-1] > v[i])
           return maiornumero(v, tam-1, tam-1);
            else
             return maiornumero(v, tam-1, i);
      }
}
int main()
{

    int numeros[20];

    valoresaleatorios(numeros, 20);
    
    maiornumero(numeros, 20, 0);
     
    printf("\nO maior numero: %d",maiornumero(numeros, 20, 0));
    
    return 0;
}