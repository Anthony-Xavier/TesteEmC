//atribuir nome, sexo, idade e salario de uma pessoa a variáveis e imprimir
#include <stdio.h>

int main(){
//declaração das variáveis
char nome[] = "anthony xavier";
char sexo = 'M';
int idade = 18;
float salario ;
salario = 999.99;
 printf("seus dados sao; \n");
printf("nome:%s\n", nome);
printf("sexo:%c\n", sexo);
printf("voce tem %d anos \n", idade);
printf("voce ganha %.2f reais por mes", salario);
return 0;
}