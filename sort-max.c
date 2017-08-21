#include <stdio.h>
int main(void){
    int a[5]={1,23,10,89,35};
    int i,j;
    for(i=0;i<4;i++){
       for(j=0;j<4-i;j++){
          if(a[i]>a[i+1]){
            int p=a[j];
             a[j]=a[i];
             a[i]=p;
          }
       }
    }
    printf("%d",a[i]);
    putchar('\n');

    return 0;
}
