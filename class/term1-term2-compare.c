#include <stdio.h>
int main(){
int term1, term2;
printf("Enter two terms: ");    
scanf("%d %d", &term1, &term2);
if(term1 > term2){
    printf("Term 1 is greater than Term 2\n");
}
else if(term1 < term2){
    printf("Term 2 is greater than Term 1\n");
}
else{
    printf("Both terms are equal\n");
}

    return 0;
}