#include <stdio.h>
#include <string.h>

int main() {
    
    char str[]="hello";
    int len=strlen(str);
    char arr[100],i;
    for(i=0;i<len;i++){
        arr[i]=str[i];
        printf("%c,",arr[i]);
    }
    

    return 0;
}
