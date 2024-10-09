//PROGRAMA QUE CONVERTE MOEDAS :OBS- USAR O MEU CONHECIMENTO PARA FAZER E AJUDA DA IA
#include <stdio.h>

void converter_moedas(float valor, char de, char para) {
float resultado;
const float taxa_fixa_dolar = 5.46;
const float taxa_fixa_euro = 5.98;
    // Conversão de R$ para moeda desejada
    if (de == 'R') {
        if (para == 'D') {
        resultado = valor / taxa_fixa_dolar;
        printf("%.2f Reais = %.2f Dolares\n", valor, resultado);
        }
        else if (para == 'E') {
        resultado = valor / taxa_fixa_euro;
        printf("%.2f Reais = %.2f Euros\n", valor, resultado);
        } 
        else {
        resultado = valor;
        printf("%.2f Reais = %.2f Reais\n", valor, resultado);
        }
    } 
    else if (de == 'D') {
        if (para == 'R') {
        resultado = valor * taxa_fixa_dolar;
        printf("%.2f Dolares = %.2f Reais\n", valor, resultado);
        } else if (para == 'E') {
        resultado = (valor * taxa_fixa_dolar) / taxa_fixa_euro;
        printf("%.2f Dolares = %.2f Euros\n", valor, resultado);
        } 
        else {
        resultado = valor;
        printf("%.2f Dolares = %.2f Dolares\n", valor, resultado);
        }
    } 
    else if (de == 'E') {
        if(para == 'R') {
         resultado = valor * taxa_fixa_euro;
         printf("%.2f Euros = %.2f Reais\n", valor, resultado);
        } 
        else if (para == 'D') {
        resultado = (valor * taxa_fixa_euro) / taxa_fixa_dolar;
         printf("%.2f Euros = %.2f Dolares\n", valor, resultado);
        } 
        else {
        resultado = valor;
        printf("%.2f Euros = %.2f Euros\n", valor, resultado);
        }
    }
    else {
    printf("Unidade de origem inválida.\n");
    }
}

int main(void) {
float valor;
char de, para;
printf("Digite o valor a ser convertido: ");
scanf("%f", &valor);
printf("Digite a moeda de origem (R - Reais, D - DOlar, E - Euro): ");
scanf(" %c", &de); // O espaço antes de %c ignora o caractere de nova linha
printf("Digite a moeda de destino (R - Reais, D - DOlar, E - Euro): ");
scanf(" %c", &para); // O espaço antes de %c ignora o caractere de nova linha
converter_moedas(valor, de, para);
return 0;
}
