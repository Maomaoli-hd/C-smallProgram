#include <stdio.h>

int main(void){
    int x,y=0;
    int i,j=1;
    for(x=1;x<11;x++){
        for(i=1;i<=x;i++){
            j=j*i;
        }
        y=y+j;
        j=1;
    }
        printf("1!+2!+3!+......10!=%d",y);
    return 0;
}
