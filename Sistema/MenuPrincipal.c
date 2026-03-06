#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <inttypes.h>


void MenuPrincipal() { 
    
  int opc;

   printf("\n");
   printf(" Bem Vindo a nossa Assistente Virtual!! 😊 ");
   printf("\n");
   system("cls");

   printf("\n Escolha uma opção para podemos te ajudar: \n");
   printf(" ");
   
   printf("\n 1 - Cadastrar");
   printf("\n 2 - Fazer login ");
   printf("\n 3 - Pesquisar produtos ");
   printf("\n 4 - Sair \n");
   
   printf("\n");
   scanf("%i", &opc);
   
   switch(opc){
    case 1:
     printf("\nNovo por aqui? Que legal, vamos realizar seu cadastro..\n");
     //cadastro();
     printf("Sua data de nascimento: ");
      //ImpressaoIdade();
       //validacaoLogin();
     break;
     
    case 2:
     printf("\nQue bom ter você de volta.. Insira os dados para logar: ");
       //validacaoLogin();
     break;
     
    case 3:
     printf("\n Digite o nome do produto: ");
     break;
     
    case 4:
      printf("\n Obrigado pelo contanto. Sempre que precisar pode me chamar 😊 ");
      break;

     default:
     printf(" Opção invalida - Digite novamente ");
     
   }
};

int main()
{         
  MenuPrincipal();
  
  return 0;
}
 