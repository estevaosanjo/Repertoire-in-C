#include <stdio.h>

int validacaoidade(int ano, int idade){  
    if(ano >= 2009){
        printf("Voce e menor de idade");
     } else if(ano <= 1926){
        printf("Sua idade e incompativel!");
      } else 
        return printf("Voce tem %i anos!", idade);
};


int main(){
int dia, ano, mes, yearAtual, idade;

  printf("Digite o dia ");
  scanf("%i", &dia);

  printf("Digite o mês ");
  scanf("%i", &mes); 

  printf("Ano de nascimento ");
  scanf("%i", &ano);
  
  printf("Em que ano estamos? ");
  scanf("%i", &yearAtual);
  
   idade = yearAtual - ano;
 
      printf("\n%i/%i/%i \n", dia, mes, ano);

   validacaoidade(ano, idade);
   printf("\n");
  
}