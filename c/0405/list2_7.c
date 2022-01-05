#include<stdio.h>

int main(void) {
    double vx, vy; 

    puts("please input two numbers.");
    printf("num one vx:");
    scanf("%lf", &vx);
    printf("num two vy:");
    scanf("%lf", &vy);

    printf("%f", vx / vy);
}