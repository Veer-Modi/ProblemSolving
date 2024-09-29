#include <stdio.h>
#include <string.h>

int main() {
    
    char str[]="document.pdf";
    char *ext=strrchr(str,'.');
    printf("%s",ext+1);
    
    return 0;
}
