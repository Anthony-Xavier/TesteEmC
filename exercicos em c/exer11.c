/* este programa le duas string e imprime:
    o tamanho de duas string
    o primeiro em letras minusculas
    o segundo em letras maiusculas
    as dua string em ordem alfabetica crescente
*/
#include <stdio.h>
#include <string.h>
#define N 50 //define o tamanho maximo para as string

int main(void){
char str1[N];               //declaração do primeiro array
char str2[N];               //declaração do seundo array
char aux[N];                // declaração do array auxilar

gets(str1);                 //le a primeira string
gets(str2);                 //le a segunda strinh
printf("tamanho: %d e %d, respectivamente.\n", strlen(str1), strlen(str2));                 //exibe o tamanhos das strings lidas
strcpy(aux, str1);                                                                          //copia str1 para aux para manipulação 
printf("1ra string em minusculo: %s\n", strlwr(aux));                                       // converte aux para minusculo
strcpy(aux, str1);                                                                          // copia str1 para aux para manipulção 
printf("2da string em maiusculo: %s\n", strupr(aux));//converte auc para maiusculo     
    if(strcmp(str1, str2) < 0 )                                                              // compara as duas strings e imprime
    printf("%s ||| %s\n", str1, str2);
    else
    printf("%s ||| %s\n", str1, str2);                                                     //contatena str1, armazenando o resulatdo
printf("concatenacao %s", strcat(str1, str2));
return 0;
}

