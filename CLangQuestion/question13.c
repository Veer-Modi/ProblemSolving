#include <stdio.h>

int main() {
    
    int arr[]={1,2,3,4,5};
    int i,j,n,num,count=0;
    int len=sizeof(arr)/sizeof(arr[0]);
    printf("enter a number to in array contain: ");
    scanf("%d",&n);
    
    for(i=0;i<len;i++){
        if(arr[i]==n){
            count=1;
            break;
        }
    }
    if(count){
    printf("%d is in array.",n);
    }else{
        printf("%d is not in array.",n);
    }
        
    return 0;
}
