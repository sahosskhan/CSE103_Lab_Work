#include <stdio.h>
int main(){
int a, b, c;
printf("Enter the three numbers: ");
scanf("%d %d %d", &a, &b, &c);
if(a >= b && a <= c || a >= c && a <= b){
    //a কি b এর থেকে বড় এবং c এর থেকে ছোট অথবা
    // a কি c এর থেকে বড় এবং b এর থেকে ছোট
    printf("%d is the median.\n", a);
} else if(b >= a && b <= c || b >= c && b <= a){
    //b কি a এর থেকে বড় এবং c এর থেকে ছোট অথবা
    // b কি c এর থেকে বড় এবং a এর থেকে ছোট
    printf("%d is the median.\n", b);
} else {
    printf("%d is the median.\n", c);
}
}