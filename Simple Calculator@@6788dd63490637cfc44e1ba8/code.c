#include<stdio.h>

int main() {
    int a, b;
    char c;

    // Taking input
    printf("Enter two numbers and an operator: ");
    scanf("%d %d %c", &a, &b, &c);

    // Performing operations
    if (c == '+') {
        printf("%d\n", a + b);
    } else if (c == '-') {
        printf("%d\n", a - b);
    } else if (c == '*') {
        printf("%d\n", a * b);
    } else if (c == '/') {
        if (b == 0) {
            printf("Error: Division by zero is not allowed.\n");
        } else {
            printf("%d\n", a / b);
        }
    } else {
        printf("Error: Invalid operator.\n");
    }

    return 0;
}
