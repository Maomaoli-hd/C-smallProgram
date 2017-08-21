#include <stdio.h>

int main(void){
    long int n;
    int i=0;
    printf("x=");
    scanf("%ld",&n);
    while(n!=0){
        n=n/10;
        i++;
    }
    printf("%d",i);
    return 0;
}

