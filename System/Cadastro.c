#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define year 2026
#define CPF(cliente) printf("\tCPF: %.3s.%.3s.%.3s-%.2s ", cliente.cpf, cliente.cpf + 3, cliente.cpf + 6, cliente.cpf + 9);
#define Data_Nascimento(dnas) printf("\n %d/%d/%d \n", dnas.dia, dnas.mes, dnas.ano);

//#define MOSTRAR_FICHA(login) printf("\n Nome: %s | Idade: %d | CPF: %11s | Email: %s\n", login.Nome, login.Idade, login.CPF, login.email)

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
  printf(" Bem Vindo!! Vamos realizar seu cadastro: ");
  printf("\n");
  printf("\n");

  printf("Nome: ");
  fgets(cliente.nome, 22, stdin);
  printf("\n");

  //printf("\tNome: %s\n", cliente.nome);

  printf("CPF (apenas numeros) : ");
  scanf("%s", cliente.cpf);
 // CPF(cliente);
  printf("\n");
    
  printf("Data de Nascimento: ");
  scanf("%2d%d%4d", &dnas.dia, &dnas.mes, &dnas.ano);
  getchar();
  //Data_Nascimento(dnas);
  cliente.idade = year - dnas.ano;

  printf("E-mail: ");
  fgets(cad.email, 50, stdin);
  //scanf("%50s", cad.email);

  printf("Crie uma senha(max 20): ");
  fgets(cad.senha, 20, stdin);
  system("cls");

};

void imprimirCadastro(usuario cliente){
  printf("\tNome: %s", cliente.nome);
  printf("\tIdade: %i\n", cliente.idade);
  CPF(cliente);
}

int main()
{         
  int chance= 3;
  cadastro cads;
  cadastrocliente();
  
  do{
    printf(" -- Faca seu login --");
    printf("\nEmail: ");
    fgets(cads.email, 50, stdin);
    printf("Senha: ");
    fgets(cads.senha, 20, stdin);

    if((strcmp(cad.email, cads.email) == 0) && (strcmp(cad.senha, cads.senha)==0)){
      printf("Login Efetuado com sucesso!\n\n");
      simprimirCadastro(cliente);
      chance = 0;
    } else { 
        printf("\nErro!! Seu Email ou sua senha esta incorreto\n");
        chance--;
        printf("Voce tem %i tentativas. Caso exceda 3 sera bloqueado!\n\n", chance);
        
        if(chance == 0){
            printf("\tSua conta foi bloqueada! Entre em contato com o suporte.");
        }
      }

  }while(chance != 0);

  return 0;
}
 