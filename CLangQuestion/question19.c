#include <stdio.h>
#include <string.h>

int main() {
    
    int arr[]={1,2,3,4,5};
    int i,count=0;
    int len=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<len-1;i++){
        if(arr[i]<arr[i+1]){
            count++;
        }
    }
    if(count==len-1){
        printf("Array is in ascending order.");
    }else{
        printf("Array is not in ascending order.");
    }

    return 0;
}
