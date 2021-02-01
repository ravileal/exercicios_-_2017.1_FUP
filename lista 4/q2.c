#include <stdio.h>

int mediaIntervalo(int n1, int n2);
int totalPares(int n1, int n2);

int main(){

    int n1,n2;

    scanf("%d %d", &n1, &n2);

    if(n1 < n2){
        printf("\n%d", mediaIntervalo(n1,n2));
    }else if( n1 > n2){
        printf("\n%d", totalPares(n1,n2));
    }else{
        printf("\nMensagem: Numenos iguais!");
    }

    return 0;
}

int mediaIntervalo(int n1, int n2){

    int i=0,t=0;

    for(; n1<=n2; n1++){
        t+= n1;
        i++;
    }

    t/=i;

    return t;
}

int totalPares(int n1, int n2){

    int t=0;

    for(; n2<=n1; n2++){
        if(n2%2==0){
            t++;
        }
    }

    return t;
}
