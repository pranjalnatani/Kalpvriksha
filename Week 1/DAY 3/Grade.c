#include <stdio.h>

int main() {
    int n, i;
    float marks;

    printf("Enter number of students: ");
    scanf("%d", &n);
    
    for (i = 1; i <= n; i++) {
        printf("Enter marks for student %d: ", i);
        scanf("%f", &marks);

        if (marks >= 90) {
            printf("Grade: A\n");
        } else if (marks >= 80) {
            printf("Grade: B\n");
        } else if (marks >= 70) {
            printf("Grade: C\n");
        } else if (marks >= 60) {
            printf("Grade: D\n");
        } else {
            printf("Grade: F\n");
        }
    }

    return 0;
}
