//calcular a area de um retangulo
#include <stdio.h>

int main(void){
int altura;
int largura;
int area; 
//leitura
printf("qual eh a altura?");
scanf("%d", &altura);
printf("qual eh a largura?");
scanf("%d", &largura);
area = altura * largura;
printf("a area do retangulo eh: %d\n", area);
return 0;
}