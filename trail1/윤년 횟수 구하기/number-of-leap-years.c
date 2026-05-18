#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int cnt = 0;
    for (int i=1; i<=N; i++) {
        if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0) {cnt++;}
    }
    printf("%d", cnt);
    return 0;
}