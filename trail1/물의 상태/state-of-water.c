#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    if (N < 0) {printf("ice");}
    else if (N >= 100) {printf("vapor");}
    else {printf("water");}
    return 0;
}