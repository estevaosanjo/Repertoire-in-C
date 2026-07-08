#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

//Gerar numeros pseudo-aleatórios
void numbersRadom(int*, int);

//Busca do maior número usando recursão
int maiorNumero(int*, int, int);

//Mostrar o endereço na memória
void memoryAdress(int*, int);



void iniciar(int t[], int tam);
int funcaoHash(int chave,int tam);
void inserir(int t[],int valor, int tam);
int busca(int t[], int chave, int tam);
void imprimir(int t[], int tam);


int main()
{
    srand(time(NULL));

    int tam, valor, retorno;
    char opc;

while(tam <= 0){
    printf("\n===== Funcao recursiva =====\n");

    printf("\nQuantidade de numeros aleatorios: ");
    scanf("%d", &tam);
    if(tam <= 0){
        printf("\nQuantidade invalida!\n\n");  
    }
}
    int numeros[tam];
    int tabela[tam];
    
    numbersRadom(numeros,tam);
    iniciar(tabela, tam);
    
    for(int i = 0; i < tam ; i++){
        inserir(tabela,numeros[i], tam);
    }
    imprimir(tabela, tam);

    printf("\nO maior numero: %d\n", maiorNumero(numeros, tam, 0));

    int maior;
    maior = maiorNumero(numeros, tam, 0);

    memoryAdress(numeros, maior); 

    
    printf("\nBusca por algum numero (S/N): ");
    scanf("%s", &opc);

    if(opc == 'S' || opc == 's'){
        printf("Qual valor deseja buscar? ");
        scanf("%d", &valor);
        retorno = busca(tabela, valor, tam);
            if(retorno != 0)
              printf("Valor encontrado, na posicao: %d\n", retorno);
            else
             printf("Valor não encontrado!");
    }
    else if(opc == 'N' || opc == 'n'){
        printf("\n\tPrograma finalizado!");
    } else
      printf("\nOpção inválida!");


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

void iniciar(int t[], int tam){
   int i;
    for(i = 0; i< tam ; i++)
     t[i] = 0;
}


int funcaoHash(int chave,int tam){
    return chave % tam;

}


void inserir(int t[],int valor, int tam){
    int indice = funcaoHash(valor, tam);
    while(t[indice] != 0){
      indice = funcaoHash(indice + 1, tam);
    }
     t[indice] = valor;
}


int busca(int t[], int chave, int tam){
    int busca = funcaoHash(chave, tam);
    while(t[busca] != 0){
        if(t[busca] == chave)
          return busca;
        else 
          busca = funcaoHash(busca+1, tam);
         
    }
    return -1;
}


void imprimir(int t[], int tam){
   int i;
   printf("\n\n");
   for(i = 0; i<tam; i++)
    printf("[%d] - %d \n", i, t[i]);
}
