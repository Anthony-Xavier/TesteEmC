// este programa lê o sexo, idade e salario e imprims os valores lidos
#include <stdio.h>

int main(void){
int idade;
float salario;
char sexo;

//leituras
printf("quantos anos voce tem?");
scanf("%d",&idade);

printf("qual eh o seu salario?");
scanf("%f",&salario);
printf("qual e seu genero? F|M");
scanf(" %c",&sexo);
//imprimir valores lidos
printf("voce tem %d anos, ganha %.2f R$ e eh do genero %c", idade, salario, sexo);
 return 0;
}