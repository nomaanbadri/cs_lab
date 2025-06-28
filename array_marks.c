#include <stdio.h>

int main() {
    int marks[100], n, i;
    float sum = 0, average;

   
    printf("Enter the number of subjects: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++) {
        printf("Enter marks for subject %d: ", i + 1);
        scanf("%d", &marks[i]);
        sum += marks[i]; // Add to sum
    }

    printf("\nMarks of the student:\n");
    for(i = 0; i < n; i++) {
        printf("Subject %d: %d\n", i + 1, marks[i]);
    }

    average = sum / n;
    printf("\nAverage Marks = %.2f\n", average);

    return 0;
}
