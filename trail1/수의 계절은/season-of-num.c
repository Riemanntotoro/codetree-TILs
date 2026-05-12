#include <stdio.h>

int main() {
    int M;
    scanf("%d", &M);
    const char* res = "Winter";
    if (M >= 3 && M <= 5) {res = "Spring";}
    if (M >= 6 && M <= 8) {res = "Summer";}
    if (M >= 9 && M <= 11) {res = "Fall";}
    printf("%s", res);
    return 0;
}