#include <stdio.h>
#include <string.h>

int main()
{

    int tamanho, cont, soma, mesTemp, ult, temp1, temp2,i=0;
    char anoV[5];

    char dataI[10], dataF[10], temp[5];
    int diaI = 01,mesI = 01,anoI = 1960;
    int dia,mes,ano, result;
    int diaT,mesT,anoT;

    printf("Digite a data\n");
    scanf("%d %d %d",&dia,&mes,&ano);

    if(anoI>ano){
        diaT = diaI;
        diaI = dia;
        dia = diaT;

        mesT = mesI;
        mesI = mes;
        mes = mesT;

        anoT = anoI;
        anoI = ano;
        ano = anoT;
    }else if(anoI == ano && mesI>mes){
        diaT = diaI;
        diaI = dia;
        dia = diaT;

        mesT = mesI;
        mesI = mes;
        mes = mesT;
    }else if(anoI == ano && mesI==mes && diaI>dia){
        diaT = diaI;
        diaI = dia;
        dia = diaT;
    }


    if(ano <= 0 || mes <= 0 || mes > 12 || dia <= 0 ){

        printf("Data invalida\n");

    }else{



        if(ano != anoI){
            for(cont = anoI; cont < ano; cont++){

                snprintf(anoV, 5,"%d",cont);

                tamanho = sizeof(anoV) - 2;

                if( anoV[tamanho-1] == '0' &&  anoV[tamanho] == '0' ){
                    ult = 0;
                }else{
                    ult = 1;
                }

                temp1 = cont%4;
                temp2 = cont%400;
                /* se a ultimo digito = 00 e ano mod 400 ou ultimo digito n for 00 e ano mod 4*/
                if( (ult == 0 && temp2 == 0 ) || temp1 == 0) {
                    soma = soma + 366;
                }else{
                    soma = soma + 365;
                }
            }
            soma--;
        }


        for(mesTemp = 1; mesTemp < mes ; mesTemp++){

            switch (mesTemp) {
                case 1:
                    if(dia <= 31) soma = soma + 31; else printf("Data invalida\n");
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
                        soma = soma + 29;
                    }else if(dia >= 29){
                        printf("Data invalida\n");
                    }else{
                        soma = soma + 28;
                    }

                break;
                case 3:
                     if(dia <= 31) soma = soma + 31; else printf("Data invalida\n");
                break;
                case 4:
                     if(dia <= 30) soma = soma + 30; else printf("Data invalida\n");
                break;
                case 5:
                     if(dia <= 31) soma = soma + 31; else printf("Data invalida\n");
                break;
                case 6:
                     if(dia <= 30) soma = soma + 30; else printf("Data invalida\n");
                break;
                case 7:
                     if(dia <= 31) soma = soma + 31; else printf("Data invalida\n");
                break;
                case 8:
                     if(dia <= 31) soma = soma + 31; else printf("Data invalida\n");
                break;
                case 9:
                     if(dia <= 30) soma = soma + 30; else printf("Data invalida\n");
                break;
                case 10:
                     if(dia <= 31) soma = soma + 31; else printf("Data invalida\n");
                break;
                case 11:
                     if(dia <= 30) soma = soma + 30; else printf("Data invalida\n");
                break;
                case 12:
                     if(dia <= 31) soma = soma + 31; else printf("Data invalida\n");
                break;

            }
        }

    }



    result = dia+soma;


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
        printf("%d",result);
    }else if(dia >= 29){
        printf("Data invalida\n");
    }else{
        printf("%d",result);
    }






    return 0;
}
