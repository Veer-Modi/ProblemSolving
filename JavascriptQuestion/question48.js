var str="hello"
var arr=[]
var count=""
for(i=0;i<str.length;i++){
    arr=arr+str[i].split()
    if(arr[i]=="a" || arr[i]=="e" || arr[i]=="i" || arr[i]=="o"  || arr[i]=="u"){
        continue
    }else{
        count=count+arr[i]
    }
}
console.log(count)
