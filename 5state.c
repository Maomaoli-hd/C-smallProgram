#include <stdio.h>

int main(void){
    int ch;
    int s;
    while( (ch=getchar())!=EOF){
        switch(s){
           case 0:
               if(ch=='/'){
                  s=1;
               }else{
                  s=0;
                  putchar(ch);
               }
               break;
           case 1:
               if(ch=='/'){
                  s=2;
               }else if(ch=='*'){
                  s=3;
               }else{
                  s=0;
                  putchar('/');
                  putchar(ch);
               }
               break;
           case 2:
               if(ch=='\n'){
                  s=0;
                  putchar(ch);
               }else{
                  s=2;
               }
               break;
           case 3:
               if(ch=='*'){
                  s=4;
               }else{
                  s=3;
               }
               break;
           case 4:
               if(ch=='*'){
                  s=4;
               }else{
                  s=0;
               }
        }
    }
    return 0;
}
