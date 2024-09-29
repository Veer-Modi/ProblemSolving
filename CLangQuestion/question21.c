// Online C compiler to run C program online
#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    
    char str[]="hello";
    int len=strlen(str);
    char str2;
    char up;
    int i,j;
    
    for(i=0;i<len;i++){
        str[i]=toupper(str[i]);
    }
    for(i=0;i<len;i++){
    printf("%c",str[i]);
        
    }

    return 0;
}
