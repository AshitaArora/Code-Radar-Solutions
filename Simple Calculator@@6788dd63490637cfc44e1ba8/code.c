#include<stdio.h>

int main() {
    int a, b;
    char c;

    // Taking input
   
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
            printf("Error.\n");
        } else {
            printf("%d\n", a / b);
        }
    } 
    }

    return 0;
}
