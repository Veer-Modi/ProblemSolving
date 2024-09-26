#include <stdio.h>
#include <string.h>

int main() {
    
    int arr[]={10, 20, 30, 40, 50},i;
    int len=sizeof(arr)/sizeof(arr[0]);
    for(i=2;i<len;i=i+2){
        printf("%d",arr[i]);
    }
    
    return 0;
}
