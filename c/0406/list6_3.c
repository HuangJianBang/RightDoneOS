#include<stdio.h>

int sqr(int a) {
    return a * a;
}

int diff(int a, int b) {
    return (a > b ? a - b : b - a);
}

int main(void) {
    int x, y;

    scanf("%d,%d", &x, &y);

    printf("%d", diff(sqr(x), sqr(y)));

    return 0;
}