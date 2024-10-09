//soma da serie soma = 1/1 - 2/3 +4/5 - 8/7 +16/9
#include <stdio.h>

int main(void){
int n, i;
float num, den;
float soma = 0;
num = 1;
den = 1;
printf("informe o numero de elementos a serem somados: ");
scanf("%d",&n);
    for(i=0; i<n; i++){
        if(i%2 == 0){
        soma= soma + num/den;
        }else{
        soma = soma - num/den;
        }
    num = num*2;
    den = den + 2;
    }
printf("soma dos %d primeiros elementos: %.3f", n,soma);
return 0;
}