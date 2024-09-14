#include <stdio.h>
#include <string.h>


void binaryToGray(char binary[], char gray[]) 
{
    int n = strlen(binary);

    gray[0] = binary[0];

    for (int i = 1; i < n; i++) 
    {    
        gray[i] = (binary[i - 1] == binary[i]) ? '0' : '1';
    }
    
    gray[n] = '\0';
}

int main() 
{
    char binary[100], gray[100];
    
    printf("Enter a binary number: ");
    scanf("%s", binary);

    binaryToGray(binary, gray);

    printf("Gray code equivalent: %s\n", gray);

    return 0;
}