/*este programa le o salario de uma pessoa, a taxa de imposto de renda
e a taxa de inss. Em seguida, mostrao seguinte menu:
1: salario liquido
2: valor descontado pelo imposto de renda
3: valor desotado pelo inss
*/
#include <stdio.h>

int main(void){
float salario_bruto, tx_ir, tx_inss;
float salario_liquido, valor_ir, valor_inss;                                    //valor descontado
int opcao;                                                                      //opção selecionada no menu
printf("informe o salario burto, taxa do imposto de renda, taxa do INSS:");
scanf("%f %f %f", &salario_bruto, &tx_ir, &tx_inss);


valor_ir = tx_ir*salario_bruto/100;                                     //calculando os valores descontados e o salario liquido
valor_inss = tx_ir*salario_bruto/100;
salario_liquido = salario_bruto - valor_inss - valor_ir;
printf("escolha uma opção abaixo:.\n");                                 //mostra as opçoes
printf("\t1:salario liquido.\n");                                       // opçao 1
printf("\t2: valor descontado pelo imposto de renda .\n");              //opcao 2
printf("\t3: valor descontado pelo INSS.\n");                           // opao 3
scanf("%d", &opcao);
    switch (opcao){
    case 1:
    printf("seu salario liquido %.2f reais \n", salario_liquido);     //exibe salario liqueido com 2 casas decimais
    break;//encerra case
    case 2:
    printf("desconto do imposto de renda %.2f \n", valor_ir);         //exibe desconto de renda formatado
    break;//encerra case
    case 3:
    printf("desconto do INSS %2.f \n", valor_inss);                  //exibe o desconto do INSS
    break;                                                          //encerra case
    default:

    printf("voce selecionou uma opcção invalida");                  //informa o usuario que a opçao selecionanda é invalida
}
return 0;
}