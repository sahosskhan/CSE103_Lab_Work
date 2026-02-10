#include <stdio.h>
int main() {
    int units;
    float bill;
    printf("Enter units: ");
    scanf("%d", &units);

    int range = (units <= 100) ? 1 : (units <= 300) ? 2 : 3; 

    switch(range) {
        case 1: 
            bill = units * 5; break;
        case 2: 
            bill = (100 * 5) + (units - 100) * 7; break; 
        case 3: 
            bill = (100 * 5) + (200 * 7) + (units - 300) * 10; break; 
    }
    printf("Total Bill: %.2f TK", bill); 
    return 0;
}