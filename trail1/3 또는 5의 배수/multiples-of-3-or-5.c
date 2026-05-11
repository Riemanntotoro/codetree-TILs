#include <stdio.h>

int main() {
    int A;
    scanf("%d", &A);
    const char* val1 = (A % 3 == 0) ? "YES" : "NO";
    const char* val2 = (A % 5 == 0) ? "YES" : "NO";
    printf("%s\n%s", val1, val2);
    return 0;
}