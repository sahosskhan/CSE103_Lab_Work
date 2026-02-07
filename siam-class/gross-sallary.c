#include <stdio.h>
int main(){
    float basicSalary, grossSalary,ha,ma;
    printf("Enter basic salary: ");
    scanf("%f", &basicSalary);
    if(basicSalary <3000){
      ha = 0.2*basicSalary;
        ma = 0.1*basicSalary;
    }else{
        ha = 0.25*basicSalary;  
        ma = 0.15*basicSalary;  
    }
    grossSalary = basicSalary + ha + ma;
    printf("Gross Salary: %.2f\n", grossSalary);
    return 0;
}
