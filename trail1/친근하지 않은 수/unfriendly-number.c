#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int cnt = 0;
    for (int i=1; i<=N; i++) {
        if (i % 2 == 0 || i % 5 == 0 || i % 3 == 0) {cnt++;}
    }
    printf("%d", N-cnt);
    return 0;
}