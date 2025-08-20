#include <stdio.h>

int maxOfThree(int a, int b, int c) {
    int max = a;

    if (b > max)
        max = b;
    if (c > max)
        max = c;

    return max;
}

int main() {
    int x, y, z;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &x, &y, &z);

    printf("Maximum number = %d\n", maxOfThree(x, y, z));
    return 0;
}
