#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define year 2026
#define Data_Nascimento(dnas) printf("\n %d/%d/%d ", dnas.dia, dnas.mes, dnas.ano);

//#define MOSTRAR_FICHA(login) printf("\n Nome: %s | Idade: %d | CPF: %11s | Email: %s\n", login.Nome, login.Idade, login.CPF, login.email)


typedef struct{
   int dia, mes, ano;
} DataNas;
DataNas dnas;

typedef struct {
  char nome[20],  cpf[11];
  int idade;
} usuario;
     usuario cliente;

typedef struct {
  char senha[20];
  char email[50];
  usuario LerCliente;
  DataNas LerData;
} cadastro;
    cadastro cad;

   
void cadastrocliente(){
       
  printf("\n");
  printf(" Que bom ter você aqui!! Vamos realizar seu cadastro: ");
  printf("\n");
  printf("\n");

  printf("Nome: ");
  fgets(cliente.nome, 100, stdin);
  printf("\n");

  printf("CPF (apenas numeros) : ");
  scanf("%11s", cliente.cpf);
  printf("\n");
    
  printf("Data de Nascimento: ");
  scanf("%2d%2d%4d", &dnas.dia, &dnas.mes, &dnas.ano);
 // Data_Nascimento(dnas);
  cliente.idade = year - dnas.ano;

  printf("E-mail: ");
  fgets(cad.email, 30 ,stdin);
  printf("\n");
  printf("Crie uma senha(max 20): ");
  scanf("%20s", cad.senha);
  system("cls");

};

int main()
{         

  //cadastrocliente();

  return 0;
}
 