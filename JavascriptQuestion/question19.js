var arr=[1,2,3,4,5]
var count=0

for(i=0;i<arr.length-1;i++){
    if(arr[i]<arr[i+1]){
        count++
    }
}

if(count==arr.length-1){
    console.log("Array is in Ascending order.")
}else{
    console.log("Array is not in ascending order.")
}