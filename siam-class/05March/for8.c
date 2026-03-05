#include <stdio.h>
int main (){
int i,base,exp,res=1;
scanf("%d %d", &base,&exp);
for(i=1; i<=exp;i++){
res=res*base;
}
printf("res %d",res);
}
