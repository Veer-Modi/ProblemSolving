var side1=parseInt(prompt("Enter a side1: "))
var side2=parseInt(prompt("Enter a side2: "))
var side3=parseInt(prompt("Enter a side3: "))

if(side1===side2 && side2===side3){
    console.log("The triangle is a equilateral triangle.")
}else if(side1==side2 || side2==side3 || side3==side1){
    console.log("The triangle is a isosceles triangle.")
}else{
    console.log("the triangle is a scalene triangle.")
}
