#include <stdio.h>

void main() {
    int n, a = 0, b = 1, next;

    printf("Enter the number of terms you want in the Fibonacci series: ");
    scanf("%d", &n);

    if (n <= 0) 
    {
        printf("Please enter a positive integer.\n");
    } 
    else
    {
        if (n == 1) 
        {
        printf("Fibonacci Series:\n%d\n", a);
        }
        else 
        {
            printf("Fibonacci Series:\n%d %d ", a, b);
        
            for (int i = 2; i < n; i++) 
            {
                next = a + b;
                printf("%d ", next);
                a = b;
                b = next;
            }
            printf("\n");
        }
    }
}