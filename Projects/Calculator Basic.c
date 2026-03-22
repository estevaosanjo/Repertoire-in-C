#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Calculadora
// Sistema básico de calcúlos criados
// Atribuir funções de retorno --
 typedef struct{
     double num1;
     double num2;
     double numAl;
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
    


   /* int salvarCalculos(){
        char opc;
        printf("Você quer salvar os calculos?");
        scanf("%c", opc);
         if((opc == 's') || (opc == 'S')){
            opc = salvar.max[1];

         } else 
          return 0;
    };*/

    // Limpar a tela
    void clearscreen(){ system("cls"); }
    
    // Calculadora transformada em função    
    void Calculadora(){
      double num1;
      double num2;

        int opc;

        printf("Calculadora: \n");
        
        printf("\nDigite Nª: ");
        scanf("%lf", &num1);
        printf("\nDigite Nª: ");
        scanf("%lf", &num2);
        
        printf("\nEscolha a Opreração: \n");
        printf("\n");
        printf(" 1: + | 2: - | 3: * | 4: / \n");
        
        scanf("%i", &opc);
        
        switch (opc){    
        case 1: somar(num1,num2); break; 
        case 2: subtrair(num1,num2); break;
        case 3: multiplicar(num1,num2); break;
        case 4: dividir(num1,num2); break;
        default: printf("Escolha inválida!");
        
    }
}
    // Função para fazer um novo calculo ou não
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
   //Função que chama calculadora e repete ela mesma
   maisCalculo();
    
 return 0;
}