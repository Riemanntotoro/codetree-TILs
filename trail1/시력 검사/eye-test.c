#include <stdio.h>

int main() {
    double a, b;
    scanf("%lf %lf", &a, &b);
    const char* val = "Low";
    if (a >= 1.0 && b >= 1.0) {val = "High";}
    else if (a >= 0.5 && b >= 0.5) {val = "Middle";}
    printf("%s", val);
    return 0;
}