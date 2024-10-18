var arr=[4,1,5,2,3]
var i=0,j
    while(i<arr.length){
        j=i+1;
            while(j<arr.length){
                if(arr[j]<arr[i]){
                    var arr2=arr[i]
                    arr[i]=arr[j]
                    arr[j]=arr2
                }
                j++
            }
        i++
    }
console.log(arr)