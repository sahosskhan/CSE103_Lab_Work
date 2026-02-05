#include <stdio.h>

int main() {
    int n, i;
    int a = -3;
    int d = 4;
    long f = 0;
    int m;
m = a + (i * d);
    printf("Enter the number of terms (n): ");
    scanf("%d", &n);
    for(i = a; i <=n; i=i+d) {
        f += m;
    }

    printf("The value of F for %d terms is: %ld\n", n,f);

    return 0;
}