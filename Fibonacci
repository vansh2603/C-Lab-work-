#include <stdio.h>

int main() {
    int n, a = 0, b = 1, next, i;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");

    for(i = 0; i < n; i++) {
        if(i <= 1)
            next = i;  // first two numbers are 0 and 1
        else {
            next = a + b;
            a = b;
            b = next;
        }
        printf("%d ", next);
    }

    return 0;
}
