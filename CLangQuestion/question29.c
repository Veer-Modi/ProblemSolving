#include <stdio.h>
#include <string.h>

int main() {
    
    int arr[]={2,7,11,15};
    int len=sizeof(arr)/sizeof(arr[0]);
    int i,j;
    int target=9;
    
    for(i=0;i<len;i++){
        for(j=i+1;j<len;j++){
            if(arr[i]+arr[j]==target){
                printf("Pair: %d %d",arr[i], arr[j]);
            }
        }
    }
    
    return 0;
}
