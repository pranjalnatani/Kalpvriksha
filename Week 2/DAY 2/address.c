#include <stdio.h>

int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    int *ptr = &x;
    printf("Address: %p\n", ptr);
    printf("Value: %d\n", *ptr);
    return 0;
}
