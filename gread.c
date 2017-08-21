#include<stdio.h>

int main(){

    int ch;
    while(1)
    {
        printf("Enter numerical grade:");
        scanf("%d",&ch);
        if (ch == 127)
        {
            break;
        }
        printf("letter grede:");
        if( ch>=0&&ch<=100){
            ch=(int)ch/10;
            switch(ch){
            case 10: putchar('A'); putchar('\n');break;
            case 9: putchar('A'); putchar('\n');break;
            case 8: putchar('B'); putchar('\n');break;
            case 7: putchar('C'); putchar('\n');break;
            case 6: putchar('D'); putchar('\n');break;
            case 5: case 4: case 3: case 2: case 1: case 0:
                    putchar('F'); putchar('\n');break;
            }
        }else{
            printf("Wrong!\n");        
        }
    }    
    return 0;
}




