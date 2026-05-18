#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int ssum = 0;
    for (int i=0; i<N; i++) {
        int a;
        scanf("%d", &a);
        if (a % 3 == 0 && a % 2 == 1) {ssum += a;}
    }
    printf("%d", ssum);
    return 0;
}