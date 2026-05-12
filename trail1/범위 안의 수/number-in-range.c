#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    const char* val = (a >= 10 && a <= 20) ? "yes" : "no";
    printf("%s", val);
    return 0;
}