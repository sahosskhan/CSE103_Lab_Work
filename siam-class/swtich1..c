#include <stdio.h>
int main(){
    float n1, n2;
    char op; //+ / - * %
    printf("Enter Op n1 n2: ");
    scanf(" %c %f %f", &op, &n1, &n2);
    switch (op)
    {
    case '+' : printf("Result = %.2f",n1+n2); break;
    case '-' : printf("Result = %.2f",n1-n2); break;
    case '*' : printf("Result = %.2f",n1*n2); break;
    
    case '/' : 
    if(n2 !=0) printf("Result = %.2f",n1/n2); 
    else printf("qutiont by zero");
    break;

    case '%' : 
    if(n2 !=0) printf("Result = %d",(int)n1 %(int) n2); 
    else printf("modlus by zero");
    break;

    default: printf("Invaild Operator");
    }
}