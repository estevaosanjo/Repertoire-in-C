#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <inttypes.h>


#define yearAtual 2026
 
 

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