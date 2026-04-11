#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Manipulação de dados
// Criar um algoritmo para mover dados de uma variavel para uma Struct 
// Verificar espaços vazios e criar condições

typedef struct{
  int nm1;
  char oprd;
  int nm2;
  int res;
} calculadora ;
calculadora mostrar[20];

void clearscreen(){ 
  system("cls");
 }

int mostrarCalculos(calculadora mostrar[20], int num1,char opr, int num2, int resultado);
int fazerCalculos();
//int subMain(char operador, int res, int nm1, int nm2);
//int moreOperations(int opcaoMain);


int main(){

  fazerCalculos();

  return 0;
}


int mostrarCalculos(calculadora mostrar[20], int num1,char opr, int num2, int resultado){
   int i;
    //printf("\nHistórico de calculos: \n");
      for( i = 1 ; i < 3 ; i++){
        mostrar[i].nm1= num1;
        mostrar[i].oprd = opr;
        mostrar[i].nm2 = num2;
        mostrar[i].res = resultado;
      }
      printf("\n| %d - Calculo: %d %c %d: %d\n", i, mostrar[i].nm1, mostrar[i].oprd, mostrar[i].nm2, mostrar[i].res);

  return -1;
      
       
}

int fazerCalculos(){

    char operador;
    int res, nm1, nm2;
    int tamanho = 20;

     printf("\n\nDigite um numero: ");
     scanf("%d", &nm1);
     printf("Informe o operador ( + | - | * | / ): ");
     scanf(" %s", &operador);
     printf("Digite um numero: ");
     scanf("%d", &nm2);
    
    switch(operador){
     
      case '+': 
       res = nm1 + nm2; printf("\nResultado: %d ", res);
       break;

      case '-': 
       res = nm1 - nm2; printf("\nResultado: %d ", res); 
      break; 
      
      case '*': 
       res = nm1 * nm2; printf("\nResultado: %d ", res);
       break;

      case '/': 
       if(nm2 == 0){ printf("Não é possivel dividir por 0!"); }  
       else { res = nm1 / nm2; printf("\nResultado: %d ", res);}
       break;
        
      default:  printf("Erro de digitação!");
     }

    // subMain(operador, res, nm1, nm2);
     mostrarCalculos(mostrar, nm1, operador, nm2, res);
    

    // printf("\n\n Fazer mais calculos ( 1 - Sim  2 - Nao ): ");
    // scanf(" %i", &opcaoMain);
    // moreOperations(opcaoMain);

      
       return 0;
}

/*
int subMain(char operador, int res, int nm1, int nm2) {
    
    switch(operador){
     
      case '+': 
       res = nm1 + nm2; printf("\nResultado: %d ", res);
       break;

      case '-': 
       res = nm1 - nm2; printf("\nResultado: %d ", res); 
      break; 
      
      case '*': 
       res = nm1 * nm2; printf("\nResultado: %d ", res);
       break;

      case '/': 
       if(nm2 == 0){ printf("Não é possivel dividir por 0!"); }  
       else { res = nm1 / nm2; printf("\nResultado: %d ", res);}
       break;
        
      default:  printf("Erro de digitação!");
     }


  return 1;

}

int moreOperations(int opcaoMain){

   if (opcaoMain == 1){

       fazerCalculos();

      } else if (opcaoMain == 2){ 

        printf("\nOK! Muito Obrigado por utilizar nossos serviços!. "); 
        return 0;

      } else {
         printf("\nEscolha uma opção válida!\n"); 
        }

    return -1;

}

*/