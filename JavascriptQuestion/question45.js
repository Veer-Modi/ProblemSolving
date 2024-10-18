var str="I love programming in JavaScript"
var longest=0
var word
var arr=str.split(" ")
for(i=0;i<arr.length;i++){
    if(longest<arr[i].length){
        longest=arr[i].length
        word=arr[i]
    }
}
console.log(word)