

#include <stdio.h>
int main(){
int number;
printf("Enter a three-digit number: ");
scanf("%d", &number);
if (number >= 100 && number <= 999) {
    printf("The number is a three-digit number.\n");
} else {
    printf("The number is not a three-digit number.\n");
}
}