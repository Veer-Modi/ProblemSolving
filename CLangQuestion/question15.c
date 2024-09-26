#include <stdio.h>
#include <string.h>

int main() {
    
    int arr[]={1,2,3,4,5};
    int len=sizeof(arr)/sizeof(arr[0]);
    int i,j;
    
    for(i=len;i>0;i--){
        arr[i]=arr[i-1];
    }
    for(j=1;j<len;j++){
        printf("%d",arr[j]);
    }
    return 0;
}
