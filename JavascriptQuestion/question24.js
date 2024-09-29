var str="hello"
var count=0
var split=str.split("")
for(i=0;i<split.length;i++){
    if(split[i]!=" "){
        split[count++]=split[i]
    }
}
split=split.join("")
console.log(split)