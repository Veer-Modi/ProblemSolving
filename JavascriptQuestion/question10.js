var arr=[1,2,3,4,5]
var even=0,odd=0

for(i=0;i<arr.length;i++){
    if(arr[i]%2==0){
        even++
    }else{
        odd++
    }
}

console.log("Even:",even)
console.log("Odd:",odd)