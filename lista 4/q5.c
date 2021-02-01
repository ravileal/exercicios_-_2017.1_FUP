#include <stdio.h>

void maisTocadas();

int main(){

    maisTocadas();

    return 0;
}

void maisTocadas(){

    int i, n;

    scanf("%d", &n);

    int x[n];


    for(i=0; i<n ; i++){

        scanf("%d",&x[i]);

        if(x[i] > x[0])
            x[0]=x[i];
    }

    printf("\n%d\n",x[0]);

}
