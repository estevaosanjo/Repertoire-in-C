#include <stdio.h>

int validacaoAno(int ano, int idade){
    
    if(ano >= 2009){
        printf("Voce e menor de idade");
     } else if(ano <= 1926){
        printf("Sua idade e incompativel!");
      } else 
        return printf("Voce tem %i anos!", idade);
};

int main(){
int ano, yearAtual, idade;

/*  printf("Digite o dia");
  scanf("%i", &dia);
  printf("Digite o mês");
  scanf("%i", &mes);
*/ 

  printf("Em que ano estamos? ");
  scanf("%i", &yearAtual);
  printf("Ano de nascimento ");
  scanf("%i", &ano);

   idade = yearAtual - ano;

   validacaoAno(ano, idade);


}