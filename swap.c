#include <stdio.h>

void swap(int *p,int *q){
    int *w=p;
    p=q;
    w=q;

}
int main(void){
    int i=10,k=20;
    int *p=&k;
    int *q=&i;


    swap(p,q);
    printf("%d",*p);
    printf("%d",*q);
    return 0;
}
