#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int i = 0;
    while(N > 0) {
        printf("%d ", N);
        N--;
    }
    return 0;
}