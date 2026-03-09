#include <stdio.h>


// Manipulação de dados
// Criar um algoritmo para mover dados de uma variavel para uma Struct 
// Verificar espaços vazios e criar condições



typedef struct{
   int numero[10]; 
} dados;
dados salvar;

int salvarCalculos(int cls[]){

    int i,j;


    i = cls[i];
    
    printf("\n%d", cls[i]);

     salvar.numero[j] = cls[i];

    return 0;
} 

int main(){
   
  int dois = 20;
  int um = 19;
  int pos = 10;

  int soma1, soma2, soma3, soma4;
  int subtrcao1,subtrcao2;

    
    salvar.numero[0] = dois;
    salvar.numero[1] = um;
   
       printf("Digite os numeros para soma:\n");
       scanf("\n%d",&soma1);
       scanf("\n%d",&soma2);
       //scanf("\n%d",&soma3);
       //scanf("\n%d",&soma4);
       
       printf("Digite os numeros para subtracao:\n");
       scanf("\n%d",&subtrcao1);
       scanf("\n%d",&subtrcao2);

        int calculos[10];
          calculos[1]= soma1 + soma2;
          calculos[2]= subtrcao1 - subtrcao2;

         //printf("\n%d", calculos[1]);
       
         salvar.numero[2] = calculos[1];
         salvar.numero[3] = calculos[2];


         printf("%d", salvar.numero[2]);
          

    //for(int j = 0; j < pos ; j++){
    //}


    for (int i = 0; i < pos ; i++){
     printf("\n |Posicao: %i -- valor: %d  | \n", i+1, salvar.numero[i]);
     printf("\n");
    }
        


    return 0;
}