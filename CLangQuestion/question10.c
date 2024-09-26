
int main() {
    
    int arr[]={1,2,3,4,5};
    int arrlen=sizeof(arr)/sizeof(arr[0]);
    int i, even=0, odd=0;
    for(i=0;i<arrlen;i++){
        if(arr[i]%2==0){
            even++;
        }
        else{
            odd++;
    }
    }
    
    printf("Even: %d\n",even);
    printf("Odd: %d\n",odd);

    return 0;
}
