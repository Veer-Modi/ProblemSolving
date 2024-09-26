#include <stdio.h>

int main() {
    
    int arr[]={1,2,2,3,4,4,5};
int len=sizeof(arr)/sizeof(arr[0]);
int i,j;

for(i=1;i<=len;i++){
    if(arr[i]!=arr[j]){
        j++;
        arr[j]=arr[i];
    }
}

for(i=0;i<j;i++){
    printf("%d",arr[i]);
}

    return 0;
}
