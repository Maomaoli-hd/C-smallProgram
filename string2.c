#include <stdio.h>

int main(void){
    char data[20]="hello";
    char *p;
    p=data;  //data首地址给了p，p 可以当一个指针;
                                     //也可以作为它指向的一个字符或字符串
    putchar(p[1]);
    printf("\n%p\n",p);

    p=p+2;
    putchar(p[0]);
    printf("\n%p\n",p);
    puts(p);   putchar('\n');

    p=data+3;
    puts(p);


    return 0;
}

