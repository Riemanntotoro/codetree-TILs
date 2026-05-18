#include <stdio.h>
int game(int i){
    int a = i / 100;
    i = i % 100;

    int b = i / 10;
    int c = i % 10;

    if (b == 3 || c == 3 || b == 6 || c == 6 || b == 9 || c == 9 || i % 3 == 0) {return 0;}        
    else {return i;}
}

int main() {
    int N;
    scanf("%d", &N);
    for (int i=1; i<=N; i++) {printf("%d ", game(i));}
    return 0;
}