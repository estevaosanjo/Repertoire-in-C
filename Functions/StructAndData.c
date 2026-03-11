#include <stdio.h>
#include <stdlib.h>


// Manipulação de dados
// Criar um algoritmo para mover dados de uma variavel para uma Struct 
// Verificar espaços vazios e criar condições

typedef struct{
  double operacoes[10];
} calculadora ;
calculadora calculos;

typedef struct{
   int numero[10]; 
} dados;
dados salvar;


int salvarCalculos(int clos[], int pos){
    for (int i = 0; i < 4 ; i++){
      printf("\nPosicao: %i -- valor: %d", i+1, salvar.numero[i]);
      printf("\n");
    }

    return 0;
} 

void clearscreen(){ 
  system("cls");
 }

double mostrarCalculos(int num1, int num2, int resultado){
    clearscreen();
    printf("| Calculo: %d + %d: %d\n", num1, num2, resultado);
    //printf("| Conta: %d - %d: %d\n", subtrcao1, subtrcao2, salvar.numero[3]);

    return 0;
}

int fazerCalculos(){
    
    int calculos[10];
    int nm1, nm2;
    int pos = 10;
    int opc;


     printf("Calculadora - Digite um numero: ");
     scanf("%d", &nm1);
     printf("Digite um numero: ");
     scanf("%d", &nm2);
     printf("Digite o numero correspondente ao operador:");
     printf(" | 1: + | 2: - |3: * |4: /  \n");

     scanf("%d", &opc);
     clearscreen();

     switch(opc){
       case 1: printf("%d", nm1 + nm2); int res = nm1 + nm2; mostrarCalculos(nm1, nm2, res); break;
       case 2: printf("%d", nm1 - nm2); int rs = nm1 - nm2; mostrarCalculos(nm1, nm2, rs); break;
       case 3: printf("%d", nm1 * nm2); int resu = nm1 * nm2; mostrarCalculos(nm1, nm2, resu); break;
       case 4: printf("%d", nm1 / nm2); int rest = nm1 / nm2; mostrarCalculos(nm1, nm2, rest); break;
       default:  printf("Erro de digitação!");
     }

        salvar.numero[0] = calculos[0];
        salvar.numero[1] = calculos[1];

        salvarCalculos(calculos, pos);

       return 0;
}


int main(){

  //int calculos[10];  

    //printf("\n%d", calculos[1]);
    fazerCalculos();

          
    return 0;
}