#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    const char* res = a < 10 || a > 20 ? "yes" : "no";
    printf("%s", res);
    return 0;
}