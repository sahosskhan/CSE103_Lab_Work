#include <stdio.h>
int main (){
int n,i,j;
scanf("%d",&n);
if(n<1 || n>10) printf("inviald input");
else{
for(i=1;i<=n;i++){
    printf("table of %d",i);
for(j=1; j<=10;j++){
    printf("%d x %d = %d\n",i,j,i*j);
}
printf("\n");
}

}
}

