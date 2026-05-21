#include <stdio.h>
#include <stdbool.h>
int main() {
    bool flag = true;
    for (int i=0; i<5; i++) {
        int N;
        scanf("%d", &N);
        if (N % 3 != 0) flag = false;
    }
    int res = flag==true ? 1 : 0;
    printf("%d", res);
    return 0;
}