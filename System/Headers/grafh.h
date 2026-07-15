#ifndef GRAFH_H
#define GRAFH_H

#define QTD_vertice 4

typedef struct {
    int matriz[QTD_vertice][QTD_vertice];
    int numVertice;
} Grafo;

void inicializarGrafo(Grafo * g);
void adicionarVert(Grafo * g);
int verificarVert(int vertice, int numVertice);
void adicionarAresta(Grafo *g, int vertice1, int vertice2);
void removerAresta(Grafo * g, int vertice1, int vertice2);
void imprimirGrafo(Grafo * g);
void startGrafh();

#endif