#include <stdio.h>

int main() {
    int cnt3 = 0;
    int cnt5 = 0;
    for (int i=0; i<10; i++) {
        int a;
        scanf("%d", &a);
        if (a % 3 == 0) {cnt3++;}
        if (a % 5 == 0) {cnt5++;} 
    }
    printf("%d %d", cnt3, cnt5);
    return 0;
}