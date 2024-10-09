/*este programa le um inteiro positivo n e em seguida imprime fatorial
dete numero
*/
#include <stdio.h>
int main(void){
float n, i, fat;
fat = 1;
printf("informe um numero: ");
scanf("%f", &n);    
    for(i=n; i>=1 ; i--){//loop que itera de n  ate 1
        fat = fat*i;//multiplica fat por 1
    }
printf("fatorial de %.0f eh %.0f", n, fat);
return 0;
}