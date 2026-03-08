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

    
    salvar.numero[0] = dois;
    salvar.numero[1] = um;

       scanf("\n%d",&soma1);
       scanf("\n%d",&soma2);
       scanf("\n%d",&soma3);
       scanf("\n%d",&soma4);

        int calculos[10];
          calculos[1]= soma1 + soma2 + soma3 + soma4;

         printf("\n%d", calculos[1]);
       
         salvarCalculos(calculos);
          

    //for(int j = 0; j < pos ; j++){
    //}


    //for (int i = 0; i < pos ; i++){
    // printf("\n |%i -- %d  | \n", i+1, salvar.numero[i]);
    //}
        


    return 0;
}