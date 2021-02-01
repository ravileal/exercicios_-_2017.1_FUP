#include <stdio.h>

int main(){

    int r, c=0, ra;

    printf("digite o an ");
    scanf("%d",&r);
    printf("digite a razao ");
    scanf("%d",&ra);

    while(c < r){
        c = c+ra;
        printf("%d\n",c);
    }

return 0;
}
