#ifndef CADASTRO_H
#define CADASTRO_H

typedef struct{
  int dia, mes, ano;
} DataNas;


typedef struct {
  char nome[100],  cpf[11];
  int idade;
}usuario;

typedef struct {
  char senha[20];
  char email[50];
  DataNas LerData;
}cadastro;

void cadastrocliente();
void imprimirClientes(usuario cliente);

#endif

