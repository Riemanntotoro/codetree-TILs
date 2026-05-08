#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    char b = a==1 ? 't' : 'f';
    printf("%c", b);
    return 0;
}