#include <stdio.h>

int main() {
    while (1) {
        int N;
        scanf("%d", &N);
        if (N < 25) {printf("Higher\n");}
        else if (N > 25) {printf("Lower\n");}
        else {
            printf("Good\n");
            break;
        }
    }
    return 0;
}