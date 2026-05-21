#include <stdio.h>
#include <stdbool.h>

int main() {
    int N;
    scanf("%d", &N);
    bool flag = true;
    for (int i=2; i<N; i++) {
        if (N % i == 0) {flag = false; break;}
    }
    char res = flag==true ? 'P' : 'C';
    printf("%c", res);
    return 0;
}