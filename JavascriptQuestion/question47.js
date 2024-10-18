var str=[10, 5, 3, 4, 3, 5, 6]
var count=0

for(i=0;i<str.length;i++){
          for(j=0;j<i;j++){
            if(str[i]==str[j]){
            count=str[i]
            break
        }
          }
}

if(count){
console.log(count)
}else{
    console.log(-1)
}