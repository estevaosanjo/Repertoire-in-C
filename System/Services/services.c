#include <stdio.h>
#include <stdlib.h>
#include "calculator.h"
#include "recursion.h"
#include "sortingAlgorithm.h"
#include "binarySearch.h"
#include "tableHash.h"
#include "services.h"


void servicos(){
    int opcao;

    printf("Nossos servicos: \n");
    printf("(0) Sair \n");
    printf("(1) Calculadora \n");
    printf("(2) Busca Binaria \n");
    printf("(3) Tabela Hash \n");
    printf("(4) Grafo \n");
    printf("(5) Recursao \n");
    scanf("%i", &opcao);
    switch(opcao){
    case 0:
     return printf("Obrigador por utilizar nossos serviços!");
     break;
    case 1:
        Calculadora();
    case 2:
        startSearchBi();
    case 3:
        startHash();
    case 4:
        //grafo
    case 5:
        recursion();
    case 6:
        startSorting();
    default:
     printf("Opcao invalida!! Tente novamente..");
    }

    return;
}