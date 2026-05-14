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
  calculos salvar[30];

 int somar(double n1, double n2){      
        double res = n1 + n2 ;
        printf("\n\nSoma: %lf\n\n", res);
        return 0;
    }
 int subtrair(double n1, double n2){
        double res = n1 - n2;
        printf("\n\nSubtração: %lf\n\n", res);
        return 0;
    }
 int multiplicar(double n1, double n2){
        double res = n1 * n2;
        printf("\n\nMultiplicação: %lf\n\n", res);
        return 0;
    }   
 int dividir(double n1, double n2){     
        // Verificando se o segundo numero é 0 -- Se for 'Diferente de' 0, executa:
        if (n2 != 0 ){ double res = n1 / n2; printf("\n\nDivisão: %lf\n\n", res); } // Se for 0, exibe mensagem de erro
        else { printf("Erro! "); }
        return 0;
    }
    

// Limpar a tela
void clearscreen(){ system("cls"); }
        
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
        case '+': somar(num1,num2); break; 
        case '-': subtrair(num1,num2); break;
        case '*': multiplicar(num1,num2); break;
        case '/': dividir(num1,num2); break;
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
    
int main()
{ 
    maisCalculo();  
    return 0;
}