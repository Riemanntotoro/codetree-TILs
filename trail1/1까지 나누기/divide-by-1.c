#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int i = 1, cnt = 0;
    while(N > 1) {
        N /= i;
        cnt++;
        i++;
    }
    printf("%d", cnt);
    return 0;
}