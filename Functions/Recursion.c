#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//Gerar numeros pseudo-aleatórios
void numbersRadom(int numberRdm[], int tam);

//Busca do maior número usando recursão
int maiorNumero(int v[], int tam, int i);

//Mostrar o endereço na memória
void memoryAdress(int v[], int indice);


int main()
{
    srand(time(NULL));

    int tam;
    printf("Quantos numeros aleatorios? ");
    scanf("%d", &tam);
    
    int numeros[tam];
    numbersRadom(numeros, tam);
    printf("\nO maior numero: %d", maiorNumero(numeros, tam, 0));

    int maior;
    maior = maiorNumero(numeros, tam, 0);

    memoryAdress(numeros, maior);

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
        printf(" %d |", numberRdm[i]);
    }
}

void memoryAdress(int v[], int indice){
    
    char opc;
    printf("\nDescobrir o Endereco desse numero? (S/N) ");
    scanf(" %c", &opc);


    if ((opc == 'S')||(opc == 's')){
        printf("\nMemory Adress of the largest number: %p", &v[indice]);
      } else if ((opc == 'N')||(opc == 'n')){
        printf("\nOK!");
      } else {
        printf("\nOpcao invalida!");
      }

}    