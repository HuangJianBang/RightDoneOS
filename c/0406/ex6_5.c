#include<stdio.h>

int sumup(int n) {
    int sum = 0; 
    for (int i = 0; i <= n; i++) {
        sum += i;
    }

    return sum;
}

int main(void) {
    int n;
    scanf("%d", &n);

    printf("%d", sumup(n));

    return 0;
}