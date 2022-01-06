#include<stdio.h>

int max2(int a, int b) {
    if (a > b) {
        return a;
    } 

    return b;
}

int main(void) {
    int n1, n2;

    scanf("%d-%d", &n1, &n2);
    printf("%d", max2(n1, n2));

    return 0;
}