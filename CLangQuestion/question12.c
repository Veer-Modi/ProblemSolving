#include <stdio.h>

int main() {
    
    int i,arr[6]={1,2,3,4,5};
    int len=sizeof(arr)/sizeof(arr[0]);
    arr[5]=6;
    for(i=0;i<len;i++){
    printf("%d",arr[i]);
    }

    return 0;
}
