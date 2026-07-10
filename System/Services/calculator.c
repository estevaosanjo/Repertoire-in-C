#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "calculator.h"

// Calculadora
// Sistema básico de operações
// Histórico de cálculos
// Menu de interação

calculos salvar;

void Calculadora(){

    int numerodeCalculos = 0;
    int opc;

    do {
        printf("\n-----[ Menu ]-----\n\n");
        printf("1- Novo Calculo\n");
        printf("2- Historico de Calculos\n");
        printf("3- Sair\n\n");
        printf("  Escolha: ");
        scanf("%i", &opc);

        switch(opc) {
            case 1:
                if (numerodeCalculos < 100) {
                    iniciarCalc(numerodeCalculos);
                    numerodeCalculos++;
                } else {
                    printf("\nLimite de 100 calculos atingido.\n");
                }
                break;

            case 2:
                mostrarHistotico(numerodeCalculos);
                break;

            case 3:

                printf("\nObrigado por utilizar nossos servicos!\n");
                break;

            default:
                printf("\nOpcao invalida!\n");
        }

    } while(opc != 3);

    return;

}


int somar(calculos salvar, double n1, double n2, int numerodeCalculos){      
        double res = n1 + n2 ;
        char operador = '+';
        printf("\n-----[ Resultado: %.0lf ]-----\n", res);
        printf("\n\n\n");
        salvarCalculos(salvar, n1,operador, n2, res, numerodeCalculos);
        return 0;
}
int subtrair(calculos salvar,double n1, double n2, int numerodeCalculos){
        double res = n1 - n2;
        char operador = '-';
        printf("\n-----[ Resultado: %.0lf ]-----\n", res);
        salvarCalculos(salvar, n1,operador, n2, res, numerodeCalculos);
        printf("\n\n\n");
        return 0;
}
int multiplicar(calculos salvar,double n1, double n2, int numerodeCalculos){
        double res = n1 * n2;
        char operador = '*';
        printf("\n-----[ Resultado: %.0lf ]-----\n", res);
        printf("\n\n\n");
        salvarCalculos(salvar, n1,operador, n2, res, numerodeCalculos);
        return 0;
}   
int dividir(calculos salvar,double n1, double n2, int numerodeCalculos){     
        // Verificando se o segundo numero é 0 -- Se for 'Diferente de' 0, executa:
        char operador = '/';
        double res;
        if (n2 != 0 ){ 
            res = n1 / n2; 
            printf("\n-----[ Resultado: %.0lf ]-----\n", res);  // Se for 0, exibe mensagem de erro
            printf("\n\n\n");
            salvarCalculos(salvar, n1,operador, n2, res, numerodeCalculos);
        } else {
            printf("Erro! ");
            printf("\n\n");
        }

        return 0;
}

void iniciarCalc(int numerodeCalculos){
      
    double num1;
    double num2;

    char opc;
        system("cls");
        printf("\n-----[ Calculadora ]-----\n");
        
        printf("\nNumero: ");
        scanf("%lf", &num1);
        printf("Numero: ");
        scanf("%lf", &num2);
        printf("Operacao ");
        printf("[ + | - | * | / ]: ");
        scanf(" %c", &opc);
        
        
        switch (opc){    
        case '+': somar(salvar, num1,num2, numerodeCalculos); break; 
        case '-': subtrair(salvar,num1,num2, numerodeCalculos); break;
        case '*': multiplicar(salvar, num1,num2, numerodeCalculos); break;
        case '/': dividir(salvar, num1,num2, numerodeCalculos); break;
        default: printf("Escolha inválida!");
        
        }
}
void salvarCalculos(calculos salvar, double n1, char operador, double n2, double res, int numerodeCalculos){
    int contador = numerodeCalculos;
        salvar[contador].operador = operador;
        salvar[contador].num1 = n1;
        salvar[contador].num2 = n2;
        salvar[contador].res = res;
}

void mostrarHistotico(int numerodeCalculos){ 
    printf("\n\t--------[ Historico de Calculos ]--------");
    printf("\n\n");
    for(int i = 0; i < numerodeCalculos; i++){
        printf("\t| Calculo [%i]:  %.0lf  %c  %.0lf  =  %.0lf |\n", i+1, salvar[i].num1, salvar[i].operador, salvar[i].num2, salvar[i].res);
    }
    printf("\n\n\n");
}
