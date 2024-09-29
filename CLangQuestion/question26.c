#include <stdio.h>
#include <string.h>

int main() {
    
    char str[]="codinggita";
    char end='a';
    int len=strlen(str);
    
    if(len>0 && str[len-1]==end){
        printf("true");
    }else{
        printf("false");
    }

    return 0;
}
