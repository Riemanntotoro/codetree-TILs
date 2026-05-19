#include <stdio.h>

int main() {
    int cnt = 0, ssum = 0;
    for(int i=0; i<10; i++) {
        int a;
        scanf("%d", &a);
        if (a>=0 && a<=200) {cnt++; ssum += a;}
    }
    printf("%d %.1lf", ssum, (double)ssum/cnt);
    return 0;
}