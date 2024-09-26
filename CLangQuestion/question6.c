#include <stdio.h>
#include <string.h>

int main() {
    
    char user[]="admin";
    int password;
    char username[100];
    
    printf("Enter your username: ");
    scanf("%s",&username);
    
    printf("Enter your password: ");
    scanf("%d",&password);
    
    int same=strcmp(user,username);
    
    if(same==0 && password==1234){
        printf("Login Successful.");
    }else{
        printf("Login Failed.");
    }

    return 0;
} 
