#include <stdio.h>
#include <string.h>

int main() {
    
    int arr[]={1, -2, 3, -4, 5, -6};
    int len=sizeof(arr)/sizeof(arr[0]);
    int positive=0,negative=0,i;
    
    for(i=0;i<len;i++){
        if(arr[i]<0){
            negative++;
        }
        if(arr[i]>0){
            positive++;
        }
    }

        printf("Positive numbers: %d\n",positive);
        printf("Negative numbers: %d",negative);

    
    return 0;
}
