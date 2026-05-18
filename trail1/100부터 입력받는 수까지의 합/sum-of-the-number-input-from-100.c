#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    int ssum = 0;
    for (int i=N; i<=100; i++) {ssum += i;}
    printf("%d", ssum);
    return 0;
}