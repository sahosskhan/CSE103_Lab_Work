#include <stdio.h>

int main() {
    int month, isLeap;
    printf("Enter month (1-12): ");
    scanf("%d", &month);

    switch(month) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            printf("31 days\n"); break;
        case 4: case 6: case 9: case 11:
            printf("30 days\n"); break;
        case 2:
            printf("chek leap year by 1/0: ");
            scanf("%d", &isLeap);
            if(isLeap == 1) printf("29 days\n");
            else printf("28 days\n");
            break;
        default: printf("Invalid month\n");
    }
    return 0;
}