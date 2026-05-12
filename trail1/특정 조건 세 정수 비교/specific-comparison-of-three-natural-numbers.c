#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    int res1 = 0;
    int res2 = 0;
    if (a <= b && a <= c) {res1 = 1;}
    if (b == a && c == a) {res2 = 1;}
    printf("%d %d", res1, res2);
    return 0;
}