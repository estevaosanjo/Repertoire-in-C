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



int mostrarCalculos(char opc, calculadora mostrar[20], int num1,char opr, int num2, int resultado){
       clearscreen();
          
    int tam = 1;
    
    printf("Histórico de calculos: ");
    scanf(" %c", &opc);
    if((opc == 'S')||(opc == 's')){
        if((opr == '+')||(opr == '-')||(opr == '*')||(opr == '/')){ 
            for(int i = 0 ; i < tam ; i++){
            mostrar[i].nm1 = num1;
            mostrar[i].oprd = opr;
            mostrar[i].nm2 = num2;
            mostrar[i].res = resultado;
            printf("| Calculo: %d %c %d: %d\n", mostrar[i].nm1,mostrar[i].oprd,mostrar[i].nm2, mostrar[i].res);
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
    char operador,opc;
    int res;

     printf("\n\nDigite um numero: ");
     scanf("%d", &nm1);
     printf("Informe o operador ( + | - | * | / ): ");
     scanf(" %s", &operador);
     printf("Digite um numero: ");
     scanf("%d", &nm2);

     switch(operador){
     
      case '+': 
       res = nm1 + nm2; printf("\nResultado: %d ", res);
       mostrarCalculos(opc,mostrar,nm1,operador, nm2, res);
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
          

       return 0;
}

void subMain() {
    int opcaoMain;

     
     
    do {

      printf("\nVocê deseja salvar os calculos? 1-Sim 2-Nao\n");
      scanf("%i",&opcaoMain);
     if (opcaoMain == 1){ fazerCalculos(); } 
     else if (opcaoMain == 2){ printf("\nOK! Seus calculos não seram salvos. "); fazerCalculos(); } 
     else { printf("\nEscolha uma opção válida!\n"); }

    } while ( opcaoMain != 1 );
}



int main(){

    //int calculos[10]; 

    // char opcaoMain;

    //printf("\n%d", calculos[1]);
    

    subMain();
     
   // salvarCalculos();

    return 0;
}