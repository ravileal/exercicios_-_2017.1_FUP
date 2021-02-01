#include <stdio.h>

int main(){

    float r,c,con=0;

    scanf("%f",&r);
    c=r;
    while(con<r-2){
        con++;
        c = c*(r-con);
        printf("%.0f \n",c);
    }

return 0;
}
