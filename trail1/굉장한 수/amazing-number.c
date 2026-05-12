#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);
    const char* res = (N%2==1 && N%3==0) || (N%2==0 && N%5==0) ? "true" : "false";
    printf("%s", res);
    return 0;
}