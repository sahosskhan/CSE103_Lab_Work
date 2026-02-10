#include <stdio.h>
int main() {
    int marks;
    printf("Enter marks (0-100): ");
    scanf("%d", &marks); 

    if(marks < 0 || marks > 100) {
        printf("Invalid Input"); 
    } else {
        switch(marks / 10) {
            case 10: 
            case 9: printf("Grade: A"); break;
            case 8: printf("Grade: B"); break;
            case 7: printf("Grade: C"); break; 
            case 6: printf("Grade: D"); break;
            default: printf("Grade: F"); 
        }
    }
    return 0;
}