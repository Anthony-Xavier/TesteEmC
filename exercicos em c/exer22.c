//programa com estruturas para amazenar dados: renvam, placa, cor, modelo e ano

#include <stdio.h>
#include <string.h>

typedef struct automovel {
    int renavam;
    char placa[9];
    char cor[15];
    char modelo[20];
    int ano;
} Carro;

int main(void) {
    Carro carro1;
    carro1.renavam = 10;
    strcpy(carro1.placa, "FHH-9089");
    strcpy(carro1.cor, "vermelho");
    strcpy(carro1.modelo, "FIAT UNO");
    carro1.ano = 2010;

    Carro carro2;
    printf("Informe o renavam: \n");
    scanf("%d", &carro2.renavam);
    getchar(); // Limpa o buffer de entrada

    printf("Informe a placa: \n");
    fgets(carro2.placa, sizeof(carro2.placa), stdin);
    carro2.placa[strcspn(carro2.placa, "\n")] = '\0'; // Remove a nova linha

    printf("Informe o modelo: \n");
    fgets(carro2.modelo, sizeof(carro2.modelo), stdin);
    carro2.modelo[strcspn(carro2.modelo, "\n")] = '\0'; // Remove a nova linha

    printf("Informe a cor: \n");
    fgets(carro2.cor, sizeof(carro2.cor), stdin);
    carro2.cor[strcspn(carro2.cor, "\n")] = '\0'; // Remove a nova linha

    printf("Informe o ano: \n");
    scanf("%d", &carro2.ano);

    printf("\nDados dos carros:\n");
    
    printf("CARRO1:\n");
    printf("Renavam: %d\nPlaca: %s\nModelo: %s\nCor: %s\nAno: %d\n",
           carro1.renavam, carro1.placa, carro1.modelo, carro1.cor, carro1.ano);
    
    printf("\nCARRO2:\n");
    printf("Renavam: %d\nPlaca: %s\nModelo: %s\nCor: %s\nAno: %d\n",
           carro2.renavam, carro2.placa, carro2.modelo, carro2.cor, carro2.ano);

return 0;
}
