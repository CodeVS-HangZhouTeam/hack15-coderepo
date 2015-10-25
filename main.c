#include <stdio.h>

int main(void) {
    int a; b; /*
    ~~~~~^ Syntax error here */
    fprintf(stderr, "Please input number A: ");
    scanf("%d", &a);
    fprintf(stderr, "Please input number B: ");
    scanf("%d", &b);
    if(b >= 0) {
        printf("%d + %d = %d\n", a, b, a+b);
    } else {
        printf("%d + (%d) = %d\n", a, b, a+b);
    }
    return 0;
}
