#include <stdio.h>
int main(){
int angle1,angle2,angle3;
    printf("Enter the three angles of the triangle: ");
    scanf("%d %d %d", &angle1, &angle2, &angle3);
    if (angle1 ==90 || angle2 == 90 || angle3 == 90) {
        printf("The triangle is a right triangle.\n");
    } else if (angle1 > 90 || angle2 > 90 || angle3 > 90) {
        printf("The triangle is an obtuse triangle.\n");
    } else {
        printf("The triangle is an acute triangle.\n");
    }
}