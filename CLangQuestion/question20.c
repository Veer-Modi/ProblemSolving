#include <stdio.h>
#include <string.h>

int main() {
    
    int arr[]={80,30,70,50,20};
    int i;
    int max=arr[0];
    int min=arr[0];
    int len=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<len;i++){
        if(min>arr[i]){
            min=arr[i];
        }
        if(max<arr[i]){
            max=arr[i];
        }
    }
    int diff=max-min;
    
    printf("The difference between minimum and maximum is %d",diff);

    return 0;
}
