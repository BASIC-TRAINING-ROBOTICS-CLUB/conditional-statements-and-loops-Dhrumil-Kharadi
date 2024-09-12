#include <stdio.h>

void main() {
    int a, b, c;

    printf("Enter the value of a: ");
    scanf("%d", &a);

    printf("Enter the value of b: ");
    scanf("%d", &b);

    printf("Enter the value of c: ");
    scanf("%d", &c);

    if (a >= b) 
    {
        if (a >= c)
        {
            printf("The maximum value is %d.\n", a);
        } 
        else 
        {
            printf("The maximum value is %d.\n", c);
        }
    } 
    else 
    {
        if (b >= c) 
        {
            printf("The maximum value is %d.\n", b);
        } 
        else 
        {
            printf("The maximum value is %d.\n", c);
        }
    }
}