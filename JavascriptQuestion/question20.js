var arr=[80,20,30,40,50]
var max=arr[0]
var min=arr[0]

for(i=0;i<arr.length;i++){
    if(min>arr[i]){
        min=arr[i]
    }
    if(max<arr[i]){
        max=arr[i]
    }
}
var diff=max-min

console.log("The difference between maximum and minimum is",diff)