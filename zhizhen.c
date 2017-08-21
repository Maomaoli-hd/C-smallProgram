#include <stdio.h>

int main(void){
    char *p1="Hello";
    int  *p2=(int*)p1;
    short *p3=(short*)p1;
    double *p4=(double*)p1;
    printf("p1~%p:",p1);
    printf("p1~%s",p1);    //除了%s能输出p1指向的字符串内容，其他想输出内容必须用*p
    printf("p1~%c",*p1);
    printf("p1~%d",*p2);   //输出四个字节
    printf("p1~%d",*p3);   //输出两个字节
    printf("p1~%e",*p4);   //输出    字节
   
    return 0;
}
