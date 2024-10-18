var ip="255.100.50.0"
var defanged=[]
for(i=0;i<ip.length;i++){
        defanged=defanged+ip[i].replace(".","[.]")
}
console.log(defanged)