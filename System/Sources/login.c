/* #include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "cadastro.h"


#define yearAtual 2026

usuario cliente;
DataNas dnas;
cadastro cad;

  

void loginVerificacao() {         
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
      //imprimirCadastro(cliente);
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

  return;
}
*/