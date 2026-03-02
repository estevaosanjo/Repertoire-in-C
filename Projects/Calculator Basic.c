#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <locale.h> 

// Calculadora
// Sistema b�sico de calc�los criados
// Atribuir fun��es de retorno --
    double num1;
    double num2;
    double res;
 
    int somar(){
       
        res = num1 + num2 ;
        
        printf("Soma: %lf", res);
        
        return 0;
   }
    
    int subtrair()
    {
        res = num1 - num2;
        printf("\nSubtra��o: %lf", res);
        
        return 0;
    }
    
    int multiplicar(){
        res = num1 * num2;
        
        printf("\nMultiplica��o: %lf", res);
        
        return 0;
    }
    
    int dividir(){
        
    // Verificando se o segundo n�mero � 0
    // Se for 'Diferente de' 0, executa:
         if (num2 != 0 ){
            res = num1 / num2;
            printf("\nDivis�o: %lf", res);
         } // Se for 0, exibe mensagem de erro
          else
           {
            printf("Erro! ");
           }

    }
    
    // Calculadora transformada em fun��o    
    void Calculadora(){
   
        int opc;
        printf("Calculadora: \n");
        
        printf("\nDigite N�: ");
        scanf("%lf", &num1);
        printf("\nDigite N�: ");
        scanf("%lf", &num2);
        
        printf("\nEscolha a Oprera��o: \n");
        printf("\n");
        printf(" 1: + | 2: - | 3: * | 4: / \n");
        
        scanf("%i", &opc);
        
        switch (opc){
            
        case 1:
            somar(); 
            break;
            
        case 2:
            subtrair();
            break;
        
        case 3:
            multiplicar();
            break;
            
        case 4:
            dividir();
            break;
            
        default:
            printf("Escolha inv�lida!");
        
    }
}

    // Função para fazer um novo calculo ou não
    int maisCalculo(char opc){

     printf("\nDeseja fazer mais calculos? \n");
     printf(" SIM - S/s   N�O - N/n ");
     scanf(" %c", &opc);  
  
     if(opc == 's' || opc == 'S'){
         printf(" ");  
         Calculadora();
       } else if (opc == 'n' || opc == 'N'){
           printf("Obrigado por utilizar nossos servi�os!");
        }else{
            printf("Escolha inv�lida!");
           }
       return 0;
    }
    
int main()
{
   setlocale(LC_ALL, "Portuguese_Brazil");
     char op;   
// chamando calculadora

    Calculadora();
    maisCalculo(op);

 return 0;
}