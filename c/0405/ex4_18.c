#include<stdio.h>

int main(void) {
    int total_account;
    scanf("%d", &total_account);

    for (int i = 1; i < total_account; i++) {
        if (i % 5 == 0) {
            putchar('\n');
        }

        putchar('*');
    }

    return 0;
}