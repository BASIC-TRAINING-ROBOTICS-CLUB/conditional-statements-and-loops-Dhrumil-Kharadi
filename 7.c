#include <stdio.h>

void main() {
    int year;

    printf("Enter a year: ");
    scanf("%d", &year);

    if (year > 2000) 
    {
        if ((year % 4 == 0 && year % 100 !=0) || (year % 400 == 0)) 
        {
            printf("The year %d is after 2000 and it is a leap year.\n", year);
        } 
        else 
        {
            printf("The year %d is after 2000 but it is not a leap year.\n", year);
        }
    } 
    else 
    {
        printf("The year %d is not after 2000.\n", year);
    }
}
// 100 --> 3000,5000
// 400 --> 2100,2200