//way 1 using switch case to check small vowel
#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    switch(ch) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
            printf("Result: Small Vowel\n");
            break;
        default:
            printf("Result: Not a small vowel\n");
    }
    return 0;
}

// way 2 using switch case to check big vowel
#include <stdio.h>

int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);

    switch(ch) {
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("Result: Big Vowel\n");
            break;
        default:
            printf("Result: Not a big vowel\n");
    }
    return 0;
}

// way 3 using switch case to check both small and big vowel
#include <stdio.h>
int main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    switch(ch) {
        case 'a': case 'e': case 'i': case 'o': case 'u':
        case 'A': case 'E': case 'I': case 'O': case 'U':
            printf("Vowel"); break;
        default: printf("Consonant");
    }
    return 0;
}
