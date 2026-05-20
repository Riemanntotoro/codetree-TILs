#include <stdio.h>
#include <stdbool.h>
int main() {
    int A, B;
    bool flag = false;
    scanf("%d %d", &A, &B);
    for (int i=A; i<=B; i++) {
        if (1920 % i == 0 && 2880 % i == 0) {
            flag = true;
            break;
        }
    }
    int val = flag==true ? 1 : 0;
    printf("%d", val);
    return 0;
}