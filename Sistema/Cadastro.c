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

 typerdef struct {
    int Idade;
    char Senha[20];
    char Nome[20], email[50], CPF[11];
   } usuario;

   

void cadastro(){
       
       printf("\n");
       printf(" Que bom ter você aqui!! Vamos realizar seu cadastro: ");
       printf("\n");
       printf("\n");

        printf("Nome: ");
        scanf("%s", login.Nome[20]);
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
int main()
{         
 
 
  usuario login;

  cadastro();

  printf("%s", login.Nome);
  return 0;
}
 