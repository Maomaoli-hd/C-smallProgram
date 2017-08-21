#include <stdio.h>
#include <string.h>
int main(void){
    char data[50];
    char *head;
    char *tile;
    char result[50];
    char result2[50];
    char buf[100];

    fgets(data,50,stdin);
    
    if(head=strstr(data,"<h1>")){
        //head=strstr(data,"<h1>");            //´ÏÃ÷
        head+=strlen("<h1>");
        if((strstr(head,"</h1>"))!=0){
            tile=strstr(head,"</h1>");         //±¿
            tile[0]='\0';    
            strcpy(result, head);
           // puts(result);
        }else{
            printf("wrong2");
        }
    }else{
    printf("wrong1");
    }
    head=tile+strlen("</h1>");
    if(head=strstr(head,"<h1>")){
        head+=strlen("<h1>");
        if(tile=strstr(head,"</h1>")){   
            tile[0]='\0';
            strcpy(result2, head);
            sprintf(buf,"result1~%s\n result2~%s\n",result,result2);
            puts(buf);
        }else{
            printf("wrong2");
        }
    }else{
        printf("wrong1");
    }

    return 0;
} 
