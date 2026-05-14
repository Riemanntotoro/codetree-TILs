#include <stdio.h>

int main() {
    int S, Y;
    scanf("%d %d", &S, &Y);
    if (S ==0 && Y >= 19) {printf("MAN");}
    else if (S ==1 && Y >= 19) {printf("WOMAN");}
    else if (S ==1 && Y < 19) {printf("GIRL");}
    else {printf("BOY");}
    return 0;
}