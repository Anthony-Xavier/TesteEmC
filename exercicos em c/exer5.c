/*
    faça um programa que le dois inteiros e imorime:
    a soma dos dois núemros
    o primeiro menos o segundo
    a parte inteira da divisão do primeiro pelo segundo
    o resto da divisão 
    a mutiplicção dos núemros 
    a divisão dos números
*/
#include <stdio.h>

int main(void){
int x, y ; 
printf("forneca os dois numeros:");
scanf("%d %d", &x, &y);

printf("soma: %d\n", x+y);
printf("subtracao: %d\n", x-y);
printf("parte inteira x/y: %d\n", x/y);
printf("parte inteira y/x: %d\n", y/x);
printf("parte de x por y: %d\n", x%y);
printf("parte de y por x: %d\n", y%x);
printf("Multiplicacao: d%\n", x*y);
printf("divisao de x por y: %f\n", x/ (float) y); //casting
printf("divisao de y por x: %f\n", x/ (float) x); //casting
return 0;
}