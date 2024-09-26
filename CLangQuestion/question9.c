#include <stdio.h>
#include <string.h>

int main() {
    
    int arr[]={4,1,5,2,3};
    int len=sizeof(arr)/sizeof(arr[0]);
    int i=0,j,count;
    
    while(i<len){
        j=i+1;
        while(j<len){
            if(arr[j]<arr[i]){
            count=arr[i];
            arr[i]=arr[j];
            arr[j]=count;
            }
            j++;
        }
        i++;
    }
    for (i=0;i<len;i++){
        printf("%d",arr[i]);
    }
    
    return 0;
}
