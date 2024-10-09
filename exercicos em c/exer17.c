// soma de serie s = 1 + 1/2 + 1/3 +1/4
int main(void) {
int n, i;
float soma = 0;
printf("Informe o numero de elementos a serem somados: ");
scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        soma = soma + 1.0 / i;
    }
printf("Soma dos %d primeiros elementos: %.3f\n", n, soma); // Corrigido "sooma" para "soma" e adicionado ponto e vírgula
return 0;
}