#include<stdio.h>
#include<ctype.h>

int main(void){
    int ch;
    int s=0;
    while( (ch=getchar())!=EOF){
        printf("%d",s);
        switch(s){
        case 0:
            if(ch==' '){
                putchar(ch);
                s=1;
            }else if('"') {
                putchar(ch);
                s=2;
            }else{
                s=0;
                putchar(ch);
            }
            break;
        case 1:
            if(ch==' '){
                s=1;
            }
            else if('"'){ 
                putchar(ch);
                s=0;
            }else{
                s=2;
                putchar(ch);
            }
            break;
        case 2:
            if(ch=='"'){
                putchar(ch);
                s=0;
            }else{
                putchar(ch);
                s=2;
            }
        
            break;
        }
    
    }
    return 0;
}
