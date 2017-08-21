#include <stdio.h>

int main(void){
    char ch;
    char s[]={0};
    int i=0;    
    while((ch=getchar())!='\n'){
        s[i]=ch;
        i++;
    }
    
    for(;i>=0;i--){
        printf("%c",s[i]);
    }
    return 0;
}
