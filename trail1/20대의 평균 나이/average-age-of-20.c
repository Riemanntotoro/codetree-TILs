#include <stdio.h>

int main() {
    int cnt = 0;
    int ssum = 0;
    while (1) {
        int n;
        scanf("%d", &n);
        if (n <20 || n>=30) {printf("%.2lf", (double)ssum / cnt); break;}
        ssum += n;
        cnt += 1;
    }
    return 0;
}