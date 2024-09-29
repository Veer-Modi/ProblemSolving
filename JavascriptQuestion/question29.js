var arr=[2,7,11,15]
var target=9

for(i=0;i<arr.length;i++){
    for(j=0;j<i;j++){
    if(arr[i]+arr[j]==target)
    console.log("Pair:",arr[i],arr[j])
    }
}
