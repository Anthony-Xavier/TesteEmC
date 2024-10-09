/*este programa le um inteiro e imprime a quantidade de digitos que ele possui*/
#include <stdio.h>

int main(void){
int n, quo, cont;
cont = 0;//contador sera iniciado com 0

printf("forneca o numero\n");
scanf("%d", &n);
quo = n;
    while (quo !=0){
        quo =quo/10;//divide por 10 pois motra quantos numeros tem
        cont++;//somta um para o contador
    }

    
    if(n==0){
    printf("possui 1 digito");
    } else {
    printf("possui %d digito(s)",cont);
    }
return 0;
}