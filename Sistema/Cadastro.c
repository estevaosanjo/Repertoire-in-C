#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <inttypes.h>

#define linha 2
#define lin 2
#define coluna 12
#define tam 20
#define yearAtual 2026
#define MOSTRAR_FICHA(login) printf("\n Nome: %s | Idade: %d | CPF: %11s | Email: %s\n", login.Nome, login.Idade, login.CPF, login.email)


 /*typedef struct Ficha{
    
    int Idade;
    char Nome[10], Email[50], CPF[11], Senha[20];
    
  };
*/
  struct Usuario {
    int Idade;
    char Senha[20];
    char Nome[20], email[50], CPF[11];
 };

 struct Usuario login;


int validacaoidade(int ano, int idade){  
    if(ano >= 2009){
        printf("Voce e menor de idade");
     } else if(ano <= 1926){
        printf("Sua idade e incompativel!");
      } else 
        return printf("Voce tem %i anos!", idade);
};

int ImpressaoIdade(){
int dia, ano, mes, idade;

  printf("Digite o dia ");
  scanf("%i", &dia);

  printf("Digite o mês ");
  scanf("%i", &mes); 

  printf("Ano de nascimento ");
  scanf("%i", &ano);

   idade = yearAtual - ano;
 
      printf("\n%i/%i/%i \n", dia, mes, ano);

   validacaoidade(ano, idade);
  
}
 

 void validacaoLogin() {
    char email[50];
    char senha[20];

        printf("\nFaca o seu login: ");
        printf("\nEmail: ");
        scanf("%s", email);
        printf("\nDigite a senha: ");
        scanf("%s", senha);       
        printf("\n");

         //validação de e-mail & senha
         if (strcmp(email, login.email)== 0 && strcmp(senha, login.Senha) == 0){
             printf("Login realizado com sucesso!");
             MOSTRAR_FICHA(login);
         }
          else{
              printf("e-mail ou senha invalido - tente novamente!");
          }
        
};

void cadastro(){
       
       printf("\n");
       printf(" Que bom ter você aqui!! Vamos realizar seu cadastro: ");
       printf("\n");
       printf("\n");

        printf("Nome: ");
        scanf("%s", login.Nome);
        printf("\n");

        printf("E-mail: ");
        scanf("%s", login.email);
        printf("\n");

        printf("CPF (apenas numeros) : ");
        scanf("%11s", login.CPF);
        printf("\n");

        printf("Crie uma senha(max 20): ");
        scanf("%20s", login.Senha);
        system("cls");

};

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
     cadastro();
     printf("Sua data de nascimento: ");
     ImpressaoIdade();
     validacaoLogin();
     break;
     
    case 2:
     printf("\nQue bom ter você de volta.. Insira os dados para logar: ");
       validacaoLogin();
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
 