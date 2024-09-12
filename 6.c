#include <stdio.h>

void main() 
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    if (number > 0) 
    {
        printf("The number %d is positive.\n", number);
    } 
    else 
    {
        if (number < 0) 
        {
            printf("The number %d is negative.\n", number);
        } 
        else 
        {
            printf("The number %d is zero.\n", number);
        }
    }
}