#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int cnt = 0;
    while (N < 1000) {
        if (N % 2 == 0) {N = 3 * N + 1;}
        else {N = 2 * N + 2;}
        cnt++;
    }
    printf("%d", cnt);
    return 0;
}