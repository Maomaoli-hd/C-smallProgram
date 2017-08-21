#include <stdio.h>

int main(void){
    int n,m=0,a,b,c;
    for(n=100;n<1000;n++){
        a=n%10;
        b=(n/10)%10;
        c=n/100;
        m=a*a*a+b*b*b+c*c*c;
        if(m==n){
           printf("%d\n",n);
        }
    }
    return 0;
}
