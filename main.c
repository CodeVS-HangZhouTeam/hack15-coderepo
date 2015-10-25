#include <stdio.h>

int main(void) {
    int a, b;
    fprintf(stderr, "Please input number A: ");
    scanf("%d", &a);
    fprintf(stderr, "Please input number B: ");
    scanf("%d", &b);
    printf("%d + %d = %d\n", a, b, a+b);
    return 0;
}
