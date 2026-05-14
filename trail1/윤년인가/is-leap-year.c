#include <stdio.h>

int main() {
    int Y;
    scanf("%d", &Y);
    const char* res = (Y % 4 == 0 && Y % 100 != 0) || Y % 400 == 0 ? "true" : "false";
    printf(res);
    return 0;
}