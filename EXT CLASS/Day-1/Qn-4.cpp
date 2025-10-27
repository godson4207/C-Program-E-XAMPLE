
#include <stdio.h>
int main() {
    int rollNo;
    char name[50];

    printf("Enter your Roll Number: ");
    scanf("%d", &rollNo);
    printf("Enter your Name: ");
    scanf("%s", name);
    printf("Roll No: %d, Name: %s\n", rollNo, name);
    return 0;
}

