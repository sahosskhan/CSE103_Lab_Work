#include <stdio.h>
int main (){
int n,i,sum=0;
scanf("%d",&n);
for(i=1;i<=n;i=i+2){
    sum=sum+i;
}
printf("result: %d",sum);
}

//12 no
// #include <stdio.h>
// int main (){
// int n,i,sum=1;
// scanf("%d",&n);
// for(i=4;i<=n;i=i+3){
//     sum=sum+i;
// }
// printf("result: %d",sum);
// }
//15 n0
#include <stdio.h>
int main (){
int n,i,sum=0;
scanf("%d",&n);
for(i=1;i<=n;i=i+2){
    sum=sum+i*i;
}
printf("result: %d",sum);
}