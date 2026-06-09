#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    for (int i=1; i<=N; i++) {
        if (i % 2 == 0) {for (int j=0; j<i; j++) {printf("* ");}}
        else {printf("*");}
        printf("\n");
    }
    return 0;
}