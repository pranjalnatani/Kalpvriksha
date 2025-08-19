#include <stdio.h>

int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    if (x == 5) goto skip;
    printf("This will only print if x is not 5\n");
skip:
    printf("End of program\n");
    return 0;
}
