var arr=[3,5,9,1,7]
var count=0

for(i=0;i<arr.length;i++){
    if(arr[i]<0){
        count++
    }
}

if(count==0){
    console.log("Array contain positive numbers.")
}else{
    console.log("Array not contain positive numbers.")
}