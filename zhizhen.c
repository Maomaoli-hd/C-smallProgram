#include <stdio.h>

int main(void){
    char *p1="Hello";
    int  *p2=(int*)p1;
    short *p3=(short*)p1;
    double *p4=(double*)p1;
    printf("p1~%p:",p1);
    printf("p1~%s",p1);    //����%s�����p1ָ����ַ������ݣ�������������ݱ�����*p
    printf("p1~%c",*p1);
    printf("p1~%d",*p2);   //����ĸ��ֽ�
    printf("p1~%d",*p3);   //��������ֽ�
    printf("p1~%e",*p4);   //���    �ֽ�
   
    return 0;
}
