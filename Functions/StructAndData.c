#include <stdio.h>


// Manipulação de dados
// Criar um algoritmo para mover dados de uma variavel para uma Struct 
// Verificar espaços vazios e criar condições



typedef struct{
   int numero[10]; 
} dados;
dados salvar;

int salvarCalculos(int cls[], int pos){

    for (int i = 0; i < 4 ; i++){
      printf("Posicao: %i -- valor: %d", i+1, salvar.numero[i]);
      printf("\n");
    }

    return 0;
} 

int fazerCalculos(){
    
    int calculos[10];
    int soma1, soma2;
    int subtrcao1,subtrcao2;
    int pos = 10;

       printf("Digite os numeros para soma:\n");
       scanf("\n%d",&soma1);
       scanf("%d",&soma2);
       //scanf("\n%d",&soma3);
       //scanf("\n%d",&soma4);
       
       printf("Digite os numeros para subtracao:\n");
       scanf("\n%d",&subtrcao1);
       scanf("%d",&subtrcao2);

      calculos[0]= soma1 + soma2;
      calculos[1]= subtrcao1 - subtrcao2;

        salvar.numero[2] = calculos[0];
        salvar.numero[3] = calculos[1];

        salvarCalculos(calculos, pos);
          
        printf("| Conta: %d + %d: %d\n", soma1, soma2, salvar.numero[2]);
        printf("| Conta: %d - %d: %d\n", subtrcao1, subtrcao2, salvar.numero[3]);


       return 0;
}


int main(){
   
  int dois = 20;
  int um = 19;
  int calculos[10];  

         //printf("\n%d", calculos[1]);
         salvar.numero[0] = dois;
         salvar.numero[1] = um;

         fazerCalculos();

          
    return 0;
}