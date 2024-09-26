var grade= parseInt(prompt("Enter your marks: "))

if(grade<=100 && grade>=90){
    console.log("Grade A")
}else if(grade>=80 && grade<=89){
    console.log("Grade B")
}else if(grade>=70 && grade<=79){
    console.log("Grade C")
}else if(grade>=60 && grade<=69){
    console.log("Grade D")
}else{
    console.log("Grade F")
}