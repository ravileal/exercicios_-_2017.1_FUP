#include <stdio.h>
#include <string.h>

int main(){

    char nome1[10], nome2[10], nome3[10], temp[10];

    int result;


    scanf("%s",&nome1);
    scanf("%s",&nome2);
    scanf("%s",&nome3);

    /*///////////////////////////////////////////*/


    result = strcoll(nome1, nome2);

    if(result >= 1){
        strcpy(temp,nome2);

        strcpy(nome2,nome1);

        strcpy(nome1,temp);
    }

    /*///////////////////////////////////////////*/


    result = strcoll(nome2, nome3);

    if(result >= 1){
        strcpy(temp,nome3);

        strcpy(nome3,nome2);

        strcpy(nome2,temp);
    }

    /*///////////////////////////////////////////*/


    result = strcoll(nome1, nome2);

    if(result >= 1){
        strcpy(temp,nome2);

        strcpy(nome2,nome1);

        strcpy(nome1,temp);
    }

    /*///////////////////////////////////////////*/

    printf("\n%s \n%s \n%s",nome1,nome2,nome3);


    return 0;
}
