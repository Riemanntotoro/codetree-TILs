#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int prod = 1;
    int mark = 1;
    for (int i=1; i<=10; i++) {
        prod *= i;
        if (prod >= N) {
            mark = i;
            break;
        }
    }
    printf("%d", mark);
    return 0;
}