var str="hello"
var count=0

for(i=0;i<str.length;i++){
        if(str[i]==str[i+1]){
            count=i
            break
        }
}

if(count){
console.log(count)
}else{
    console.log(-1)
}