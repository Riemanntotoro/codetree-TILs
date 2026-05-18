#include <stdio.h>
void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int A, B;
    scanf("%d %d", &A, &B);
    if (A > B) {swap(&A, &B);}
    int ssum = 0;
    for (int i=A; i<=B; i++) {
        if (i % 5 == 0) {ssum += i;}
    }
    printf("%d", ssum);
    return 0;
}