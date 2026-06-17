#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Calculadora
// Sistema básico de calcúlos criados
 typedef struct{
    double num1;
    double num2;
    double res;
    char operador;
 }calculos[100];
calculos salvar;

void clearscreen(){ system("cls");} 
void salvarCalculos(calculos salvar, double n1, char operador, double n2, double res, int numerodeCalculos);
void mostrarHistotico(int numerodeCalculos);
int escolhaMain(int numerodeCalculos);

int somar(calculos salvar,double n1, double n2, int numerodeCalculos);
int subtrair(calculos salvar,double n1, double n2, int numerodeCalculos);
int multiplicar(calculos salvar,double n1, double n2, int numerodeCalculos);
int dividir(calculos salvar,double n1, double n2, int numerodeCalculos);

void Calculadora(int numerodeCalculos);
int maisCalculo();
  



int main(){

    int numerodeCalculos = 0;
    int opc;

    do {
        system("cls");
        printf("\n\t-----[ Menu ]-----\n\n");
        printf("1- Novo Calculo\n");
        printf("2- Historico de Calculos\n");
        printf("3- Sair\n\n");
        printf("\tEscolha: ");
        scanf("%i", &opc);

        switch(opc) {
            case 1:
                if (numerodeCalculos < 100) {
                    Calculadora(numerodeCalculos);
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

    return 0;

}


int somar(calculos salvar, double n1, double n2, int numerodeCalculos){      
        double res = n1 + n2 ;
        char operador = '+';
        printf("\n\tResultado: %.0lf\n\n", res);
        salvarCalculos(salvar, n1,operador, n2, res, numerodeCalculos);
        return 0;
}
int subtrair(calculos salvar,double n1, double n2, int numerodeCalculos){
        double res = n1 - n2;
        char operador = '-';
        printf("\n\tResultado: %.0lf\n\n", res);
        salvarCalculos(salvar, n1,operador, n2, res, numerodeCalculos);
        return 0;
}
int multiplicar(calculos salvar,double n1, double n2, int numerodeCalculos){
        double res = n1 * n2;
        char operador = '*';
        printf("\n\tResultado: %.0lf\n\n", res);
        salvarCalculos(salvar, n1,operador, n2, res, numerodeCalculos);
        return 0;
}   
int dividir(calculos salvar,double n1, double n2, int numerodeCalculos){     
        // Verificando se o segundo numero é 0 -- Se for 'Diferente de' 0, executa:
        char operador = '/';
        double res;
        if (n2 != 0 ){ 
            res = n1 / n2; 
            printf("\n\tResultado: %.0lf\n\n", res);  // Se for 0, exibe mensagem de erro
            salvarCalculos(salvar, n1,operador, n2, res, numerodeCalculos);
        } else {
            printf("Erro! "); 
        }

        return 0;
}

void Calculadora(int numerodeCalculos){
      
    double num1;
    double num2;

    char opc;

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
        printf("\t - Calculo [%i]:  %.0lf  %c  %.0lf  =  %.0lf -\n", i+1, salvar[i].num1, salvar[i].operador, salvar[i].num2, salvar[i].res);
    }
      
}
