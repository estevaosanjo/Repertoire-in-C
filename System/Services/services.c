#include <stdio.h>
#include <stdlib.h>
#include "calculadorabasica.h"



int main(){
    int opcao;

    printf("Nossos servicos: \n");
    printf("(0) Sair \n");
    printf("(1) Calculadora \n");
    scanf("%i", &opcao);
    switch(opcao){
    case 0:
     return printf("Obrigador por utilizar nossos serviços!");
     break;
    case 1:
        Calculadora();
    default:
     printf("Opcao invalida!! Tente novamente..");
    }

    return 0;
}








//calculadora
//buscabinaria
//grafo
//tabelahash
//recursao
//ordenacao
