#include <stdio.h>

int main() 
{
    int x, y, z;

    printf("Enter the length of side x: ");
    scanf("%d", &x);

    printf("Enter the length of side y: ");
    scanf("%d", &y);

    printf("Enter the length of side z: ");
    scanf("%d", &z);

    if ((x * x == y * y + z * z) ||
        (y * y == x * x + z * z) ||
        (z * z == x * x + y * y)) {
        printf("The triangle is a right-angled triangle.\n");
    } else {
        printf("The triangle is not a right-angled triangle.\n");
    }

    return 0;
}
