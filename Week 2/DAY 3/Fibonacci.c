#include <stdio.h>

void fibonacci(int n) {
    int a = 0, b = 1, c;
    for (int i = 0; i < n; i++) {
        printf("%d ", a);
        c = a + b;
        a = b;
        b = c;
    }
}

int main() {
    int terms;
    printf("Enter number of terms: ");
    scanf("%d", &terms);
    fibonacci(terms);
    return 0;
}
