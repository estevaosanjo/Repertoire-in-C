#include <stdio.h>

int main()
{
   //leitura de posições se inicia em 0
   //Por tanto, a declaração de 3 posições será percorrida: '0,1,2'
   
   
   
    int num[10][10]={1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9,1,
                    2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,
                    9,1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,
                    7,8,9,1,2,3,4,5,6,7,8,9,1,2,3,4,
                    5,6,7,8,9,1,2,3,4,5,6,7,8,9,1,2,3,4,5,6,7,8,9};
     
    // leitura e impressão das posições
    // Esse for serve para atribuir os valores a i e j
    // Valores declarados na matriz da variável
    
    for(int i = 0 ; i < 10 ; i++){
        for(int j = 0; j < 10; j++){
           printf("%d ", num[i][j]); 
        }
        printf("\n");
    }
     
    return 0;
    
  }
