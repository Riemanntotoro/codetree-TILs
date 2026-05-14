#include <stdio.h>

int main() {
    int cnt = 0;
    for (int i=0; i<3; i++) {
        char flu;
        int T;
        scanf(" %c %d", &flu, &T);
        if (flu == 'Y' && T >= 37) {cnt += 1;}
    }
    if (cnt >= 2) {printf("E");}
    else {printf("N");}
    return 0;
}