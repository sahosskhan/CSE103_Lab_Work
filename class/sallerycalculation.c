#include <stdio.h>
int main(){
float basic,hra,da,gros; 
printf("Enter the basic salary: ");
scanf("%f",&basic); 
if(basic<=10000){
hra=0.2*basic;
da=0.8*basic;
}
else if(basic<=20000){  
hra=0.25*basic;
da=0.9*basic;
}
else{       
hra=0.3*basic;
da=0.95*basic;
}
gros=basic+hra+da;
printf("Gross Salary = %.2f\n",gros);               
return 0;
}

