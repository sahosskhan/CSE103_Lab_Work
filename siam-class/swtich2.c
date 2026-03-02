#include <stdio.h>
int main(){
 int day;
    printf("Enter day: ");
    scanf("%d", &day);
    switch (day)
    {
    case 1 : printf("Sunday"); break;
    case 2 : printf("monday"); break;
    case 3 : printf("tuesday"); break;
    case 4 : printf("wedday"); break;
    case 5 : printf("thursday"); break;
    case 6 : printf("friday"); break;
    case 7 : printf("satday"); break;
    default: printf("Invaild day");
    }
}