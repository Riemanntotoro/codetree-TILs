#include <stdio.h>
#include <string.h>

int main() {
    int a;
    scanf("%d", &a);
    const char *c;
    c = a==100 ? "pass" : "failure";
    printf("%s", c);
    return 0;
}