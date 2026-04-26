#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct{
  int nm1;
  char oprd;
  int nm2;
  int res;
} calculadora ;
calculadora mostrar[20];

void clearscreen();
void mostrarCalculos(calculadora mostrar[20], int num1,char opr, int num2, int resultado);
int fazerCalculos();

int main(){

  fazerCalculos();

  return 0;
}


void mostrarCalculos(calculadora mostrar[20], int num1,char opr, int num2, int resultado){
   int i = 1; 
   int tam;
  
    for( int j = 0 ; j < 3 ; j++){
        mostrar[j].nm1= num1;
        mostrar[j].oprd = opr;
        mostrar[j].nm2 = num2;
        mostrar[j].res = resultado;
      }
    printf("\nMostrar quantos calculos? ");
    scanf("%d", &tam);
    for(int j = 0 ; j < tam ; j++){
        printf("\n| %d - Calculo: %d %c %d: %d\n", i++, mostrar[j].nm1, mostrar[j].oprd, mostrar[j].nm2, mostrar[j].res);
    }
    
}

int fazerCalculos(){

    char operador;
    int res, nm1, nm2;

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
      
       return 0;
}

void clearscreen(){ 
  system("cls");
 }
