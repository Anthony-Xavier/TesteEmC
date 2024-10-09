/*este programa le um inteiro positivo n e em seguida imprime
a tabuada deste numero
*/

#include <stdio.h>
int main(void){
int n, j;
printf("informe um numero:");
scanf("%d", &n);//armazenda o numero digitado em n
    for (j=0; j<=10; j=j+1){//loop que itera 0 ate 10
    printf("%d x %d = %d\n",n, j, n*j);//imprime a tabuada do numero n (j vai ser de 0 a 10)
    }
return 0;
}