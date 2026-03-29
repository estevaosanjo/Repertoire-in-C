#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//Gerar numeros pseudo-aleatórios
void valoresAleatorios(int v[], int tam);
void numbersRadom(int numberRdm[], int tam);

//Busca do maior número usando recursão
int maiorNumero(int v[], int tam, int i);

void memoryAdress(int maior);


int main()
{
    srand(time(NULL));

    int tam;
    int numeros[tam];
    int maior;

    printf("Quantos numeros aleatórios? ");
    scanf("%d", &tam);

    //valoresAleatorios(numeros, 20);
    numbersRadom(numeros, tam);
    
    maiorNumero(numeros,tam, 0);
     
    printf("\nO maior numero: %d",maiorNumero(numeros, tam, 0));
    
    
    maior = maiorNumero(numeros, tam, 0);

    memoryAdress(maior);

    return 0;
}

 int maiorNumero(int v[], int tam, int i)
{
    if (tam==0)
     return v[i];
      else{
          if(v[tam-1] > v[i])
           return maiorNumero(v, tam-1, tam-1);
            else
             return maiorNumero(v, tam-1, i);
      }
}

void numbersRadom(int numberRdm[], int tam){
    int max = 1000;
    int min = 1;

    for (int i = 0; i < tam; i++){
        numberRdm[i] = rand() % (max - min + 1) + min;
        printf("\n%d", numberRdm[i]);
    }
}

 void valoresAleatorios(int v[], int tam)
 {    
     int max= 1000;
     int min= 1;

      for (int i = 0; i < tam ; i++){
        int valor = 2 * ((max - 1) * (min + i));
        v[i] = valor * i * (valor);
       }
       for (int i = 0; i < tam; i++){
           printf(" | %d", v[i]);
       }
 }
 
void memoryAdress(int maior){
    
    char opc;
    printf("\nDescobrir o Endereço desse numero? (S/N) ");
    scanf(" %c", &opc);


    if ((opc == 'S')||(opc == 's')){
        printf("\nMemory Adress of the largest number: %p", &maior);
      } else if ((opc == 'N')||(opc == 'n')){
        printf("\nOK!");
      } else {
        printf("\nOpção inválida!");
      }

}    