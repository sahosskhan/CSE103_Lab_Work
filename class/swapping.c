#include <stdio.h>
int main(){
    // ami akta variable niyasi jeta 5 er value rakhbe
    // arekta variable niyasi jeta 10 er value rakhbe
int a = 5;
int b = 10;
printf("%d \n",a);
printf("%d \n",b);
a=a+b; //a=15
b=a-b; //b=15-10=5
a=a-b; //a=15-5=10
printf("%d \n",a);
//printf("%d \n",b);
    return 0;
}
// way 2
/*
include <stdio.h>
int main(){
int a = 5;
int b = 10;
printf("%d \n",a);
printf("%d \n",b);
int temp;
temp = a; //temp=5
a = b;    //a=10  
b = temp; //b=5
printf("%d \n",a);            
printf("%d \n",b);
   return 0;                 

}
*/