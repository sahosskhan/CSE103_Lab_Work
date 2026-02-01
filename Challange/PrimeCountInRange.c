#include <stdio.h>
int main(){
int n,i,j,count=0;
printf("Enter a positive integer: ");
scanf("%d",&n);

for(i=2;i<=n;i++){
    int Flag=1;
    for(j=2;j<=i/2;j++){  //j<=i/2 alternative to j*j<=i(more efficiant), j<=sqrt(i)
        if(i%j==0){
            Flag=0;
            break;
        }
    }
    if(Flag==1){
        printf("%d ",i);
        count++;
    }
}
printf("\nTotal prime numbers in range 1 to %d is %d\n",n,count);



}