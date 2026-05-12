#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    const char* res = a % 13 == 0 || a % 19 == 0 ? "True" : "False";
    printf("%s", res);
    return 0;
}