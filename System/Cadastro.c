#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define year 2026
#define CPF(cliente) printf("\tCPF: %.3s.%.3s.%.3s-%.2s ", cliente.cpf, cliente.cpf + 3, cliente.cpf + 6, cliente.cpf + 9);
#define Data_Nascimento(dnas) printf("\n %d/%d/%d \n", dnas.dia, dnas.mes, dnas.ano);

void clearscreen(){ system("cls"); }

typedef struct{
  int dia, mes, ano;
} DataNas;
DataNas dnas;

typedef struct {
  char nome[100],  cpf[11];
  int idade;
}usuario;
usuario cliente;

typedef struct {
  char senha[20];
  char email[50];
  DataNas LerData;
}cadastro;
cadastro cad;

   
void cadastrocliente(){
       
  printf("\n");
  printf(" Bem Vindo!! Vamos realizar seu cadastro");
  printf("\n");
  
  printf("Nome: ");
  fgets(cliente.nome, 100, stdin);
  printf("\n");

  printf("CPF(apenas numeros): ");
  scanf("%s", cliente.cpf);
  printf("\n");
    
  printf("Data de Nascimento(dd/mm/aaaa): ");
  scanf("%2d%d%4d", &dnas.dia, &dnas.mes, &dnas.ano);
  getchar();
  cliente.idade = year - dnas.ano;

  printf("E-mail: ");
  fgets(cad.email, 50, stdin);

  printf("Crie uma senha(max. 20): ");
  fgets(cad.senha, 20, stdin);
  system("cls");

};

void imprimirClientes(usuario cliente){
  printf("\tNome: %s", cliente.nome);
  printf("\tIdade: %i\n", cliente.idade);
  CPF(cliente);
}


int main(){

  char opc;
  usuario cliente;

  cadastrocliente();
  printf("Visualizar clientes cadastrados(S/N):");
  scanf("%c", &opc);
   if(opc == 'S' || opc == 's'){
    imprimirClientes(cliente);
   } else 
    printf("Programa Finalizado!");
  return 0;
}