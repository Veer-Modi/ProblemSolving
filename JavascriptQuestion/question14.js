var arr=[1,2,3,4]
var arr2=[]
for(i=arr.length;i>0;i--){
    arr2[i]=arr[i-1]
}
arr2[0]=0
console.log(arr2)