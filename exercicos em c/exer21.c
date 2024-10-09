//este progtsms le as 10 notas de um aluno, calcula sua media aritimetica e imprime as notas

#include <stdio.h>
#define N 10

int main(void) {
float notas[N], soma = 0, media;
int i;
printf("Informe as notas:\n");
    for(i = 0; i < N; i++) {
        scanf("%f", &notas[i]);
        soma += notas[i];
    }    
media = soma / N;
    for(i = 0; i < N; i++) {
        printf("%f\n", notas[i]);
    }
printf("Media: %.3f\n", media);
return 0;
}