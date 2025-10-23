#include <stdio.h>
int main() {
    int num, middle;
    printf("Enter a 3-digit number: ");
    scanf("%d", &num);
    middle = (num / 10) % 10;
    printf("The middle digit of %d is: %d\n", num, middle);
    return 0;
}

