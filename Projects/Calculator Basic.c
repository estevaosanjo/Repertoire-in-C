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
 } calculos[10];
 calculos salvar;


int somar(calculos salvar,double n1, double n2, int numerodeCalculos);
int subtrair(calculos salvar,double n1, double n2, int numerodeCalculos);
int multiplicar(calculos salvar,double n1, double n2, int numerodeCalculos);
int dividir(calculos salvar,double n1, double n2, int numerodeCalculos);

void Calculadora(int numerodeCalculos);
int maisCalculo();
    

// Limpar a tela
void clearscreen(){ system("cls"); }
        


int main()
{ 
    maisCalculo();  
    return 0;
}


int somar(calculos salvar, double n1, double n2, int numerodeCalculos){      
        double res = n1 + n2 ;
        int i;
        
        salvar[i].operador = '+';
        salvar[i].num1 = n1;
        salvar[i].num2 = n2;
        salvar[i].res = res;

        printf("\n\nSoma: %lf\n\n", res);

        printf(" %d \n", numerodeCalculos);

        
        for(i = 0; i < numerodeCalculos; i++){
          printf("Calculo %i: %lf %c %lf = %lf\n", i+1, salvar[i].num1, salvar[i].operador, salvar[i].num2, salvar[i].res);
        }
        return 0;
    }
int subtrair(calculos salvar,double n1, double n2, int numerodeCalculos){
        double res = n1 - n2;
        int i;
       
        salvar[i].operador = '-';
        salvar[i].num1 = n1;
        salvar[i].num2 = n2;
        salvar[i].res = res;

        printf("\n\nSubtração: %lf\n\n", res);

       for(i = 0; i < numerodeCalculos; i++){
          printf("Calculo %i: %lf %c %lf = %lf\n", i+1, salvar[i].num1, salvar[i].operador, salvar[i].num2, salvar[i].res);
        }
        return 0;
    }
int multiplicar(calculos salvar,double n1, double n2, int numerodeCalculos){
        double res = n1 * n2;
        int i;

        salvar[i].operador = '*';
        salvar[i].num1 = n1;
        salvar[i].num2 = n2;
        salvar[i].res = res;

        printf("\n\nMultiplicação: %lf\n\n", res);

        for(int i = 0; i < numerodeCalculos; i++){
          printf("Calculo %i: %lf %c %lf = %lf\n", i+1, salvar[i].num1, salvar[i].operador, salvar[i].num2, salvar[i].res);
        }
        return 0;
    }   
int dividir(calculos salvar,double n1, double n2, int numerodeCalculos){     
        // Verificando se o segundo numero é 0 -- Se for 'Diferente de' 0, executa:
        double res;
        int i;
        if (n2 != 0 ){ 
            double res = n1 / n2; 
            printf("\n\nDivisão: %lf\n\n", res); } // Se for 0, exibe mensagem de erro
        else { 
            printf("Erro! "); 
        }

        salvar[i].operador = '/';
        salvar[i].num1 = n1;
        salvar[i].num2 = n2;
        salvar[i].res = res;

        for(int i = 0; i < numerodeCalculos; i++){
          printf("Calculo %i: %lf %c %lf = %lf\n", i+1, salvar[i].num1, salvar[i].operador, salvar[i].num2, salvar[i].res);
        }
        return 0;
    }

void Calculadora(int numerodeCalculos){
      
    double num1;
    double num2;

    char opc;

        printf("Calculadora: \n");
        
        printf("\nDigite Nmr: ");
        scanf("%lf", &num1);
 
        printf("\nOperacao -");
        printf("\t + | - | * | / :  ");
        scanf(" %c", &opc);
        
        printf("\nDigite Nmr: ");
        scanf("%lf", &num2);
        
        switch (opc){    
        case '+': somar(salvar, num1,num2, numerodeCalculos); break; 
        case '-': subtrair(salvar,num1,num2, numerodeCalculos); break;
        case '*': multiplicar(salvar, num1,num2, numerodeCalculos); break;
        case '/': dividir(salvar, num1,num2, numerodeCalculos); break;
        default: printf("Escolha inválida!");
        
    }
}

int maisCalculo(){
    char opc;
    int numerodeCalculos = 0;
 
    do {
        numerodeCalculos = numerodeCalculos + 1;
        Calculadora(numerodeCalculos);

        printf("\n\nDeseja fazer mais calculos?\n");
        printf("SIM - S/s   NAO - N/n: ");
        scanf(" %c", &opc);
         if(opc == 's' && opc == 'S')
          numerodeCalculos = numerodeCalculos + 1;

        clearscreen();

    } while(opc == 's' || opc == 'S');

    printf("\n\nObrigado por utilizar nossos servicos!\n\n");

    return 0;
};