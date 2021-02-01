#include <stdio.h>
#include <string.h>

int main()
{

    char dataI[10], dataF[10], temp[5];
    int diaI,mesI,anoI;
    int diaF,mesF,anoF, result;
    int diaT,mesT,anoT;

    printf("Digite a primeira data\n");
    scanf("%d %d %d",&diaI,&mesI,&anoI);
    printf("Digite a segunta data\n");
    scanf("%d %d %d",&diaF,&mesF,&anoF);

    if(anoI>anoF){
        diaT = diaI;
        diaI = diaF;
        diaF = diaT;

        mesT = mesI;
        mesI = mesF;
        mesF = mesT;

        anoT = anoI;
        anoI = anoF;
        anoF = anoT;
    }else if(anoI == anoF && mesI>mesF){
        diaT = diaI;
        diaI = diaF;
        diaF = diaT;

        mesT = mesI;
        mesI = mesF;
        mesF = mesT;
    }else if(anoI == anoF && mesI==mesF && diaI>diaF){
        diaT = diaI;
        diaI = diaF;
        diaF = diaT;
    }

    if(anoF == anoI){

        result = 30-diaI+((mesF-mesI)-1)*30+diaF;

    }else{

        anoI++;

        result = (30-diaI+((12-mesI)*30)) + (diaF+((mesF-1)*30))+((anoF-anoI)*360);

    }


    printf("%d",result);

    return 0;
}
