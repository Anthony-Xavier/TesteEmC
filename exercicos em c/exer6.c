/*
    esse programa le angulos em graus e imprime, seno
    cosseno e tanganete desse angulo
*/

#include <stdio.h>
#include <math.h>
#define PI_RAD 3.14
#define PI_GRAUS 180

int main(void){
float ang_graus; //Graus
float ang_rad, cosseno;
printf("Infome o angulo");
scanf("%f", &ang_graus);
ang_rad = PI_RAD* ang_graus/PI_GRAUS;
printf("o seno de %f eh %f \n", ang_graus, sin(ang_rad));
printf("o cosseno de %f eh %f\n", ang_graus, cos(ang_rad));
printf("o tagente de %f eh %f\n", ang_graus, tan(ang_rad));
cosseno = sqrt(1 - pow(sin(ang_rad), 2));
printf("o cosseno de %f eh %f", ang_graus, cosseno);
return 0;
}