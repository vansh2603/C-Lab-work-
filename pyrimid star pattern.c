#include <stdio.h>
int main() {
    int N;
    printf("Enter how many no you want: ");
     scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        // Print leading spaces
        for (int j = 1; j <= N - i; j++) {
            printf("  ");
        }
        for (int k = 1; k <= (2 * i - 1); k++) {
            printf("* ");
        }

        printf("\n");
    return 0;
}
