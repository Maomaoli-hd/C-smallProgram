#include <stdio.h>

int main(void){
    int a,b,m,n;
    printf("Enter two integers:");
    scanf("%d %d",&a,&b);
    m=a;
    n=b;
    while(n>0){
    int k=n;
    n=m%n;
    m=k;
    }
    printf("Greatest common divisor:%d",m);
    return 0;
}
