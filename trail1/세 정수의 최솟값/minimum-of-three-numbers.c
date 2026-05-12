#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int val = a;
    if (b < val) {val = b;}
    if (c < val) {val = c;}
    printf("%d", val);
    return 0;
}