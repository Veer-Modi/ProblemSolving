var arr=[1,2,2,3,4,4,5]
var j=0
var arr2=[]

for(i=1;i<arr.length;i++){
    if(arr[i]!=arr[j]){
        j++
        arr[j]=arr[i]
    }
}
for(i=0;i<j+1;i++){
    arr2=arr2+arr[i]
}
console.log(arr2)