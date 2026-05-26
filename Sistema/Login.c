#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include <inttypes.h>


#define yearAtual 2026
  

typedef struct Usuario{
   int Idade;
   char Senha[20];
   char Nome[100], email[100], CPF[11];
}Usuario;
Usuario cliente;

void validacaoLogin(Usuario cliente);
int validacaoidade(int ano, int idade);

int main(){
   return 0;
}

int validacaoidade(int ano, int idade){  
    if(ano >= 2009){
        printf("Voce e menor de idade");
     } else if(ano <= 1926){
        printf("Sua idade e incompativel!");
      } else 
        return printf("Voce tem %i anos!", idade);
};

void validacaoLogin(Usuario cliente) {
    
   Usuario login;
   int chance= 3;

      do{
         printf(" -- Faca seu login --");
         printf("\nEmail: ");
         fgets(login.email, 50, stdin);
         printf("Senha: ");
         fgets(login.senha, 20, stdin);

         if((strcmp(login.email, login.email) == 0) && (strcmp(login.senha, login.senha)==0)){
           printf("Login Efetuado com sucesso!\n\n");
           imprimirCadastro(cliente);
           chance = 0;
         }
         else { 
            printf("\nErro!! Seu Email ou sua senha esta incorreto\n");
            chance--;
            printf("Voce tem %i tentativas. Caso exceda 3 sera bloqueado!\n\n", chance);
         
            if(chance == 0){
            printf("\tSua conta foi bloqueada! Entre em contato com o suporte.");
            }
         
         }

  } while(chance != 0);
};


