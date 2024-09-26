#include <stdio.h>
#include <string.h>

int main() {
    
    int arr[]={3,5,8,1,7};
    int len=sizeof(arr)/sizeof(arr[0]);
    int count=0,i;
    
    for(i=0;i<len;i++){
        if(arr[i]<0){
            count++;
        }
    }
    
    if(count==0){
        printf("Array contains only positive numbers.");
    }else{
        printf("Array not contains positive numbers");
    }
    
    return 0;
}
