#include <stdio.h>
#include <string.h>

int main() {
    
    char str[]="hello";
    char str2[]=" world";
    strcat(str,str2);
    printf("%s",str);

    return 0;
}
