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
 } calculos;
 calculos salvar;


int somar(calculos salvar,double n1, double n2);
int subtrair(calculos salvar,double n1, double n2);
int multiplicar(calculos salvar,double n1, double n2);
int dividir(calculos salvar,double n1, double n2);


void Calculadora();
int maisCalculo();
    

// Limpar a tela
void clearscreen(){ system("cls"); }
        


int main()
{ 
    maisCalculo();  
    return 0;
}


int somar(calculos salvar, double n1, double n2){      
        double res = n1 + n2 ;
        
        salvar.operador = '+';
        salvar.num1 = n1;
        salvar.num2 = n2;
        salvar.res = res;

        printf("\n\nSoma: %lf\n\n", res);
        return 0;
    }
int subtrair(calculos salvar,double n1, double n2){
        double res = n1 - n2;
       
        salvar.operador = '-';
        salvar.num1 = n1;
        salvar.num2 = n2;
        salvar.res = res;

        printf("\n\nSubtração: %lf\n\n", res);
        return 0;
    }
int multiplicar(calculos salvar,double n1, double n2){
        double res = n1 * n2;

        salvar.operador = '*';
        salvar.num1 = n1;
        salvar.num2 = n2;
        salvar.res = res;

        printf("\n\nMultiplicação: %lf\n\n", res);
        return 0;
    }   
int dividir(calculos salvar,double n1, double n2){     
        // Verificando se o segundo numero é 0 -- Se for 'Diferente de' 0, executa:
        if (n2 != 0 ){ double res = n1 / n2; printf("\n\nDivisão: %lf\n\n", res); } // Se for 0, exibe mensagem de erro
        else { printf("Erro! "); }
        return 0;
    }

void Calculadora(){
      
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
        case '+': somar(salvar, num1,num2); break; 
        case '-': subtrair(salvar,num1,num2); break;
        case '*': multiplicar(salvar, num1,num2); break;
        case '/': dividir(salvar, num1,num2); break;
        default: printf("Escolha inválida!");
        
    }
}

int maisCalculo(){
    char opc;
 
    do {
        Calculadora();

        printf("\n\nDeseja fazer mais calculos?\n");
        printf("SIM - S/s   NAO - N/n: ");
        scanf(" %c", &opc);
        
        clearscreen();

    } while(opc == 's' || opc == 'S');

    printf("\n\nObrigado por utilizar nossos servicos!\n\n");

    return 0;
};