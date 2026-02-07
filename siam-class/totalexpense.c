#include <stdio.h>
int main(){
    float qyt, rate, dis = 0.0,tot;
    printf("Enter quantity: ");
    scanf("%f", &qyt);
    printf("Enter rate: ");
    scanf("%f", &rate);
    if(qyt > 1000){
        dis = 10.0;
    }   
    tot = qyt*rate - qyt*rate*dis/100.00;
    printf("Total expense: %.2f\n", tot);
   
    return 0;
}