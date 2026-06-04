#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void clearscreen(){ system("cls"); }
void MenuPrincipal();

int main()
{         
  MenuPrincipal();
  
  return 0;
}
 
void MenuPrincipal() { 
    
  int opc;

   printf("\n");
   printf(" Bem Vindo a nossa Assistente Virtual!! 😊 \n");
   system("cls");

  do{
    printf("\n Escolha uma opcao: \n");
    printf("\n 1 - Cadastrar");
    printf("\n 2 - Fazer login ");
    printf("\n 3 - Pesquisar servico");
    printf("\n 0 - Sair \n");
    
    printf("\n");
    scanf("%i", &opc);
    
    switch(opc){
      case 1:
       printf("\nNovo por aqui? Que legal, vamos realizar seu cadastro..\n");
       break;
      case 2:
        //validacaoLogin();
       break;
      case 3:
       printf("\n Buscar servico: ");
       break;
      case 0:
        printf("\n Obrigado pelo contanto. Sempre que precisar pode me chamar 😊 ");
        break;
      default:
       printf(" Opcao invalida - Digite novamente ");
      }
    } while(opc != 0);

};
