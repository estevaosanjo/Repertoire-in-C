#include <stdio.h>

int main()
{
   //leitura de posições se inicia em 0
   //Por tanto, a declaração de 3 posições será percorrida: '0,1,2'
    int num[10][5]={1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9,1,
                    2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8};
     
    // leitura e impressão das posições
    // Esse for serve para atribuir os valores a i e j
    // Valores declarados na matriz da variável   
    for(int linha = 0 ; linha < 5 ; linha++){
        for(int coluna = 0; coluna < 10; coluna++){
           printf("%d ", num[linha][coluna]); 
        }
        printf("\n");
      }
     
    return 0;
    
  }
