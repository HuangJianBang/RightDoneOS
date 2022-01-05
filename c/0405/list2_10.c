#include<stdio.h>

int main() {
    int a, b;

    puts("please input two numbers.");
    printf("number one a:");
    scanf("%d", &a);
    printf("number two b:");
    scanf("%d", &b);

    printf("%f", (double) (a+b)/2);
}