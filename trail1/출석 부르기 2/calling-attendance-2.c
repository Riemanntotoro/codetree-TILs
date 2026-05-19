#include <stdio.h>

int main() {
    while (1) {
        int N;
        scanf("%d", &N);
        if (N == 1) {printf("John\n");}
        else if (N == 2) {printf("Tom\n");}
        else if (N == 3) {printf("Paul\n");}
        else if (N == 4) {printf("Sam\n");}
        else {printf("Vacancy\n"); break;}
    }
    return 0;
}