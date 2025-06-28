#include <stdio.h>

int main() {
    int n, fact = 1, i;

    printf("Enter the number for which factorial is to be found: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Factorial does not exist for negative numbers.\n");
    } else {
        printf("%d! = ", n);
        for (i = n; i > 1; i--) {
            printf("%d x ", i);
            fact *= i;
        }
        fact *= 1;
        printf("1 = %d\n", fact);
    }

    return 0;
}
