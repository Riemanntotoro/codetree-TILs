#include <stdio.h>

int main() {
    int cnt = 0;
    while (1) {
        int N;
        scanf("%d", &N);
        if (N % 2 == 1) continue;
        printf("%d\n", N/2);
        cnt++;
        if (cnt == 3) break;
    }
    return 0;
}