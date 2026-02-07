#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c;
    printf("Enter the lengths of the three sides of the triangle: ");
    scanf("%f %f %f", &a, &b, &c);
    if( pow(c,2)== pow(a,2)+pow(b,2))
        printf("The triangle is a right triangle.\n");
    else
        printf("The triangle is not a right triangle.\n");
    return 0;
}