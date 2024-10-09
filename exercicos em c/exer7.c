// este programa le se o numero é par ou impar

#include <stdio.h>

int main(void){
int x;
printf("informe o numero: ");
scanf("%d", &x);
    if(x%2==0){
    printf("Este numero eh par");
    }
    else {
    printf("este nuemro eh impar");
    }
return 0;
}