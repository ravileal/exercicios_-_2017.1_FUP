#include <stdio.h>

int meiaArvore(void);

int main(){

    meiaArvore();

    return 0;
}

int meiaArvore(void){

    int i, i2;

    for(i=1; i<=5 ; i++){
        for(i2=1; i2<=i ; i2++)
            printf("%d",i);
        printf("\n");
    }
}

