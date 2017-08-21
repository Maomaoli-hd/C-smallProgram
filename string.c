#include<stdio.h>
#include<string.h>
int main(void){
    char data1[20]="hello";
   /* data[5]='s';
    data[6]='k';
    puts(data1);
    puts(data1+2);
    strcat(data1,"world!");
    putchar(data1[7]);*/ 
   // sprintf("%s",data1);
    char data2[20]="world";
    char result[100];
    strcpy(result,data1);
    puts(result);

    strcat(result,data2);
    puts(result);

    char *p=strchr(result,'r');//ÔÚ×Ö·û´®ÖĞËÑË÷×Ö·û£¬µ¥ÒıºÅ£¬·µ»ØÒ»¸öÖ¸Õë£¡
    puts(p);
    p=strstr(result,"lo");//ÔÚ×Ö·û´®ÖĞËÑË÷×Ö·û´®£¬Ë«ÒıºÅ
    puts(p);
    return 0;
}
