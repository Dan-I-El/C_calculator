#include <stdio.h>

int main() {

    float x, y;
    int i;

    printf("x = ");
    scanf("%f", &x);

    printf("\ny = ");
    scanf("%f", &y);

    printf("\nChoose operation: 1 = '*', 2 = '+', 3 = '/', 4 = '-'\n");
    scanf("%d", &i);
    
    float answer;

    if(i == 1) {
        answer = x * y;
        printf("%g", answer);
    }
    else if(i == 2) {
        answer = x + y;
        printf("%g", answer);
    }
    else if(i == 3) {
        answer = x / y;
        printf("%g", answer);
    }
    else {
        answer = x - y;
        printf("%g", answer);
    }

    return 0;
}