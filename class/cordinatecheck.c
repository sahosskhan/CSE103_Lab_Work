#include <stdio.h>
int main(){
int x, y;
printf("Enter the coordinates (x y): ");
scanf("%d %d", &x, &y);
if(x > 0 && y > 0){
    printf("The point is in the first quadrant.\n");
}
else if(x < 0 && y > 0){
    printf("The point is in the second quadrant.\n");
}
else if(x < 0 && y < 0){
    printf("The point is in the third quadrant.\n");
}
else if(x > 0 && y < 0){
    printf("The point is in the fourth quadrant.\n");
}
else if(x == 0 && y == 0){
    printf("The point is at the origin.\n");
}
else if(x == 0){
    printf("The point is on the y-axis.\n");
}
else{
    printf("The point is on the x-axis.\n");
}

    return 0;
}