/*  esete programa le a nota de 3 trablahos e 3 provas de um aluno,
    calcular se foi aprovado, reprovado ou ficou de recuperação
*/
#include <stdio.h>

int main(void){
int t1, t2, t3 ;                                    //notas dos trabalhos
int p1, p2, p3 ;                                    // noras das provas
float mediaTrabs ;
float mediaProvas ;
float mediaFinal ;

printf("informe as notas dos trabalhos:");                              // Printa a frase na tela
scanf("%d %d %d",&t1, &t2, &t3);                                        // para o usurio colocar os dados
printf("informe as notas das provas:");                                 // Ptinta a frase na tela 
scanf("%d %d %d",&p1, &p2, &p3);                                        // para o usuario colocar os dados
mediaTrabs = (t1+t2+t3)/3.0;                                            //soma os trabalhos e divide por 3 para fazer a media
mediaProvas = (p1+2*p2+3*p3)/6.0;                                       // faz a nedia das provas por 6
mediaFinal = (mediaTrabs+mediaProvas)/2.0;                              // faz a media das medias das provas e trabalhos
    if(mediaFinal >=6) {                                                //se a media final for maior que 6 o aluno passa
    printf("estudante passou com media final %.2f",mediaFinal);             // printa frase falando que o aluno passou e mostra sua nota
    } else if (mediaFinal<4) {                                                  // se a media for menor que 4 o aluno rodou
    printf("estudante reprovou com media final %.2f",mediaFinal);               // printa frase falando que o aluno rodou e mostra sua nota
    } else{                                                                     // entao se a nota for maior que 4 e menor que 6 ele fica de recuperação 
    printf("o aluno ficou de recuperacao com medua final %.2f",mediaFinal);     // printa frase falando que o aluno ficou de recuperação e mostra sua nota
    }
return 0;
}