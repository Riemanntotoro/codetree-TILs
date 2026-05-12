#include <stdio.h>

int main() {
    int a1, b1;
    char a2, b2;
    scanf("%d %c %d %c", &a1, &a2, &b1, &b2);
    int val = (a1 >= 19 && a2 == 'M') || (b1 >= 19 && b2 == 'M') ? 1 : 0;
    printf("%d", val);
    return 0;
}