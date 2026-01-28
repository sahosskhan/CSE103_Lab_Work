// Question 2: Electricity Bill Calculation with Penalty
// Write a C program that calculates the monthly electricity bill based on the number of units consumed and payment delay days.

// Billing Rules:
// First 100 units → 5 TK per unit

// Next 100 units → 7 TK per unit

// Units above 200 → 10 TK per unit

// If the payment is delayed by more than 10 days, add a 10% penalty to the total bill.

// If the input values are invalid (units < 0 or delay days < 0), print
// “Invalid Input”

#include <stdio.h>
int main()
{
    int unit, day;
    printf("Enter using montly electricity Unit= ");
    scanf("%d", &unit);

    printf("Enter payment delay days= ");
    scanf("%d", &day);

    float sub_bill = 0.0, final_bill = 0.0;
    if (unit < 0 || day < 0)
    {
        printf("Invalid Input\n");
        return 0;
    }
    else
    {
        if (unit <= 100)
        {
            sub_bill = unit * 5.0;
        }
        else if (unit > 100 && unit <= 200)
        {
            sub_bill = 100 * 5.0 + (unit - 100) * 7.0;
        }
        else
        {
            sub_bill = 100 * 5.0 + 100 * 7.0 + (unit - 200) * 10.0;
        }

        if (day > 10)
        {
            final_bill = sub_bill + (sub_bill * 0.1);
        }
        else
        {
            final_bill = sub_bill;
        }

        printf("Total Electricity Bill: %.2f TK\n", final_bill);
    }

    return 0;
}

/// wrong logic
// include<stdio.h>

//     int main()
// {

//     int unit, day;

//     printf("Enter using montly electricity Unit= ");

//     scanf("%d", &unit);

//     printf("Enter payment delay days= ");

//     scanf("%d", &day);

//     float sub_bill, final_bill;

//     if (unit > 0 || day > 0)
//     {
//         if (unit <= 100)
//         {
//             sub_bill = unit * 5;
//         }
//         else if (unit > 100 && unit < 200)
//         {
//             sub_bill = unit * 7;
//         }
//         else if (unit >= 200)
//         {
//             sub_bill = unit * 10;
//         }
//     }

//     else
//         printf("Invalid Input ");

//     if (day > 10)
//     {
//         final_bill = sub_bill + sub_bill * 0.1;
//         printf(" monthly electricity bill = %.4f", final_bill);
//     }
//     else
//     {
//         final_bill = sub_bill;
//         printf(" monthly electricity bill = %.4f BDT", final_bill);
//     }

//     return 0;