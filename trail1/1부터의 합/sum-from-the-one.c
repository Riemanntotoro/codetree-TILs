#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int ssum = 0, mark = 0;
    for (int i=1; i<=N; i++) {
        ssum += i;
        if (ssum >= N) {
            mark = i;
            break;
        }
    }
    printf("%d", mark);
    return 0;
}