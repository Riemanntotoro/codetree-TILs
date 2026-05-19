#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int cnt = 0;
    while (N > 2) {
        N /= 2;
        cnt++;
    }
    printf("%d", cnt+1);
    return 0;
}