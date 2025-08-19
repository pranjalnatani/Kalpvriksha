#include <stdio.h>

int main() {
    int num;
start:
    printf("Enter a number (0 to stop): ");
    scanf("%d", &num);
    if (num == 0) return 0;
    printf("You entered: %d\n", num);
    goto start;
}
