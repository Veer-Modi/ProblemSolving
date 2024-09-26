var arr=[1,2,3,4,5]
var count=0
var n=parseInt(prompt("Enter a number: "))

for(i=0;i<arr.length;i++){
    if(arr[i]==n){
        count=1
        break;
    }
}
if(count){
    console.log(n,"is in array.")
}else{
    console.log(n,"is not in array.")
}