// este programa le se o numero é par ou impar
#include <stdio.h>

int main(void){
int x, y ; 
printf("forneca os dois numeros:");
scanf("%d %d", &x, &y);
printf("soma: %d\n", x+y);
    if(x+y%2==0){
        printf("este numero eh par");
    }
    else{
        printf("este numero eh impar");
    }
return 0;
}