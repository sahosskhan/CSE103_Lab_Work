#include <stdio.h>
int main() {
   int d, m, y;
    printf("Enter date (dd mm yyyy): ");
    scanf("%d %d %d", &d, &m, &y);
    if(y<1 || m<1 ||m>12 ||d<1 || d>31){
        prinf("Invalid date");
    }
    else{
        if(m=2){
            if((y%4==0 && y%100!=0) || (y%400==0)){
                if(d>29){
                    printf("Invalid date");
                }
                else{
                    printf("Valid date");
                }
            }
            else{
                if(d>28){
                    printf("Invalid date");
                }
                else{
                    printf("Valid date");
                }
            }
        }
        else if(m==4 || m==6 || m==9 || m==11){
            if(d>30){
                printf("Invalid date");
            }
            else{
                printf("Valid date");
            }
        }
        else{
            printf("Valid date");
        }
    }