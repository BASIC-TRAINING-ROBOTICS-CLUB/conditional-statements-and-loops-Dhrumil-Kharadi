#include <stdio.h>

int main() {
    int side1, side2, side3;

    printf("Enter the length of side 1: ");
    scanf("%d", &side1);

    printf("Enter the length of side 2: ");
    scanf("%d", &side2);

    printf("Enter the length of side 3: ");
    scanf("%d", &side3);

    if (side1 == side2 && side2 == side3) {
        printf("The triangle is equilateral.\n");
    } else {
        printf("The triangle is not equilateral.\n");
    }

    return 0;
}
