#include<stdio.h>

int main(void) {
    int n1, n2;

    puts("please input two numbers:");
    printf("number one:");
    scanf("%d", &n1);
    printf("number two:");
    scanf("%d", &n2);

    if (n1 == n2) {
        puts("equal");
    } else {
        puts("not equal");
    }
}