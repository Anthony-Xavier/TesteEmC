// programa que calcula a comcinação cn,k =n!((n-k)!k!)

#include<stdio.h>

int fat(int x) {
int fat = 1;
     for (int i = x; i > 0; i--){
        fat=fat*i;
    }
return fat;
}

int comb(int n, int k){
return fat(n)/(fat(n-k)*fat(k));
}

int main(void){
int a, b, combinacao;
scanf("%d %d", &a, &b);
combinacao = comb(a, b);
printf("combinaca %d %d a %d = %d", a, b, b, combinacao);
}