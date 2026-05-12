#include <stdio.h>

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    int score;
    if (A >= 90 && B >= 95) {score = 100000;}
    else if (A >= 90 && B >= 90) {score = 50000;}
    else {score = 0;}
    printf("%d", score);
    return 0;
}