#include <stdio.h>
int main(){
    int base, exponent, result = 1;
    printf("Enter base: "); 
    scanf("%d", &base);
    printf("Enter exponent: ");
    scanf("%d", &exponent);
    int i = 1;
    while(i <= exponent){
        result = result * base;
        i++; //i = i + 1; //i+=1;
    }
    printf("Result: %d\n", result);
    return 0;
}