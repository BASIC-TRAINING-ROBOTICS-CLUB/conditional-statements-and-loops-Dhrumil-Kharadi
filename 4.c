#include <stdio.h>

void main() {
    int x, y;

    printf("Enter the value of x: ");
    scanf("%d", &x);

    printf("Enter the value of y: ");
    scanf("%d", &y);

    if (x > 0 && y > 0) {
        printf("The point (%d, %d) is in the First Quadrant.\n", x, y);
    } 
    else 
    {
        if (x < 0 && y > 0) 
        {
            printf("The point (%d, %d) is in the Second Quadrant.\n", x, y);
        } 
        else 
        {
            if (x < 0 && y < 0) 
            {
                printf("The point (%d, %d) is in the Third Quadrant.\n", x, y);
            } 
            else 
            {
                if (x > 0 && y < 0) 
                {
                    printf("The point (%d, %d) is in the Fourth Quadrant.\n", x, y);
                } 
                else 
                {
                    if (x == 0 && y != 0) 
                    {
                        printf("The point (%d, %d) lies on the Y-axis.\n", x, y);
                    } 
                    else 
                    {
                        if (x != 0 && y == 0) 
                        {
                            printf("The point (%d, %d) lies on the X-axis.\n", x, y);
                        } 
                        else 
                        {
                            printf("The point (%d, %d) is at the origin.\n", x, y);
                        }
                    }
                }
            }
        }
    }
}