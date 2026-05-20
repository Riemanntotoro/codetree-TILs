#include <stdio.h>
#include <stdbool.h>
int main() {
    int N;
    scanf("%d", &N);
    bool flag = false;
    for (int i=2; i<N; i++) {
        if (N % i == 0) {flag = true; break;}
    }
    char val = flag==true ? 'C' : 'N';
    printf("%c", val);
    return 0;
}