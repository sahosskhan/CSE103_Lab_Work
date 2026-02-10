#include <stdio.h>
int main(){
int number;
printf("Enter an integer: ");
scanf("%d", &number);
if (number > 0) {
    printf("Positive");
} else if (number < 0) {
    printf("Negative");
} else {
    printf("Zero");
}
    return 0;
}

// nested if else statement
// #include <stdio.h>

// int main() {
//     int number;
//     printf("Enter an integer: ");
//     scanf("%d", &number);
//     if (number >= 0) {
//         if (number == 0) {
//             printf("%d is zero.\n", number);
//         } else {
//             printf("%d is positive.\n", number);
//         }     
//     } else {
//         printf("%d is negative.\n", number);
//     }

//     return 0;
// }