#include <stdio.h>

int main(){
 char ch;
    printf("Enter chartacter: ");
    scanf("%c", &ch);
    
    switch (ch)
    {
    case 'a': case 'e': case 'i': case 'o': case 'u':
    case 'A': case 'E': case 'I': case 'O': case 'U':
printf("Vowel");
break;

default:
((ch>='a' && ch<='z') || (ch>='A'&&ch<='Z'))?printf("Const"):printf("invalid");
// //or
// if((ch>='a' && ch<='z') || (ch>='A'&&ch<='Z'))
// printf("Const");
// else
// printf("invalid");
    }
}



//alternative
// #include <stdio.h>
// #include <ctype.h> 
// int main(){
//  char chr;
//     printf("Enter chartacter: ");
//     scanf("%c", &chr);
//     char ch = tolower(chr);
//     switch (ch)
//     {
//     case 'a': case 'e': case 'i': case 'o': case 'u':
// printf("Vowel");
// break;

// default:
// ((ch>='a' && ch<='z'))?printf("Const"):printf("invalid");
//     }
// }