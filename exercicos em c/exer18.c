//soma de series s = 1 + 2/3 + 4/9 + 8/27
#include <stdio.h>

int main(void) {
int n, i;
float num, den;
num = 1;
den = 1;
n = 2;
i = 2;
float soma = 0;
printf("Informe o numero de elementos a serem somados: ");
scanf("%d", &n);
    for (i = 0; i < n; i++) {
    soma = soma + num / den;
    num = num * 2;
    den = den * 3;
    }
printf("Soma dos %d primeiros elementos: %f\n", n, soma);
return 0;
}