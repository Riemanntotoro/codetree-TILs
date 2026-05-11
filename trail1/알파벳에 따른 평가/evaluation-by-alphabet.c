#include <stdio.h>
#include <string.h>

typedef struct {
    char key;
    const char* val;
} score;

int main() {
    score arr[] = {{'S', "Superior"}, {'A', "Excellent"}, {'B', "Good"}, {'C', "Usually"}, {'D', "Effort"}};
    char grade;
    scanf("%c", &grade);
    const char* result = "Failure";
    for (int i=0; i<5; i++) {
        if (grade == arr[i].key) {result = arr[i].val;}
    }
    printf("%s", result);
    return 0;
}