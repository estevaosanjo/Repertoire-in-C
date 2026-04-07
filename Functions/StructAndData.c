#include <stdio.h>
#include <stdlib.h>
#include <string.h>


// Manipulação de dados
// Criar um algoritmo para mover dados de uma variavel para uma Struct 
// Verificar espaços vazios e criar condições

typedef struct{
  int nm1[10];
  char oprd[10];
  int nm2[10];
  int res[10];
} calculadora ;
calculadora mostrar[20];

void clearscreen(){ 
  system("cls");
 }

int mostrarCalculos(calculadora mostrar[20], int num1,char opr, int num2, int resultado);
int fazerCalculos();
int subMain(char operador, int res, int nm1, int nm2);



int main(){

    //int calculos[10]; 

    // char opcaoMain;

    //printf("\n%d", calculos[1]);
    
    fazerCalculos();
     
   // salvarCalculos();

    return 0;
}


int mostrarCalculos(calculadora mostrar[20], int num1,char opr, int num2, int resultado){
          
    int tam = 1;
    int i;
    char opc;

    printf("\nHistórico de calculos: ");
    scanf(" %c", &opc);
    if((opc == 'S')||(opc == 's')){
      
        if((opr == '+')||(opr == '-')||(opr == '*')||(opr == '/')){ 
            for( i = 0 ; i < tam ; i++){
              mostrar[i].nm1[i]= num1;
              mostrar[i].oprd[i] = opr;
              mostrar[i].nm2[i] = num2;
              mostrar[i].res[i] = resultado;
              printf("| Calculo: %d %c %d: %d\n", mostrar[i].nm1[i],mostrar[i].oprd[i],mostrar[i].nm2[i], mostrar[i].res[i]);
            }
        } else
        printf("Operador não encontrado!");

    } else {
       return 0;
      }

    return -1;
      
       
}

int fazerCalculos(){
    
   // int calculos[10];
    int nm1, nm2;
    //int pos = 10;
    char operador;
    int res, opcaoMain;

     printf("\n\nDigite um numero: ");
     scanf("%d", &nm1);
     printf("Informe o operador ( + | - | * | / ): ");
     scanf(" %s", &operador);
     printf("Digite um numero: ");
     scanf("%d", &nm2);
      
     subMain(operador, res, nm1, nm2);

     printf("\nFazer mais calculos? 1-Sim 2-Não\n");
    
     scanf(" %i", &opcaoMain);

     if (opcaoMain == 1){
       fazerCalculos();
       mostrarCalculos(mostrar,nm1,operador, nm2, res);
      } else if (opcaoMain == 2){ 
        printf("\nOK! Muito Obrigado por utilizar nossos serviços!. "); 
        return mostrarCalculos(mostrar,nm1,operador, nm2, res);
      } else { printf("\nEscolha uma opção válida!\n"); }

      
       return 0;
}

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

