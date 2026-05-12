#include <stdio.h>

int main() {
    int Am, Ae, Bm, Be;
    scanf("%d %d %d %d", &Am, &Ae, &Bm, &Be);
    if (Am == Bm && Ae > Be) {printf("A");}
    else if (Am == Bm && Ae < Be) {printf("B");}
    else if (Am > Bm) {printf("A");}
    else {printf("B");}
    return 0;
}