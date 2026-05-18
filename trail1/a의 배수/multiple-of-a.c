#include <stdio.h>

int main() {
    int N, A;
    scanf("%d %d", &N, &A);
    int i = 1;
    while (i <= N) {
        if (i % A == 0) {printf("%d\n", 1);}
        else {printf("%d\n", 0);}
        i++;
    }
    return 0;
}