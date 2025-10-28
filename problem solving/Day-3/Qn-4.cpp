#include <stdio.h>

int main() {
    int N, lastDigit, exceptLast;
    printf("Enter a number: ");
    scanf("%d", &N);
    lastDigit = N % 10;
    exceptLast = N / 10;
    printf("Last digit: %d\n", lastDigit);
    printf("All digits except last digit: %d\n", exceptLast);

    return 0;
}

