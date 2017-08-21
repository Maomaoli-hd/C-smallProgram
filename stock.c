#include <stdio.h>
#include <stdlib.h>

char id[10];
char wget_tpl[]="wget http://vip.stock.finance.sina.com.cn/corp/go.php/"
             "vFD_FinanceSummary/stockid/%s/displaytype/4.phtml -O %s.html -olog ";
char iconv_tpl[]="iconv %s.html -f gb18030 -t utf-8 -o %s_utf8.html";

char mystock_tpl[]="./mystock<%s_utf8.html";
char cmd[200];
int main(void){
    while(fgets(id,10,stdin)){
        id[6]='\0';
    printf("%s|",id);    
    fflush(NULL);

    sprintf(cmd,wget_tpl,id,id);
    system(cmd);
    
    sprintf(cmd,iconv_tpl,id,id);
    system(cmd);
 
    sprintf(cmd,mystock_tpl,id);
    system(cmd);

    }

    return 0;
}
