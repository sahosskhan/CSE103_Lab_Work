#include <stdio.h>
int main(){
int  profit, loss, cost_price, selling_price;
printf("Enter the cost price: ");
scanf("%d", &cost_price);   
printf("Enter the selling price: ");
scanf("%d", &selling_price);
if(selling_price > cost_price){
    profit = selling_price - cost_price;
    printf("Profit: %d\n", profit);
}
else if(cost_price > selling_price){
    loss = cost_price - selling_price;
    printf("Loss: %d\n", loss);
}
else{
    printf("No profit, no loss.\n");
}
return 0;
}