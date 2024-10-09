/*este programa le três valores e imprime se eles formam um triangulo
e de qual  tipo, isosales, escaleno ou equilatero*/
#include <stdio.h>

int main(void){
int a, b, c ;//valores do triangulo

printf("informe os valores:");                                      //infomrar se o triangulo é valido
scanf("%d %d %d", &a, &b, &c);
    if ((a<b+c) && (b<a+c) && (c<a+b) && (a>0) && (b>0) && (c>0)){      //triangulo e valido
        if((a==b) && (b==c)){                                           //informa se é equilatero
        printf("os lados forma um triangulo equilatero:");
        }
    else if ((a!=b) && (b!=c) && (a!=c)){                           //infroma se é escaleno
    printf("os lados formam um triangulo escaleno");
    }
    else {
    printf("os lados formam um triangulo isoseles");
        }
    }
    else {
    printf("os lados não formam um triangulo");
    }
return 0;
}