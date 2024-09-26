#include <stdio.h>

int main() {
    
    int arr[]={1,2,3,4};
    int len=sizeof(arr)/sizeof(arr[0]);
    int i,j;
    
    for(i=len;i>0;i--){
        arr[i]=arr[i-1];
    }
    arr[0]=0;
    for(j=0;j<len+1;j++){
        printf("%d",arr[j]);
    }
        
    return 0;
}
