#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    for (int i=0; i<N; i++) {
        int a;
        scanf("%d", &a);
        if (a % 3 == 0 && a % 2 == 1) {printf("%d\n", a);}
    }
    return 0;
}