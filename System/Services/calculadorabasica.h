#ifndef CALCULADORABASICA_H
#define CALCULADORABASICA_H

 typedef struct{
    double num1;
    double num2;
    double res;
    char operador;
 }calculos[100];

void salvarCalculos(calculos salvar, double n1, char operador, double n2, double res, int numerodeCalculos);
void mostrarHistotico(int numerodeCalculos);
int escolhaMain(int numerodeCalculos);

int somar(calculos salvar,double n1, double n2, int numerodeCalculos);
int subtrair(calculos salvar,double n1, double n2, int numerodeCalculos);
int multiplicar(calculos salvar,double n1, double n2, int numerodeCalculos);
int dividir(calculos salvar,double n1, double n2, int numerodeCalculos);

void iniciarCalc(int numerodeCalculos);
void Calculadora();
int maisCalculo();


#endif