#include <stdio.h>

int main(void){
    int n,k=0;
    int j=1;
    for(n=10000;n<100000;n++){
        int a=n%10;
        int b=n/10%10;
        //c=n/100%10;
        int d=n/1000%10;
        int e=n/10000;
        
        if(a==e&&b==d){
            printf("%-7d",n);
            if(j%10==0){
                 putchar('\n');
            }
            j++;
        }
    
    }

    return 0;
}
