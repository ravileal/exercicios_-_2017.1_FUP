#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int main(){

    int ano, mes, dia, temp1, temp2, ult, tamanho;
    char anoV[5];

    printf("Digite o dia, mes, e ano\n");
    scanf("%d %d  %d",&dia,&mes,&ano);


    if(ano <= 0 || mes <= 0 || mes > 12 || dia <= 0 ){

        printf("Data invalida\n");

    }else{

        switch (mes) {
            case 1:
                if(dia <= 31) printf("Data valida\n"); else printf("Data invalida\n");
            break;
            case 2:

                snprintf(anoV, 5,"%d",ano);

                tamanho = sizeof(anoV) - 2;

                if( anoV[tamanho-1] == '0' &&  anoV[tamanho] == '0' ){
                    ult = 0;
                }else{
                    ult = 1;
                }

                temp1 = ano%4;
                temp2 = ano%400;

                /* se a ultimo digito = 00 e ano mod 400 ou ultimo digito n for 00 e ano mod 4*/
                if( ( (ult == 0 && temp2 == 0 ) || temp1 == 0)  && dia==29 ){
                    printf("Data valida\n");
                }else if(dia >= 29){
                    printf("Data invalida\n");
                }else{
                    printf("Data valida\n");
                }

            break;
            case 3:
                 if(dia <= 31) printf("Data valida\n"); else printf("Data invalida\n");
            break;
            case 4:
                 if(dia <= 30) printf("Data valida\n"); else printf("Data invalida\n");
            break;
            case 5:
                 if(dia <= 31) printf("Data valida\n"); else printf("Data invalida\n");
            break;
            case 6:
                 if(dia <= 30) printf("Data valida\n"); else printf("Data invalida\n");
            break;
            case 7:
                 if(dia <= 31) printf("Data valida\n"); else printf("Data invalida\n");
            break;
            case 8:
                 if(dia <= 31) printf("Data valida\n"); else printf("Data invalida\n");
            break;
            case 9:
                 if(dia <= 30) printf("Data valida\n"); else printf("Data invalida\n");
            break;
            case 10:
                 if(dia <= 31) printf("Data valida\n"); else printf("Data invalida\n");
            break;
            case 11:
                 if(dia <= 30) printf("Data valida\n"); else printf("Data invalida\n");
            break;
            case 12:
                 if(dia <= 31) printf("Data valida\n"); else printf("Data invalida\n");
            break;

        }


    }

    return 0;
}
