var arr=[1, -2, 3, -4, 5, -6]
var positive=0,negative=0

for(i=0;i<arr.length;i++){
    if(arr[i]<0){
        negative++
    }
    if(arr[i]>0){
        positive++
    }
}

    console.log("Positive numbers:",positive)
    console.log("Negative numbers:",negative)
