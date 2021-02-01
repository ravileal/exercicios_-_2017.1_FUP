#include <stdio.h>

float medi(float n1, float n2);

int main(){

    float n1,n2;

    scanf("%f %f",&n1,&n2);

    printf("%.2f", medi(n1,n2) );

    return 0;
}

float medi(float n1, float n2){

    float media;

    media = (n1+n2)/2;

    return media;
}
