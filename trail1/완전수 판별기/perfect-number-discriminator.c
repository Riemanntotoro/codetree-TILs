#include <stdio.h>

int main() {
    int N;
    int ssum = 0;
    scanf("%d", &N);
    for (int i=1; i<N; i++) {
        if (N % i == 0) {ssum += i;}
    }
    char val = ssum == N ? 'P' : 'N';
    printf("%c", val);
    return 0;
}