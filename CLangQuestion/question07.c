#include <stdio.h>
#include <string.h>

int main() {
    
    char light1[]="red";
    char light2[]="yellow";
    char light3[]="green";
    char light[100];
    printf("current light: ");
    scanf("%s",&light);
    char l1=strcmp(light,light1);
    char l2=strcmp(light,light2);
    char l3=strcmp(light,light);
    
    
    if(l1==0){
        printf("Stop!");
    }else if(l2==0){
        printf("Slow Down!");
    }else if(l3==0){
        printf("Go!");
    }

    return 0;
}
