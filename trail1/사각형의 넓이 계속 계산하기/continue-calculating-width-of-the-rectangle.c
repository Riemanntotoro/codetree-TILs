#include <stdio.h>

int main() {
    while (1) {
        int a, b;
        char c;
        scanf("%d %d %c", &a, &b, &c);
        printf("%d\n", a*b);
        if (c == 'C') break;
    }
    return 0;
}