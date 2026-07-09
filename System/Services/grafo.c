#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define QTD_vertice 4

typedef struct {
    int matriz[QTD_vertice][QTD_vertice];
    int numVertice;
} Grafo;

void inicializar(Grafo * g){
    g-> numVertice =0;
    for(int i = 0 ; i < QTD_vertice ; i++){
        for(int j = 0; j < QTD_vertice ; j++){
            g-> matriz[i][j] = 0;
        }
    }
}

void adicionarVert(Grafo * g){


}

void verificarVert(int vertice, int numVertice){
    if(vertice >= 0 && vertice < numVertice){
        return 1;
    } else
        return 0;
}

void imprimirGrafo(Grafo * g){
    for(int i = 0; i< QTD_vertice; i++){
        printf("\n");
        for(int j = 0; j< QTD_vertice; j++){
            printf("Vertice: %d \n", g->matriz[i][j]);
        }
    }
}


int main(){
    Grafo grafo;

    inicializar(&grafo);
    imprimirGrafo(&grafo);

    return 0;
}
