var arr=[5,7,7,8,8,10]
var target=8
var count=[]
for(i=0;i<arr.length;i++){
    if(arr[i]===target){
        count=count+i
    }
}
console.log(count)