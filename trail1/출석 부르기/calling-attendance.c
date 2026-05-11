#include <stdio.h>

int main() {
    const char* arr[] = {"John", "Tom", "Paul"};
    int N;
    scanf("%d", &N);
    if (N<=3) {printf("%s", arr[N-1]);}
    else  {printf("Vacancy");} 
    return 0;
}