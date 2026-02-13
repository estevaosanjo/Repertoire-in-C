#include <stdio.h>

int validacaoAno(int ano, int idade){  
    if(ano >= 2009){
        printf("Voce e menor de idade");
     } else if(ano <= 1926){
        printf("Sua idade e incompativel!");
      } else 
        return printf("Voce tem %i anos!", idade);
};

int validacaoMes(int mes){

  //char * meses[12] = {"Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};

   if((mes >= 13) && (mes <= 0)){
     printf("Mes invalido!");
    } else if ((mes >= 1) || (mes <= 12 )) {
        if(mes == 1){
         return printf("Mes Janeiro");
       } else if (mes == 2){
          return printf("Mes Fevereiro");
        } else if(mes == 3){
           return printf("Mes Março");
         } else if (mes == 4 ){
             return printf("Mes Abril");
           }  else if(mes == 5){
              return printf("Mes Maio");
            }  else if(mes == 6){
                return printf("Mes Junho");
              }  else if(mes == 7){
                  return printf("Mes Julho");
                }  else if(mes == 8){
                     return printf("Mes Agosto");
                   }  else if(mes == 9){
                       return printf("Mes Setembro");
                     }  else if(mes == 10){
                         return printf("Mes Outubro");
                       }  else if(mes == 11){
                           return printf("Mes Novembro");
                        }  else if(mes == 12){
                            return printf("Mes Dezembro");
               }
      }
};


int main(){
int ano, mes, yearAtual, idade;

/*  printf("Digite o dia");
  scanf("%i", &dia);
  */
  printf("Digite o mês ");
  scanf("%i", &mes); 

  printf("Em que ano estamos? ");
  scanf("%i", &yearAtual);
  printf("Ano de nascimento ");
  scanf("%i", &ano);

   idade = yearAtual - ano;

   validacaoAno(ano, idade);
   printf("\n");
   validacaoMes(mes);


}