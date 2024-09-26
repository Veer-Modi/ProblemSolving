#include <stdio.h>
#include <string.h>

int main() {
    
    int arr[]={5,5,5,5,5},i,sum=0,avg;
    int len=sizeof(arr)/sizeof(arr[0]);
    for(i=0;i<len;i++){
        sum+=arr[i];
    }
    avg=sum/len;
    printf("%d is an average of an array.",avg);

    return 0;
}
