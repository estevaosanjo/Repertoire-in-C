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
//#define MOSTRAR_FICHA(login) printf("\n Nome: %s | Idade: %d | CPF: %11s | Email: %s\n", login.Nome, login.Idade, login.CPF, login.email)


 /*typedef struct Ficha{
    
    int Idade;
    char Nome[10], Email[50], CPF[11], Senha[20];
    
  };
*/

typedef struct {
    int idade;
    char senha[20];
    char nome[20], email[50], cpf[11];
   } usuario;
     usuario login;

   
void cadastro(){
       
       printf("\n");
       printf(" Que bom ter você aqui!! Vamos realizar seu cadastro: ");
       printf("\n");
       printf("\n");

        printf("Nome: ");
        scanf("%s", login.nome[20]);
        printf("\n");

        //printf("E-mail: ");
        //fflush(stdin);
        //gets(login.email[50]);
        printf("\n");

        printf("CPF (apenas numeros) : ");
        scanf("%11s", login.cpf);
        printf("\n");

        printf("Crie uma senha(max 20): ");
        scanf("%20s", login.senha);
        system("cls");

};

int main()
{         

  cadastro();

  printf("%s", login.nome);
  return 0;
}
 