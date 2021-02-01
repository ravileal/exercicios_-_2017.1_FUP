#include <stdio.h>
int converte(int c);

int main (){

    int ci=50, cf=65;
        printf(" Celsius ------ Fahrenheit");

    for(; ci<=cf; ci++)
        printf("\n   %d -------------  %d", ci, converte(ci) );

    return 0;
}

int converte(int c){
    return c*1.8+32;
}
