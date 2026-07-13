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
    if(g->numVertice < QTD_vertice){
        g->numVertice++;
    } else
        printf("Nao foi possivel adicionar vertice!\n");
}

int verificarVert(int vertice, int numVertice){
    if(vertice >= 0 && vertice < numVertice){
        return 1;
    } else
        return 0;
}

void adicionarAresta(Grafo *g, int vertice1, int vertice2){
    if(verificarVert(vertice1, g->numVertice) && verificarVert(vertice2, g->numVertice)){
        g->matriz[vertice1][vertice2] = 1;
        g->matriz[vertice2][vertice1] = 1;
    }
    else
        printf("Nao foi possivel adicionar aresta!\n");
}

void removerAresta(Grafo * g, int vertice1, int vertice2){
    if(verificarVert(vertice1, g->numVertice) && verificarVert(vertice2, g->numVertice)){
        g->matriz[vertice1][vertice2] = 0;
        g->matriz[vertice2][vertice1] = 0;
    } else
        printf("Nao foi possivel remover aresta!\n");
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
    adicionarVert(&grafo);
    adicionarVert(&grafo);
    adicionarAresta(&grafo,0,1);
    adicionarAresta(&grafo,1,2);
    imprimirGrafo(&grafo);

    return 0;
}
