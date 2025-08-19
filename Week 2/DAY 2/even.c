#include <stdio.h>

int isEven(int num) {
    return num % 2 == 0;
}

int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    if (isEven(x)) printf("The number is even\n");
    else printf("The number is odd\n");
    return 0;
}
