#include<stdio.h>
#include<ctype.h>

int main(void){
    int ch;
    int s=0;
    int k;
    while( (ch=getchar())!=EOF){
        switch(s){
            case 0:
                if(isdigit(ch)){
                    s=1;
                    putchar(ch);
                }else if(ch=='.'){
                    s=2;
                }else if(ch=='+'||ch=='-'){
                    k=ch;
                    s=3;
                }else{
                    s=0;
                }
                break;
            case 1:
                if(isdigit(ch)){
                    s=1;
                    putchar(ch);
                }else if(ch=='.'){
                    s=2;
                }else if(ch=='+'||ch=='-'){
                    k=ch;
                    s=3;
                }else{
                    s=0;
                }
                break;
            case 2:
                if(isdigit(ch)){
                    s=1;
                    putchar('.');
                    putchar(ch);
                }else if(ch=='+'||ch=='-'){
                    s=3;
                    k=ch;
                }else{
                    s=0;
                }
                break;
            case 3:
                if(isdigit(ch)){
                    s=1;
                    putchar(k);
                    putchar(ch);
                }else if(ch=='.'){
                    s=2;
                }else{
                    s=0;
                }
                break;
        }
    }
    return 0;
}
