#include<stdio.h>

#define sqr(x) ((x) * (x))

int main() {
    int n;
    double x;

    printf("input n: ");
    scanf("%d", &n);

    putchar('\n');

    printf("input x: ");
    scanf("%lf", &x);

    putchar('\n');

    printf("%d\n", sqr(n));
    printf("%f\n", sqr(x));
}