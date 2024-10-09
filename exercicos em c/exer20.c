//temorizador
#include <stdio.h>
#include <windows.h>

int main(void){
int min, seg;
printf("informe os minutos e os segundos: ");
scanf("%d %d", &min, &seg);
    if(min < 0 || seg<0 || min>59 || seg>59 || (min == 0 && seg==0)){               //entrada invalida
    printf("valores invalidos. Tente novamente\n");
    }
    else{
        do{
        system("cls");
            if (min<10){
                if(seg<10){
                printf("0%d:0%d\n", min, seg);
                }
                else{
                printf("0%d:%d\n", min, seg);
                } 
            }
            else if (seg<10){
            printf("%d:%d\n", min, seg);
            }
            else{
            printf("%d:%d\n", min, seg);
            }
            
        //printf("%d:%d\n", min, seg);                                                 // imprime os valores no formato min:seg
        Sleep(1000);                                                               //atualiza os valores a cada segundo
            if(seg==0){                                                            // se segundos for igual a 0
            min --;                                                                // minuto diminui
            seg = 59;                                                              // segundos volta para 59
            }
            else{
            seg --;
            }
        }while(min!=0 || seg!=0);
    system("cls");
    printf("%d:%d\n", min, seg);                                                 // tempo zerado
    printf("\n TEMPO ESGOTADO");
        for(int i=0; i<5; i++){
        Beep(880, 100);                                                         //som
        Sleep(500);
        }
    }
return 0;
}