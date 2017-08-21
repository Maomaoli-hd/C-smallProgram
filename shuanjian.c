#include <stdio.h>
#include <ctype.h>
int main(void){
    int ch;
    //int data[26]={2,2,2,3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,7,8,8,8,9,9,9,9};
    char data[26]="22233344455566677778889999";
    while((ch=getchar())!=EOF){
        if(isalpha){
            ch=tolower(ch);
            //printf("%d",data[ch-'a']);
            printf("%c",data[ch-'a']);
        }else{
            printf("%c",ch);
        }
    }
    return 0;
}
