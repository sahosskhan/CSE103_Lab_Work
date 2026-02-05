#include <stdio.h>
int main(){
    int a, b, c;
    printf("Enter the three sides of the triangle: ");
    scanf("%d %d %d", &a, &b, &c);
    if (a==b==c) {
        printf("The triangle is equilateral.\n");
    } else if (a==b || b==c || a==c) {
        printf("The triangle is isosceles.\n");
    } else {
        printf("The triangle is scalene.\n");
    }
}