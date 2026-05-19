#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int ssum = 0;
    for (int i=0; i<N; i++) {
        int a;
        scanf("%d", &a);
        ssum += a;
    }
    printf("%d %.1lf", ssum, (double)ssum / N);
    return 0;
}