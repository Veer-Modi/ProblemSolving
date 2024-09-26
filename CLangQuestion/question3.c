#include <stdio.h>

int main() {
    
    int side1,side2,side3;
    printf("Enter a side1: ");
    scanf("%d",&side1);
    
    printf("Enter a side2: ");
    scanf("%d",&side2);
    
    printf("Enter a side3: ");
    scanf("%d",&side3);
    
    if(side1==side2 && side2==side3){
    printf("The triangle is a equilateral triangle.");
}else if(side1==side2 || side2==side3 || side3==side1){
    printf("The triangle is a isosceles triangle.");
}else{
    printf("the triangle is a scalene triangle.");
}

    return 0;
}
