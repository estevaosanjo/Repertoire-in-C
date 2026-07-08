#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define QTD_vertice 4

typedef struct {
    int matriz[QTD_vertice][QTD_vertice];
    int numVertice;
} Grafo;

void inicializar(Grafo * g){
    for(int i = 0 ; i < QTD_vertice ; i++){
        for(int j = 0; j < QTD_vertice ; j++){
            g-> matriz[i][j] = 0;
            g-> numVertice =0;
        }
    }
}

void adicionarVert(){

}

void verificarVert(){

}


int main(){

    return 0;
}
