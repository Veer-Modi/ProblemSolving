#include <stdio.h>
#include <string.h>

int main() {
    
    char str[]="hel l o";
    int len=strlen(str);
    int i,count=0;
    
    for(i=0;i<=len;i++){
        if(str[i]!=' '){
            str[count++]=str[i];
        }
    }
    printf("%s",str);

    return 0;
}
