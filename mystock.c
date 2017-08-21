#include <stdio.h>
#include <string.h>

int flag=0;
char data[1024*1024];
int main(void){
    while(fgets(data,1024*1024,stdin)){
        char*p1;
        char*p2;
        
        if(p1=strstr(data,"<title>")){
            p1+=strlen("<title>");
            if(p2=strchr(p1,'(')){
                p2[0]='\0';
                printf("%s|",p1);
            }else{
            printf("wrong");
            }
        }

        if(p1=strstr(data,"mgjzc")){
             p1+=strlen("mgjzc\">");
             if(p2=strchr(p1,'<')){
                p2[0]='\0';
                printf("%s",p1);
             }else{
             }
        }
      
    }    
    putchar('\n');
    return 0;
}
