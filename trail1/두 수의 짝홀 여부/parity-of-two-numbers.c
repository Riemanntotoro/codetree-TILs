#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    const char* val1 = (a%2==0) ? "even" : "odd";
    const char* val2 = (b%2==0) ? "even" : "odd";
    printf("%s\n%s", val1, val2);
    return 0;
}