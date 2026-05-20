#include <stdio.h>
#include <stdbool.h>
int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    bool flag = true;
    for (int i=a; i<=b; i++) {
        if (i % c == 0) {flag = false; break;}
    }
    const char* val = flag==true ? "YES" : "NO";
    printf(val);
    return 0;
}