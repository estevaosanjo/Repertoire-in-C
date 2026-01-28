#include <stdio.h>
#include <string.h>
#include <math.h>
#include <inttypes.h>

// definir constantes para facilitar a codificação
//inditificação e pré definição de matrizes e vetores

#define linha 2
#define lin 2
#define coluna 12
#define tam 20
#define MOSTRAR_FICHA(u) printf("\n Nome: %s | Idade: %d | Salario: %.3f | Email: %s\n", u.Nome, u.Idade, u.Salario, u.Email)


 typedef struct Ficha{
    
    int Idade;
    float Salario;
    char Nome[10], Email[50];
    
  };
// Criando um sistema de cadastro - empresa virtual
// Guardar usuários, serviços da empresa e respostas automáticas
// Soma de valores - Calculadora de preços
// Usando comandos básicos e ampliando conforme o conhecimento 

  struct Usuario {
    int Idade;
    char Senha[20];
    char Nome[20], email[50], CPF[11];
};

 struct Usuario login;
 
 void inicio() {
    int i;
    char email[50];

        printf("\nFaça o seu login: ");
      
        printf("\nEmail: ");
        scanf("%s", email);
         
         if (strcmp(email, login.email) ==0){
             printf("Login realizado com sucesso!");
         }
          else{
              printf("E-mail inválido - Digite novamente!");
          }
        
}


void cadastro(){
    
       printf("E-mail: ");
       scanf("%s", login.email);
       
       printf("CPF (apenas números) : ");
       scanf("%11s", login.CPF);
}

void MenuPrincipal() { 
    
  int opc;

   printf("\n");
   printf(" Bem Vindo á nossa Assistente Virtual!! 😊 ");
   printf("\n");
   
   printf("\n Escolha uma opção para podemos te ajudar: \n");
   printf(" ");
   
   printf("\n 1 - Cadastrar");
   printf("\n 2 - Fazer login ");
   printf("\n 3 - Pesquisar produtos ");
   printf("\n 4 - Falar com atendente ");
   printf("\n 5 - Sair \n");
   
   
   scanf("%i", &opc);
   
   switch(opc){
    case 1:
     printf("\nNovo por aqui? Que legal, vamos realizar seu cadastro..\n");
     cadastro();
     inicio();
     break;
     
    case 2:
     printf("\nQue bom ter você de volta.. Insira os dados para logar: ");
       inicio();
     break;
     
    case 3:
     printf("\n Digite o nome do produto: ");
     break;
     
    case 4:
      printf("\n Vamos conecta-lo a um de nossos atendentes ");
     break;
     
    case 5:
      printf("\n Obrigado pelo contanto. Sempre que precisar pode me chamar 😊 ");
     break;
     
     default:
     printf(" Opção inválida - Digite novamente ");
     
   }
}

int main()
{         
  MenuPrincipal();

}
 