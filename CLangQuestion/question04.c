#include <stdio.h>
#include <ctype.h>

int main() {
    
    char ch;
    printf("Enter a single character: ");
    scanf("%c",&ch);
   char cha=tolower(ch);
   
   switch (cha) {
    case 'a' :
        case 'e':
            case 'i':
                case 'u':
                    printf("Given character is vowel.");
                    break;
                    default:
                    printf("Given character is a consonent.");
}

    return 0;
}
