#include <stdio.h>
int main() {
    int choice;
    float temp;
    printf("1. C to F\n2. F to C\n3. C to K\nEnter choice: ");
    scanf("%d", &choice);
    printf("Enter temperature: ");
    scanf("%f", &temp);

    switch(choice) {
        case 1: printf("Fahrenheit: %.2f", (temp * 9/5) + 32); break;
        case 2: printf("Celsius: %.2f", (temp - 32) * 5/9); break; 
        case 3: printf("Kelvin: %.2f", temp + 273.15); break;
        default: printf("Invalid Input"); 
    }
    return 0;
}